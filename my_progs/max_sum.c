void maxSumSubArray( int *array, int len, int *start, int *end, int *maxSum )
{
    int maxSumSoFar = -2147483648;
    int curSum = 0;
    int a = b = s = i = 0;
    for( i = 0; i < len; i++ ) {
        curSum += array[i];
        if ( curSum > maxSumSoFar ) {
            maxSumSoFar = curSum;
            a = s;
            b = i;
        }
        if( curSum < 0 ) {
            curSum = 0;
            s = i + 1;
        }
    }
    *start = a;
    *end = b;
    *maxSum = maxSumSoFar;
}
