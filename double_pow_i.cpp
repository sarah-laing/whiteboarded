double power(double x, int n)
{
    if( n == 0 )
        return 1.;
        
    if( n == 1 )
        return x;
        
    if( n < 0 )
    {
        x = 1. / x;
        n *= -1.;
    }
    return x * power( x, n - 1 );
}