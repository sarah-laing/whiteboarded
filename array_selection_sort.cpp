int* selection_sort_array(int arr[], int size)
{
    if( size >= 1 )
    {    
        for( int s = 0; s < size - 1; ++s )
        {
            int mi = s; int mv = arr[ mi ];
            
            for( int u = s + 1; u < size; ++u )
            {
                if( arr[u] < mv )
                {
                    mv = arr[u];
                    mi = u;
                }
            }
            if( mv < arr[s] )
                swap( arr[s], arr[mi] );
        }
    }

    return arr;
}