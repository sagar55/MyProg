    long long MOD=1000000007;
template< class T >class Matrix
{public:
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
       }int main()
    {
              Matrix< long long int> A(2,2);
            t=SSF;
            A.data[0]=2;
            A.data[01]=2;
            A.data[2]=1;
            A.data[3]=0;
            while(t--)
            {
            
                    b=SSF;
                    printf("%lld\n",(fibo(b))%MOD);
                   
             }
        return 0;
        }
