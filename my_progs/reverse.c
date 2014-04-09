void reverse(int *i)
{
            int j=*i,n=0;
            while(j>0)
            {
            n=j%10+n*10;
            j=j/10;  
            }
            *i=n;
}
