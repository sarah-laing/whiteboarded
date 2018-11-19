#include <algorithm>

// Add any helper functions(if needed) above.
bool is_anagram(string input1, string input2)
{
    size_t size1 = input1.size();
    size_t size2 = input2.size();
    if( size1 == size2 )
    {
        auto start = &input2[0];
        auto end = start + size2;
        for( size_t i = 0; i < size1; ++i )
        {
            auto c1 = input1[i];
            auto i2 = std::find( start, end, c1 );
            if( i2 == end )
                return false;
            std::swap( *start++, *i2 );
        }
        return true;
    }
    return false;
}