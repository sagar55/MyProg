#include <iostream>
#include <cstdlib>
#include <queue>
int num_nodes;
using namespace std;
class Node
{
      public:
      Node* next_node;//will be null if there is no "next node" or if the node is being used as an edge node
      Node* next_edge;//will be null if no further edges are there
      int node_name;
       int d;
      char color;     
      Node(int i)
      {
            next_node=NULL;
           next_edge=NULL;
            node_name=i;
            d=-1;//name of node is the integer in i
            color='w';
      }     
      Node()
      {
            next_node=NULL;
           next_edge=NULL;
            color='w';
            d=-1;
      }     
};

class Adjacency_list
{
      public:    
      int m,n,i;
      Node* temp;
      Node a[10001];  
      void makeList()
      {
            for(i=1;i<=10000;i++)
      {a[i].node_name=i;
      a[i].next_edge=NULL;
      a[i].d=-1;}
           cin>>num_nodes;
           for(int i=1;i<=num_nodes-1;i++)
           {
                   cin>>n;
                  cin>>m;
                  if(a[n].next_edge==NULL){
                       a[n].next_edge=new Node(m);
                       a[n].next_edge->next_node=a+m;
                        }
                  else
                  {             temp=a+n;    
                   
                  while(temp->next_edge!=NULL)
                  temp=temp->next_edge;
                  temp->next_edge=new Node(m);
                   temp->next_edge->next_node=a+m;
                   }
                   
                  if(a[m].next_edge==NULL){
                       a[m].next_edge=new Node(n);
                        a[m].next_edge->next_node=a+n;  
                         }
                       else{              
                                           temp=a+m;       
                  while(temp->next_edge!=NULL)
                  temp=temp->next_edge;
                  temp->next_edge=new Node(n);
                  temp->next_edge->next_node=a+n;
                 }    
             }                                   
      } 
};
int bfs(Node a[],int s)
{
  Node* temp1;
  Node* temp2;
  int max=0;
  queue<Node*> q;
  Node* u;
  temp1=a+s;
  temp1->d=0;
          temp1->color='g';
              q.push(temp1);
          while(!q.empty())
          {
                           
                           u=q.front(); temp1=u;
                          q.pop();
                           temp2=temp1->next_edge;
                           while(temp2!=NULL)
                           {
                            if(temp2->next_node->color=='w')     
                           {   
                                  temp2->next_node->color='g';
                                   temp2->next_node->d=temp1->d+1;
                                   if(max< temp2->next_node->d)
                                   max= temp2->next_node->d;
                                  q.push(temp2->next_node);
                                  }
                                   temp2=temp2->next_edge;
                                  }
                                  temp1->color='b';
          }
        return max;
          }
int main()
{
    Adjacency_list A;
    int i,v,q;
    A.makeList();
    printf("%d\n",bfs(A.a,1));
     
return 0;  
}
