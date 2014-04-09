    #include<stdio.h>
    #include<string.h>
    #include<math.h>
    #include<ctype.h>
    #include<stdlib.h>
    #include<iostream>
    #include<algorithm>
    #include<vector>
    #include<map>
    #include<set>
    #include<queue>
    #include<stack>
     
    using namespace std;
     
    typedef long long LL;
    typedef vector<int> VI;
    typedef vector<string> VS;
    typedef pair<int,int> II;
    typedef vector<II> VII;
    typedef vector<VII> VVII;
    typedef vector<VI> VVI;
     
    #define INF 2000000000
    #define INFLL (1LL<<62)
    #define FI first
    #define SE second
    #define PB push_back
    #define lint long long
    #define SS ({int x;scanf("%d", &x);x;})
    #define SSL ({LL x;scanf("%lld", &x);x;})
    #define SSF getint()
    #define _mp make_pair
    //#define 1000000007
    inline void _min(int &a,int b)
    {
            if(a>b)
                    a=b;
    }
    inline void _max(int &a,int b)
    {
            if(a<b)
                    a=b;
    }
     
    /********************* FAST IO *********************************/
     
    #define BUFSIZE (10000)
     
    char inputbuffer[BUFSIZE];
    char *ioptr=inputbuffer+BUFSIZE,*ioend=inputbuffer+BUFSIZE;
    int input_eof=0;
     
    #define getchar() ({if (ioptr >= ioend) init_input(); *ioptr++;})
    #define eof() (ioptr>=ioend && input_eof)
    #define eoln() ({if(ioptr >= ioend) init_input(); *ioptr == '\n';})
     
    void init_input()
    {
            if (input_eof)
                    return;
            int existing = BUFSIZE - (ioend - inputbuffer);
            memcpy(inputbuffer, ioend, existing);
            int wanted = ioend - inputbuffer;
            int count=fread(inputbuffer + existing, 1, wanted, stdin);
            if (count < wanted)
                    input_eof = 1;
            ioend = inputbuffer + BUFSIZE - (wanted - count);
            while (*--ioend > ' ');
            ioend++;
            ioptr=inputbuffer;
    }
     
    inline void non_whitespace()
    {
            for(;;)
            {
                    if(ioptr>=ioend)
                            init_input();
                    if(*ioptr>' ')
                            return;
                    ioptr++;
            }
    }
     
    inline int getint()
    {
            non_whitespace();
            int n=0;
            while(*ioptr>' ')
                    n=(n<<3)+(n<<1)+*ioptr++-'0';
            ioptr++;
            return n;
    }
     
    //******************************** programme code starts here*************************//
    long long MOD=1000000007;
  
template< class T >
class Matrix
{
	public:
		int m,n;
		T *data;
		
		Matrix( int m, int n );
		Matrix( const Matrix< T > &matrix );
		
		const Matrix< T > &operator=( const Matrix< T > &A );
		const Matrix< T > operator*( const Matrix< T > &A );
		const Matrix< T > operator^( int P );
		
		~Matrix();
};

template< class T >
Matrix< T >::Matrix( int m, int n )
{
	this->m = m;
	this->n = n;
	data = new T[m*n];
}

template< class T >
Matrix< T >::Matrix( const Matrix< T > &A )
{
	this->m = A.m;
	this->n = A.n;
	data = new T[m*n];
	for( int i = 0; i < m * n; i++ )
		data[i] = A.data[i];
}

template< class T >
Matrix< T >::~Matrix()
{
	delete [] data;
}

template< class T >
const Matrix< T > &Matrix< T >::operator=( const Matrix< T > &A )
{
	if( &A != this )
	{
		delete [] data;
		m = A.m;
		n = A.n;
		data = new T[m*n];
		for( int i = 0; i < m * n; i++ )
			data[i] = A.data[i];
	}
	return *this;
}

template< class T >
const Matrix< T > Matrix< T >::operator*( const Matrix< T > &A )
{
	Matrix C( m, A.n );
	for( int i = 0; i < m; ++i )
		for( int j = 0; j < A.n; ++j )
		{
			C.data[i*C.n+j]=0;
			for( int k = 0; k < n; ++k )
				C.data[i*C.n+j] = (C.data[i*C.n+j] + (data[i*n+k]*A.data[k*A.n+j])%MOD)%MOD;		
		}
	return C;
}

template< class T >
const Matrix< T > Matrix< T >::operator^( int P )
{
	if( P == 1 ) return (*this);
	if( P & 1 ) return (*this) * ((*this) ^ (P-1));
	Matrix B = (*this) ^ (P/2);
	return B*B;
}
        

    int t,a,b,p1,p2;
            lint A[2][2],B[2][2],C[2][2];
            
    long long int fibo(int n)
    {
            long long int y;
            if(n<=0) return 0;
            else if(n==1) return 1;
            else if(n==2) return 3;
            else 
            {
                    power(A,C,n-2);
                     y=3*C[0][0]+C[0][1];
             }
       return y;
       }
            
    int main()
    {
              Matrix< long long int> A(2,2);
            t=SSF;
            A.data[0]=2;
            A.data[01]=2;
            A.data[2]=1;
            A.data[3]=0;
            while(t--)
            {
                   // a=SSF;
                    b=SSF;
                    printf("%lld\n",(fibo(b))%MOD);
                   
             }
        return 0;
        }
