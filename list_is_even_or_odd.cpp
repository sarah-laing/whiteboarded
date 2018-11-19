bool is_list_even(listNode* head)
{
    int node_count = 0;
    for( listNode * node = head; node; node = node->next )
        ++node_count;
    return !( node_count & 1 );
}