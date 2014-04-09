#include<iostream.h>
#include<stdio.h>
#include<alloc.h>
int **cremem(int);
int **readmat(int);
int **strassen(int **,int **,int);
int **addmat(int **,int **,int,int);
int **collect(int**,int**,int**,int**,int);
void dismat(int**,int);
 main()
{
int n,**a,**b,**ree;
cout<<"\n\t\tSTRASSEN'S MATRIX MULTIPLICATION USING D AND C";
cout<<"\n\t\t...............................";
cout<<"\nEnter the order of matrix:";
cin>>n;
cout<<"\nEnter the first matrix element:";
a=readmat(n);
cout<<"\nEnter the second matrix";
b=readmat(n);
ree=strassen(a,b,n);
cout<<"\nFirst matrix\n";
dismat(a,n);
cout<<"\nSecond matrix\n";
dismat(b,n);
cout<<"\nResult matrix\n";
dismat(ree,n);
free(ree);
getch();
}
int **readmat(int no)
{
int r,c,**mat;
mat=(int **)cremem(no+(no%2));
for(r=0;r<no;r++)
for(c=0;c<no;c++)
cin>>mat[r][c];
return mat;
}
int **cremem(int no)
{
int i,**a;
a=(int**)calloc(no,sizeof(int*));
for(i=0;i<no;i++)
a[i]=(int*)calloc(no,sizeof(int));
return a;
}

int **strassen(int **a,int **b,int no)
{
int r,c,**res,mv;
int **a11,**a12,**a21,**a22;
int **b11,**b12,**b21,**b22;
int **c11,**c12,**c21,**c22;
int **P,**Q,**R,**S;
int **T ,**U,**V,**temp;
if(no==1)
{
temp=(int **)cremem(no);
temp[0][0]=a[0][0]*b[0][0];
return temp;
}
no=no+(no%2);
mv=no/2;
a11=cremem(mv);
a12=cremem(mv);
a21=cremem(mv);
a22=cremem(mv);
b11=cremem(mv);
b12=cremem(mv);
b21=cremem(mv);
b22=cremem(mv);
for(r=0;r<mv;r++)
{
for(c=0;c<mv;c++)
{
a11[r][c]=a[r][c];
a21[r][c]=a[r+mv][c];
a12[r][c]=a[r][c+mv];
a22[r][c]=a[r+mv][c+mv];
b11[r][c]=b[r][c];
b21[r][c]=b[r+mv][c];
b12[r][c]=b[r][c+mv];
b22[r][c]=b[r+mv][c+mv];
}
}
P=strassen(addmat(a11,a22,mv,1),addmat(b11,b22,mv,1),mv);
Q=strassen(addmat(a21,a22,mv,1),b11,mv);
R=strassen(a11,addmat(b12,b22,mv,-1),mv);
S=strassen(a22,addmat(b21,b11,mv,-1),mv);
T=strassen(addmat(a11,a12,mv,1),b22,mv);
U=strassen(addmat(a21,a11,mv,-1),addmat(b11,b12,mv,1),mv);
V=strassen(addmat(a12,a22,mv,-1),addmat(b21,b22,mv,1),mv);
c11=addmat(addmat(addmat(P,S,mv,1),T,mv,-1),V,mv,1);
c12=addmat(R,T,mv,1);
c21=addmat(Q,S,mv,1);


c22=addmat(addmat(addmat(P,R,mv,1),Q,mv,-1),U,mv,1);
res=collect(c11,c12,c21,c22,no);
return res;
}
int **addmat(int**a,int **b,int no,int oper)
{
int **res,r,c;
res=(int **)cremem(no);
for(r=0;r<no;r++)
for(c=0;c<no;c++)
res[r][c]=a[r][c]+oper*b[r][c];
return res;
}
int **collect(int**c11,int**c12,int**c21,int **c22,int no)
{
int **res,r,c;
res=(int **)cremem(no);
for(r=0;r<(no/2);r++)
for(c=0;c<(no/2);c++)
{
res[r][c]=c11[r][c];
res[r+(no/2)][c]=c21[r][c];
res[r][c+(no/2)]=c12[r][c];
res[r+(no/2)][c+(no/2)]=c22[r][c];
}
return res;
}
void dismat(int**d,int no)
{
int r,c;
for(r=0;r<no;r++)
for(c=0;c<no;c++)
cout<<"\t"<<d[r][c];
cout<<"\n";
}
