int* merge(int arr_left[],int sz_left, int arr_right[], int sz_right){
    /* declaring an array using dynamic allocation of memory. 
        Merged the given two arrays into this third output Array */
    int* arr_merged = new int [sz_left+sz_right];
    // Add your code below this line. Do not modify any other code.

    int il = 0; int ir = 0;
    for( int d = 0; d < sz_left + sz_right; ++d )
    {
        int m;
        
        if( il >= sz_left )
            m = arr_right[ ir++ ];
        else if( ir >= sz_right )
            m = arr_left[ il++ ];
        else if( arr_left[ il ] < arr_right[ ir ] )
            m = arr_left[ il++ ];
        else m = arr_right[ ir++ ];
        
        arr_merged[d] = m;
    }

    return arr_merged;
}