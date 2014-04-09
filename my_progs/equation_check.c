int g(int m,int n){if(!n)return m;return g(n,m%n);}main(){int a,b,c,t;scanf("%d",&t);while(t--){scanf("%dx+%dy=%d",&a,&b,&c);!(c%g(a,b))?printf("yes\n"):printf("no\n");}exit(0);}
