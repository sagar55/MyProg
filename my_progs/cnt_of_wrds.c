//counting of total no. of words in a given text or para
#include<stdio.h>
main()
{
      int i,j,n=0;
      char s[10][50];
      printf("enter the text\n");
      for(i=0;i<10;i++)
      {
      gets(*(s+i));
      if(*(*(s+i))=='\0')
      break;
      else
      continue;
      }
      for(i=0;*(*(s+i))!='\0';i++)
      {
      for(j=0;*(*(s+i)+j)!='\0';j++)
      {
           if(*(*(s+i)+j)==' ')
           {
           if(*(*(s+i)+j+1)==' ')
           continue;
           
           else
           n++;
           }
      }
      }
      printf("no. of words in a given text is %d",n+i);
      getch();
}           

               
