#include <iostream>
#include <cstdlib>
#include <queue>
using namespace std;
class Node
{
      public:
      Node* next_node;
      Node* next_edge;
      int node_name;
      int d;
      char color;
      Node* parent;      
      Node(int i)
      {
            next_node=NULL;
           next_edge=NULL;
            node_name=i;
            color='w';
            d=-1;
            parent=NULL;
      }     
};

class Adjacency_list
{
      public:    
                 
      int num_nodes;
      Node* head;  
      Node* p;
      Node* q;
      Node* temp;
      void makeList()
      {
           cout<<"\nEnter the number of nodes: ";
           cin>>num_nodes;
           
           Node* temp_node=NULL;
           Node* temp_edge=NULL;
           int n_no,c;
           for(int i=0;i<num_nodes;i++)
           {
                   cout<<"enter the node no.\t";
                   cin>>n_no;
                   if(i==0)
                   {
                           head=new Node(n_no);                          
                           temp_node=head; 
                            
                          
                            temp_edge=temp_node;
                           cout<<"\nEnter the nodes adjacent to node "<<n_no<<" (enter -1 to stop): ";
                           cin>>c;
                           while(c!=-1){
                                  temp_edge->next_edge=new Node(c);
                                   temp_edge=temp_edge->next_edge;  
                                         cin>>c;         
                           }
                                                
                   }
                   else
                   {
                       temp_node->next_node=new Node(n_no);
                        temp_node=temp_node->next_node;                   
                       temp_edge=temp_node;
                           cout<<"\nEnter the nodes adjacent to node "<<n_no<<" (enter -1 to stop): ";
                         cin>>c;
                           while(c!=-1){
                                  temp_edge->next_edge=new Node(c);
                                   temp_edge=temp_edge->next_edge;                                        
                                 cin>>c;           
                           }                           
                   }                                                  
           }
           p=head;
           while(p!=NULL){
                                     temp=p->next_edge;
           while(temp!=NULL)
           {                    q=head; while(q->node_name!=temp->node_name)
                                              q=q->next_node;
                              temp->next_node=q;
                              temp=temp->next_edge;}              
                    p=p->next_node;}                         
                                              
                                              
      }
      void display()
      {
           Node* temp_node=head;
           Node* temp_edge=NULL;
           for(;temp_node!=NULL;)
           {
                  temp_edge=temp_node;
                  //cout<<temp_node->node_name;
                  
                  //print all edges for this node
                  for(;temp_edge!=NULL; temp_edge=temp_edge->next_edge)
                  {                                                 
                         cout<<temp_edge->node_name<<"("<<temp_edge->d<<")";
                         if(temp_edge->next_edge!=NULL)
                            cout<<"--->";                                                      
                  }  
                  
                  temp_node=temp_node->next_node;//move to next main node
                  cout<<endl;                                
                 
           }
           cout<<endl;           
           
      }   
      
};
void bfs(Node* head,int s)
{
  Node* temp1;
  Node* temp2;
  Node* temp3;
  queue<Node*> q;
  Node* u;
  temp1=head;
          while(temp1->node_name!=s)
          temp1=temp1->next_node;
          temp1->color='g';
          temp1->d=0;
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
                                  temp2->next_node->d=temp1->d+1;
                                  temp2->next_node->parent=temp1;
                                  q.push(temp2->next_node);
                                  cout<<"enq"<<temp2->next_node->node_name<<"\n";
                                  }
                                   temp2=temp2->next_edge;
                                  }
                                  temp1->color='b';
          }
          }
         void print_path(Node* head,int s,Node* v)
          {if(s==v->node_name)
              cout<<s;
            else if(v->parent==NULL)
            cout<<"no path from "<<s<<"to"<<v->node_name<<"\n";
            else
             print_path(head,s,v->parent);
             cout<<v->node_name;
             }
int main()
{
    Adjacency_list a;
    int i,v;
    Node* p;
    a.makeList();
    cout<<"enter vertex name from which bfs to be run";
    cin>>i ;
    bfs(a.head,i);
     a.display();
     cout<<"\n";
     cout<<"enter vertex upto which path to be print";
     cin>>v;
     p=a.head;
     while(p->node_name!=v)
     p=p->next_node;
      print_path(a.head,i,p);
 system("pause");
return 0;  
}
