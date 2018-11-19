vector<Interval> merge_intervals(vector<Interval> intervals_list)
{
    if( intervals_list.size() < 1 )
        return intervals_list;
        
    sort( intervals_list.begin(), intervals_list.end(), 
        []( Interval const & i1, Interval const & i2 )
        {
            if( i1.start == i2.start )
                return i1.end < i2.end;
            return i1.start < i2.start;
        } );
    
    vector< Interval > merged;

    Interval m = intervals_list[0];        
    for( int i = 1; i < intervals_list.size(); ++i )
    {
        Interval const &next = intervals_list[ i ];
        if( m.end >= next.start )
        {
            m.end = next.end;
        }
        else
        {
            merged.push_back( m );
            m = next;
        }
    }
    merged.push_back( m );
    
    return merged;
}