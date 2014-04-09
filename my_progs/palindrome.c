//check whether a string is palindrome or not
#include<stdio.h>
#include<string.h>
main()
{
      char s[100];
      int i,j,n;
      printf("enter the string\n");
      gets(s);
      n=strlen(s);
      for(i=0,j=n-1;i<n/2;i++,j--)
      {
                        if(s[i]==s[j])
                           continue;
                        else
                        {
                            printf("this is not a palindrome string");   
                              break;
                        }
      }
      if(i==n/2)
         printf("this is a palindrome string"); 
 getch();        
}
      
      
