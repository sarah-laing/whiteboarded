int count_paths(int rows, int cols)
{
    int *memo = new int[rows * cols];
    
    for( int i = 0; i < cols; ++i )
        memo[i] = 1;
    for( int j = 0; j < rows; ++j )
        memo[j*cols] = 1;
    
    for( int i = 1; i < rows; ++i )
    {
        for( int j = 1; j < cols; ++j ) 
        {
            memo[i*cols + j] = memo[ (i-1)*cols + j ] + memo[ i*cols + j-1 ];
        }
    }
    
    return memo[ rows*cols - 1 ];
}