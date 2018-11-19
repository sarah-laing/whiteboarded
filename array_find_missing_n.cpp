int find_missing_number(int arr[], int n) 
{
    for( int i = 0; i < n; ++i )
        if( arr[i] != i + 1 )
            return i+1;
            
    return 0;
}