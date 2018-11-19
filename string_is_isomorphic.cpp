bool is_isomorphic(string input1, string input2)
{
    if( input1.size() != input2.size() )
        return false;
        
    char map12[256] = {};
    char map21[256] = {}; 
    
    for( int i = 0; i < input1.size(); ++i )
    {
        char c1 = input1[i];
        char c2 = input2[i];
        
        if( !map12[c1] )
            map12[c1] = c2;
        if( !map21[c2] )
            map21[c2] = c1;
            
        if( map12[c1] == c2 && map21[c2] == c1 )
            continue;
            
        return false;
    }
    
    return true;
}