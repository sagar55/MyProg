#include <iostream>
#include <cstdlib>
#include <queue>
int num_nodes,num_edges;
using namespace std;
class Node
{
      public:
      Node* next_node;//will be null if there is no "next node" or if the node is being used as an edge node
      Node* next_edge;//will be null if no further edges are there
      int node_name;
      char color;     
      Node(int i)
      {
            next_node=NULL;
           next_edge=NULL;
            node_name=i;//name of node is the integer in i
            color='w';
      }     
      Node()
      {
            next_node=NULL;
           next_edge=NULL;
            color='w';
      }     
};

class Adjacency_list
{
      public:    
      int m,n,i;
      Node* temp;
      Node a[10001];  
      int makeList()
      {
            for(i=1;i<=10000;i++)
      {a[i].node_name=i;
      a[i].next_edge=NULL;}
           cin>>num_nodes;
           cin>>num_edges;
           if(num_edges==num_nodes-1&&num_nodes!=1){
           for(int i=1;i<=num_edges;i++)
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
             return 1;
             }
             else
             { for(int i=1;i<=num_edges;i++)
           {
                   cin>>n;
                  cin>>m;
               }     return 0;}                                      
      } 
};
int bfs(Node a[],int s)
{
  Node* temp1;
  Node* temp2;
  int count=0;
  queue<Node*> q;
  Node* u;
  temp1=a+s;
          temp1->color='g';
              q.push(temp1);
              count++;
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
                                  q.push(temp2->next_node);
                                  count++;
                                  }
                                   temp2=temp2->next_edge;
                                  }
                                  temp1->color='b';
          }
          if(count<num_nodes)
          return 0;
          else
          return 1;
          }
int main()
{
    Adjacency_list A;
    int i,v,q;
    q=A.makeList();
    if(q==0)printf("NO\n");
    else{
    v=bfs(A.a,1);
    if(v==0)
    printf("NO\n");
    else
      printf("YES\n");}
     
return 0;  
}
