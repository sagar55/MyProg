/*Following  is a code to create a general binary tree with some other utilities ,but it's not giving  correct  result due do some mistake.
Do some minimum changes to print the correct output. Each entry should run as given in the menu.


You have to understand the code and take your own inputs.

NOTE:- Marks will be given on the basis of number of entries working in the menu

This is a LEVEL 3 question and has following marking scheme:
1.)0 mark will be provided if programme does not compile.
2.)0 marks will be provided if programme compile as it is already compiling.
3.)15 marks will be provided if programme compile and gives correct output(these will be divided according to the no of correctly working entries in the menu.).
*/
#define NULL 0
typedef struct stack
{
 int top;
 void* arr[50];
} stack;


int push(stack *s, void *entry)
{
    if(s->top == 49)
    printf("Stack Full\n");
    else
    { s->top=s->top+1; s->arr[s->top] = entry; }
}

void * pop(stack *s)
{
     if(s->top == -1)
            printf("Stack empty");
     else
        { s->top=s->top-1; return s->arr[s->top+1]; }
}

typedef struct node
{
       struct node *lchild,*rchild;
       int info;
} node;

node * maketree(int );

node * makenode(int x)
{
      node *temp=(node *)malloc(sizeof(node));
      temp->info = x;
      temp->lchild = NULL;
      temp->rchild = NULL;
      return temp;
}

node * setleft(node *root)
{
     int l;
     printf("Enter the left child for %d ", root->info);
     scanf("%d", &l);           
     if(l == -1)
         root->lchild = NULL;
     else
         root->lchild = maketree(l);
     return root->lchild;
}

node * setright(node *root)
{
     int r;
     printf("Enter the right child for %d ", root->info);
     scanf("%d", &r);           
     if(r == -1)
         root->rchild = NULL;
     else
         root->rchild = maketree(r);
     return root->rchild;
}

node *maketree(int x)
{
     node *root = makenode(x);
     root->lchild = setleft(root);
     root->rchild = setright(root);
     return root;
}

node * father(node * root, node *p)
{
    
     if(root == NULL)
          return NULL;
     else if(root == p)
          return NULL;
     else if(root->lchild == p || root->rchild == p)
          {
        printf("Father ok\n");
          return root;
          }
         else if(father(root->lchild, p)!=NULL )
          return  father(root->lchild, p);
     else
         return father(root->rchild, p); 
}              

void nonRecurPreorder(node * root)
{
     node *p = root;
     stack s; int i;
     s.top = -1;
     while(p!=NULL)
     {
         printf("%d ", p->info);
         push(&s,p);
         p = p->lchild;
     }
     while(s.top!=-1)
     {
                   p=pop(&s);
                   p = p->rchild;
                   while(p!=NULL)
                     {
                         printf("%d ", p->info);
                         push(&s,p);
                         p = p->lchild;
                     }
     }
}
         
void recurPreorder(node *root)
{
     if(root == NULL)
             return;
     else
     {
         printf("%d  ",root->info);
         recurPreorder(root->lchild);
         recurPreorder(root->rchild);
     }
}

node *nodePointerAt(node *root, int x)
{
     node *p;
     if(root == NULL)
             return NULL;
     else if(root->info == x)
         {printf("Running %d\n",x);return root;}
     else if( (p = nodePointerAt(root->lchild, x)) != NULL)
          return p;
     else if( (p = nodePointerAt(root->rchild, x)) != NULL)
          return p;
     else
         return NULL;
}

node * getCommonFather(node *root, node *node1, node *node2)
{
   
     if((father(root, node1)) == (father(root, node2)) )
         {printf("Running\n");
         return father(root, node1);}
     else if( (father(root, node1)) == getCommonFather(root, node1, father(root,node2)))
        return father(root,node1);
      else if( (father(root, node2)) ==getCommonFather(root, father(root,node1),node2))
        return father(root,node2);
        else
        getCommonFather(root, father(root,node1),father(root,node2));
}

main()
{
      node *root, *currentRoot, *currentRoot2;
      int i =150, info, info2;
      
      while(i != 0)
      {
              printf("\nMenu\n");
              printf("To create a tree, press 1\n");
              printf("To print tree using non recursive method, press 2\n");
              printf("For getting common father program, press 3\n");
              printf("To get the father of current node, press 4\n");
              printf("To print the tree in preorder using recursive method press 5\n");
              printf("To find a node, press 6\n");
              printf("To exit program press 0\n");
              scanf("%d", &i);
              
              switch (i)
              {
                       case 1:
                            printf("Give info for the root  "); scanf("%d", &info); root = maketree(info) ; break;
                       case 2:
                            nonRecurPreorder(root);break;
                       case 3:
                            printf("Give info for the node1  "); scanf("%d", &info);currentRoot = nodePointerAt(root, info);
                            printf("Give info for the node2  "); scanf("%d", &info2);currentRoot2 = nodePointerAt(root, info2);
                            printf("\nThe common father of %d and %d is %d \n",info,info2,getCommonFather(root, currentRoot, currentRoot2)->info ); break;
                       case 4:
                            if(father(root,currentRoot) == NULL )printf("The currentRoot is root itself\n");
                            else printf("\nThe father of current Root is %d\n", father(root,currentRoot)->info);
                            break;
                       case 5:
                            recurPreorder(root);break;
                       case 6:
                            printf("Give node's info to be found  ");
                            scanf("%d",&info);
                            currentRoot = nodePointerAt(root,info);
                            if(currentRoot == NULL )
                               printf("\nThe node is not present in tree\n");
                            else
                               printf("\nThe node is %d \n", currentRoot->info);
                            break;
                       case 0:
                            getch();
              }
      }
}
