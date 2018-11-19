char first_non_repeating(string str)
{
   int counts[256] = {};
   
   for( auto const c : str )
        ++counts[c];
        
    for( auto const u : str )
        if( counts[u] == 1 )
            return u;
            
    return '0';
}