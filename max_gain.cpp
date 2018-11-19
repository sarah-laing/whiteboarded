int max_gain(int arr[], int sz)
{
    int m = 0;
    for( int l = 0; l < sz-1; ++l )
    {
        for( int r = l + 1; r < sz; ++r )
        {
            int g = arr[r] - arr[l];
            if( g > m )
                m = g;
        }
    }
    return m;
}