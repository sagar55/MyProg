#include<string.h>
#include<stdlib.h>
#include<iostream.h>
void error(){cout<<"not accepted";getch();exit(0);}
int main(){cout<<"Enter the string in single letter such as a+a*a \n\n";
char string[10],stack[10];int i=0,k,top=0;
cout<<"Enter the Expression :";cin>>string;
int j=strlen(string);string[j]='$';string[++j]='\0';
cout<<string<<endl;stack[top]='E';cout<<"$"<<stack<<"\t";
for(k=i;k<j;k++){cout<<string[k];}cout<<endl;top++;
while(top!=0){
              if(stack[top-1]==string[i])
{i++;top--;stack[top]='\0';}
else if(stack[top-1]=='E'){
     if(string[i]=='a'){top--;stack[top]='D';stack[++top]='T';top++;stack[top]='\0';}
     else if(string[i]=='('){
          top--;stack[top]='D';stack[++top]='T';top++;stack[top]='\0';}
          else error();}else if(stack[top-1]=='D'){
               if(string[i]=='+'){top--;stack[top]='D';stack[++top]='T';stack[++top]='+';top++;stack[top]='\0';}
               else if(string[i]==')'){top--;stack[top]='\0';}
               else if(string[i]=='$'){top--;stack[top]='\0';}
               else error();}
               else if(stack[top-1]=='T'){if(string[i]=='a'){top--;stack[top]='s';stack[++top]='F';top++;stack[top]='\0';}
               else if(string[i]=='('){top--;stack[top]='s';stack[++top]='F';top++;stack[top]='\0';}
               else error();}else if(stack[top-1]=='s'){
                    if(string[i]=='+'){top--;stack[top]='\0';}
               else if(string[i]=='*'){top--;stack[top]='s';stack[++top]='F';stack[++top]='*';top++;stack[top]='\0';}
               else if(string[i]==')'){top--;stack[top]='\0';}
               else if(string[i]=='$'){top--;stack[top]='\0';}
               else error;}
               else if(stack[top-1]=='F'){
                    if(string[i]=='a'){top--;stack[top]='a';top++;stack[top]='\0';}
                    else if(string[i]=='('){top--;stack[top]=')';stack[++top]='E';stack[++top]='(';top++;stack[top]='\0';}
                    else error();}
                    else error();cout<<"$"<<stack<<"\t";for(k=i;k<j;k++){cout<<string[k];}cout<<endl;}cout<<"accepted";getch();}

 

 
