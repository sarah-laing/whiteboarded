bool binary_search(int arr[], int size, int n)
{
    if( size > 0 )
    {
        if( arr[ size - 1 ] == n )
            return true;
        size >>= 1;
        if( arr[size] <= n )
            return binary_search( arr + size, size, n );
        else
            return binary_search( arr, size, n );
    }
    return false;
}