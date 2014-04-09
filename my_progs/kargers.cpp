#include <iostream>
#include <cstdlib>
using namespace std;
class Node
{
      public:
      Node* next_node;//will be null if there is no "next node" or if the node is being used as an edge node
      Node* next_edge;//will be null if no further edges are there
      int node_name;      
      
      Node()
      {
            next_node=NULL;
            next_edge=NULL;
            node_name=-1;//means the node is empty
      }
      Node(int i)
      {
            next_node=NULL;
           next_edge=NULL;
            node_name=i;//name of node is the integer in i
      }
      
      bool isEmpty()
      {
           return node_name==-1;
      }
      
           
};
class Adjacency_list
{
      private:
      int num_nodes;
      Node* head;  
      
      public:    
      void makeList()
      {
           cin>>num_nodes;
           
           Node* temp_node=NULL;//temporary pointer for moving over main nodes of adjacency list
           Node* temp_edge=NULL;//temporary pointer for moving over edge nodes of a particular main node
           for(int i=1;i<=num_nodes;i++)
           {
                   if(i==1)
                   {
                           head=new Node(i);//make first node                          
                           temp_node=head; //initialize temp pointer to point to first node 
                            
                           //code to add edges to 0th node
                            temp_edge=temp_node;
                           for(;;)
                           {
                                  int c;
                                  cin>>c;
                                  if(c==-1)
                                           break;
                                  
                                  temp_edge->next_edge=new Node(c);
                                  //cout<<endl<<c<<endl;
                                  temp_edge=temp_edge->next_edge;         
                                           
                           }
                           /*for(Node* t=head;t!=NULL;t=t->next_edge)
                           {
                                     cout<<t->node_name;
                                     if(t->next_edge!=NULL)
                                         cout<<"--->";
                           }*/
                           //temp_node=temp_node->next_node;
                           
                                                    
                   }
                   else
                   {
                       temp_node->next_node=new Node(i);//make next node
                       
                        temp_node=temp_node->next_node;//move temporary to next node (to ith node from (i-1)th node)
                        //otherwise following code will overwrite edges of (i-1)th node
                       
                       //code to add edges to ith node                       
                       temp_edge=temp_node;
                           for(;;)
                           {
                                  int c;
                                  cin>>c;
                                  if(c==-1)
                                           break;
                                  
                                  temp_edge->next_edge=new Node(c);
                                  temp_edge=temp_edge->next_edge;         
                                           
                           }                           
                           
                      
                       /*for(Node* t=temp_node;t!=NULL;t=t->next_edge)
                           {
                                     cout<<t->node_name;
                                     if(t->next_edge!=NULL)
                                         cout<<"--->";
                           }*/
                       
                       
                   }                                                  
                   
           }                     
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
                         cout<<temp_edge->node_name;
                         if(temp_edge->next_edge!=NULL)
                            cout<<"--->";                                                      
                  }  
                  
                  temp_node=temp_node->next_node;//move to next main node
                  cout<<endl;                                
                 
           }
           cout<<endl;           
           
      }   
      
};
int main()
{
    Adjacency_list a;
    int i;
    a.makeList();
    a.display();
 system("pause");
return 0;    
}
