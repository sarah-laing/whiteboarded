int* bubble_sort_array(int arr[], int size)
{
    bool sorted = ( size <= 1 );
    
    while( !sorted )
    {
        sorted = true;
        for( int i = 0; i < size-1; ++i )
        {
            if( arr[i] > arr[i+1] )
            {
                std::swap( arr[i], arr[i+1] );
                sorted = false;
            }
        }
    }

    return arr;
}