bool permutation(string input1, string input2)
{
    using char_t = decltype( input1[0] );
    const size_t char_size = sizeof( char_t );
    const size_t array_length = ( 1 << ( char_size * 8 ) ) - 1;
    if( input1.size() == input2.size() )
    {
        vector<size_t> char_counts( array_length, 0 );
        for( auto const & c1 : input1 )
            char_counts[c1]++;
        for( auto const & c2 : input2 )
            char_counts[c2]--;
        return all_of( &char_counts[0], &char_counts[array_length], []( size_t const count ) { return !count; } );
    }
    return false;
}