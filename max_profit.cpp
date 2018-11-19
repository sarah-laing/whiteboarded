int max_profit(int prices[], int sz)
{
    int total_profit = 0;

    for( int i = 1; i < sz; ++i )
        if( prices[ i ] > prices[ i-1 ] )
                total_profit += prices[ i ] - prices[ i-1 ];

    return total_profit;
}