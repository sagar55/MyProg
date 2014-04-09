#include<stdio.h>
#include<iostream>
using namespace std;
typedef struct node
{
    struct node *left;
    struct node *right;
    struct node *parent;
    int val;
}Node;
    
Node *getnode(int val)
{
    Node *temp=new Node;
    temp->left='\0';
    temp->right='\0';
    temp->val=val;
    return temp;
}
Node *search(Node *root,int val)
{
    if(root=='\0')
    return '\0';
    if(root->val==val)
    return root;
    else if(root->val>val)
    return search(root->left,val);
    else 
    return search(root->right,val);
}
Node* in_succesor(Node *root,int val)
{
    root=search(root,val);
    if(root->right!='\0')
    {
        root=root->right;
        while(root->left!='\0')
        root=root->left;
        return root;
    }
    else
    {
        Node *p=root->parent;
        while(p!='\0'&&root==p->right)
        {
            root=p;
            p=root->parent;
        }
        return p;
    }  
}

void del(Node **Mainroot,int val)
{
    Node *root=search(*Mainroot,val);
    
   Node *p=root->parent;
    if(root->left=='\0'&&root->right=='\0')
    {
        if(p!='\0')
        {if(p->left==root)
        p->left='\0';
        else
       p->right='\0';
    }
        p='\0';
    }
    else if(root->left=='\0')
    {
        if(p=='\0')
        *Mainroot=(*Mainroot)->right;
        else
        {
        if(p->left==root)
        p->left=root->right;
        else
        p->right=root->right;
        }
        p='\0';
        root->right='\0';
    }
     else if(root->right=='\0')
    {
        if(p=='\0')
        *Mainroot=(*Mainroot)->left;
        else
        {
        if(p->left==root)
        p->left=root->left;
        else
        p->right=root->left;
        }
        p='\0';
        root->left='\0';
    }
    else
    {
    Node *temp=in_succesor(root,val);
         if(temp->parent=='\0')
         *Mainroot=(*Mainroot)->right;
        else{ if(temp->parent->left==temp)
        temp->parent->left=temp->right;
        else
        temp->parent->right=temp->right;
        }
        temp->parent='\0';
        temp->right='\0';
        root->val=temp->val;
    }   
    }

void insert(Node **tree,int val)
{
 if(*tree=='\0')
 {
        Node *temp=getnode(val);
        *tree=temp;
    }
    else
    {
        if((*tree)->val>val)
        insert(&(*tree)->left,val);
        else
        insert(&(*tree)->right,val);
    }
}
Node *insert2(Node *root,int val)
{
    if(root=='\0')
    {
        Node *temp=getnode(val);
        return temp;
    }
    else
    {
        if(root->val>val)
   { root->left=insert2(root->left,val);
   root->left->parent=root;}
    else
    { root->right=insert2(root->right,val);
      root->right->parent=root;}

   return root;
    }
}
    
Node *LCA(Node *root, int p, int q) {
  if (!root) return '\0';
  if (root->val == p || root->val == q) return root;
  Node *L = LCA(root->left, p, q);
  Node *R = LCA(root->right, p, q);
  if (L && R) return root;  // if p and q are on both sides
  return L ? L : R;  // either one of p,q is on one side OR p,q is not in L&R subtrees
}
Node *LCA2(Node *root, int p1, int q1) {
    Node *p=search(root,p1);
    Node *q=search(root,q1);
  int visited[100];
  memset(visited,0,sizeof(visited));
  while (p || q) {
    if (p) {
      if (visited[p->val])
        return p; // insert p failed (p exists in the table)
      visited[p->val]=1;
      p = p->parent;
    }
    if (q) {
      if (visited[q->val])
        return q; // insert q failed (q exists in the table)
     visited[q->val]=1;
    q = q->parent;
    }
  }
  return NULL;
}
int cnt,flip;

Node *pathlen(Node *root, int p, int q) {
  if (!root) return '\0';
  if (root->val == p|| root->val == q){cnt++;
  if(root->left&&(root->left->val == p|| root->left->val == q))
  {cnt++;flip=0;}
  else if(root->right&&(root->right->val == p|| root->right->val == q)){cnt++;flip=0;}
   return root;}
  Node *L = pathlen(root->left, p, q);
  Node *R = pathlen(root->right, p, q);
  if (L && R){cnt++;flip=0; return root; } // if p and q are on both sides
  if(L&&flip)
  cnt++;
  if(R&&flip)
  cnt++;
  return L ? L : R;  // either one of p,q is on one side OR p,q is not in L&R subtrees
}

int longestPath(Node *root, int *h) {

    int left_height=0, right_height=0;
    int left_max=0, right_max=0;
    
    if(root==NULL) {
      *h=0;
      return 0;
    }
    
    left_max=longestPath(root->left,&left_height);
    right_max=longestPath(root->right,&right_height);
    
    *h=max(left_height,right_height)+1;
    
    int temp = max(left_max,right_max);
    
    return max(temp, left_height+right_height);
    
}

Node *LCA4(Node *root, int p1, int q1) {
 //   Node *p=search(root,p1);
 //   Node *q=search(root,q1);
  if (!root ) return NULL;
  if (max(p1, q1) < root->val)
    return LCA4(root->left, p1,q1);
  else if (min(p1, q1) > root->val)
    return LCA4(root->right, p1, q1);
  else
    return root;
}
/*
Node *LCA3(Node *p, Node *q) {
    
  int h1 = getHeight(p);
  int h2 = getHeight(q);
  // swap both nodes in case p is deeper than q.
  if (h1 > h2) {
    swap(h1, h2);
    swap(p, q);
  }
  // invariant: h1 <= h2.
  int dh = h2 - h1;
  for (int h = 0; h < dh; h++)
    q = q->parent;
  while (p && q) {
    if (p == q) return p;
    p = p->parent;
    q = q->parent;
  }
  return NULL;  // p and q are not in the same tree
}
*/

void maxPathSumHelper(Node *node, int &csum, int &maxsum) {
    if (!node) {
            csum = 0;
            return;
        }
        int lsum = 0, rsum = 0;
        maxPathSumHelper(node->left, lsum, maxsum);
        maxPathSumHelper(node->right, rsum, maxsum);
        csum = max(node->val, max(node->val + lsum, node->val + rsum));
        maxsum = max(maxsum, max(csum, node->val + lsum + rsum));
    }
    int maxPathSum(Node *root) {
        // Start typing your C/C++ solution below
        // DO NOT write int main() function
        int csum;
        int maxsum = INT_MIN;
        maxPathSumHelper(root, csum, maxsum);
        return maxsum;

    }
void inorder(Node *root)
{
    if(root!='\0'){
    inorder(root->left);
    printf("%d ",root->val);
    inorder(root->right);
}
}
    
main()
{
    Node *root='\0';
   /* insert(&root,15);
    insert(&root,6);
    insert(&root,18);
    insert(&root,3);
    insert(&root,7);
    insert(&root,17);
    insert(&root,20);
    insert(&root,2);
    insert(&root,4);
    insert(&root,13);
    insert(&root,9); */
    /*
    root=insert2(root,15);
    root=insert2(root,6);
    root=insert2(root,18);
    root=insert2(root,3);
    root=insert2(root,7);
    root=insert2(root,17);
    root=insert2(root,20);
    root=insert2(root,2);
    root=insert2(root,4);
    root=insert2(root,13);
    root=insert2(root,9);
*/
root=getnode(-25);
root->left=getnode(9);
root->right=getnode(20);
root->left->left=getnode(12);
    printf("%d\n",maxPathSum(root));
    
    /*
    printf("%d\n",LCA4(root,4,13)->val);
    
    printf("%d\n",LCA4(root,7,4)->val);
    
    printf("%d\n",LCA4(root,7,13)->val);
    
    printf("%d\n",LCA4(root,4,20)->val);
    printf("%d\n",LCA4(root,17,18)->val);  
    */
    /*
    inorder(root);
    printf("\n");
    del(&root,7);
    inorder(root);
    printf("\n");
    del(&root,9);
    inorder(root);
    printf("\n");
    del(&root,3);
    inorder(root);
    printf("\n");
    del(&root,17);
    inorder(root);
    printf("\n");
    del(&root,15);
    inorder(root);
    printf("\n");
    */
 /*
 cnt=0;flip=1;
 printf("%d %d\n",pathlen(root,4,13)->val,cnt);
 cnt=0;flip=1;
  printf("%d %d\n",pathlen(root,4,7)->val,cnt);
  cnt=0;flip=1;
  printf("%d %d\n",pathlen(root,3,17)->val,cnt);
  cnt=0;flip=1;
  printf("%d %d\n",pathlen(root,18,17)->val,cnt);
  cnt=0;flip=1;
   printf("%d %d\n",pathlen(root,17,18)->val,cnt);
   cnt=0;flip=1;
    printf("%d %d\n",pathlen(root,20,9)->val,cnt);
    cnt=0;flip=1;
     printf("%d %d\n",pathlen(root,13,7)->val,cnt);
 */
 /*
 cout<<search(root,20)->val<<endl;
 cout<<search(root,4)->val<<endl;
 cout<<in_succesor(root,13)->val<<endl;
 
 cout<<in_succesor(root,3)->val<<endl;
 
 cout<<in_succesor(root,4)->val<<endl;
 
 cout<<in_succesor(root,2)->val<<endl;
 
 cout<<in_succesor(root,15)->val<<endl;
 
 cout<<in_succesor(root,18)->val<<endl;
 
 cout<<in_succesor(root,17)->val<<endl;
 */
    getchar();
}
/*
                     15
         6                   18
      3      7            17    20
    2   4       13
              9              
*/








