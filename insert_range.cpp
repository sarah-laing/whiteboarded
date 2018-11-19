vector<Interval> insert_range(vector<Interval> intervals_list, Interval insert) 
{
    vector< Interval > out_ranges;
    
    Interval merge { 0, 0 };
    bool merged = false;

    // copy all non-overlapping left side ranges to out_ranges[]
    int i = 0;    
    for( ; i < intervals_list.size() && intervals_list[i].start < insert.start && intervals_list[i].end < insert.start; ++i )
        out_ranges.push_back( intervals_list[i] );

    if( i == intervals_list.size() )    // reached end of list, so only need to append insert  
    {
        out_ranges.push_back( insert );
    }
    else if( intervals_list[i].start > insert.end ) // no overlap with next interval, so pre-pend insert...
    {
        out_ranges.push_back( insert );
        for( int r = i; r < intervals_list.size(); ++r )    // ...and copy rest of list to output
            out_ranges.push_back( intervals_list[r] );
    }
    else    // current interval overlaps insert...
    {
        merge.start = min( intervals_list[i].start, insert.start ); // merge current and insert
        merge.end = max( intervals_list[i].end, insert.end );
        int m = i + 1;
        for( ; m < intervals_list.size(); ++m )        // also merge any right-side overlaps
            if( intervals_list[m].start > merge.end )               // if next right-ward interval does not overlap
                break;                                              // stop merging
            else
                merge.end = max( merge.end, intervals_list[m].end );
                
        out_ranges.push_back( merge );
        
        for( int r = m; r < intervals_list.size(); ++r )    // copy remaining right side intervals
            out_ranges.push_back( intervals_list[r] );    
    }

    return out_ranges;
}