#include<stdio.h>
#include<string.h>
main()
{
      int t,l;
      char a[2002];
      scanf("%d",&t);
      while(t--)
      {
                scanf("%s",a);
                l=strlen(a);
                if((a[l-1]-48)%2==0)
                            printf("Mandark\n");          
                                    else
                                      printf("Dexter\n");
                                      }
                                      return 0;
                                      }
                                
                
