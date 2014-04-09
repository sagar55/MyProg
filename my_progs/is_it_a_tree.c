#include <iostream>
#include <cstdlib>
#include <queue>
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
};

class Adjacency_list
{
      public:    
      int num_nodes,num_edges,m,n,i;
      Node* temp;  
      Node a[10001];
      temp=a;
      for(i=1;i<=10000;i++)
      {temp->node_name=i;
      temp++;}
      void makeList()
      {
           cin>>num_nodes;
           cin>>num_edges;
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
                   
                  if(a[m].next_edge==NULL)){
                       a[m].next_edge=new Node(n);
                        a[m].next_edge->next_node=a+n;  
                         }
                       else{               
                                           temp=a+m;       
                  while(temp->next_edge!=NULL)
                  temp=temp->next_edge;
                  temp->next_edge==new Node(n);
                  temp->next_edge->next_node=a+n;}    
             }
                                                              
      }
      void display()
      {
           Node* temp;
           for(i=1;i<=num_nodes;i++)
           {
                  temp=a+1;
                  cout<<i<<"\t";
                  for(temp=temp->next_edge;temp!=NULL; temp=temp->next_edge)
                  {                                                 
                         cout<<temp->node_name;
                         if(temp->next_edge!=NULL)
                            cout<<"--->";                                                      
                  }  
           }
           cout<<endl;          
      }   
};
void bfs(Node a[],int s)
{
  Node* temp1;
  Node* temp2;
  queue<Node*> q;
  Node* u;
  temp1=a+s;
          temp1->color='g';
              q.push(temp1);
          while(!q.empty())
          {
                           
                           u=q.front(); temp1=u;
                           cout<<"deq"<<u->node_name<<"\n";q.pop();
                           temp2=temp1->next_edge;
                           while(temp2!=NULL)
                           {
                            if(temp2->next_node->color=='w')     
                           {   
                                  temp2->next_node->color='g';
                                  q.push(temp2->next_node);
                                  cout<<"enq"<<temp2->next_node->node_name<<"\n";
                                  }
                                   temp2=temp2->next_edge;
                                  }
                                  temp1->color='b';
          }
          }
int main()
{
    Adjacency_list A;
    int i,v;
    A.makeList();
      A.display();
    cout<<"enter vertex name from which bfs to be run";
    cin>>i ;
    bfs(A.a,i);
     cout<<"\n";
 system("pause");
return 0;  
}
