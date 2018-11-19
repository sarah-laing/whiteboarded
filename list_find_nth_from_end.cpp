listNode* find_n_node_from_end(listNode* head, int n)
{
    if( n == 0 )
        return nullptr;
        
    listNode *nth = head;
    
    while( head )
    {
        head = head->next;
        if( n > 0 )
            --n;
        else
            nth = nth->next;
    }

    return n > 0 ? nullptr : nth;    
}