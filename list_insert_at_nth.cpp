listNode* insert_at_position( listNode* head, int data, int pos)
{
    if( pos == 1 )
        head = new listNode { data, head };
    else
    {
        listNode *n = head;
        while( --pos > 1 && n )
            n = n->next;
        if( n && pos == 1 )
            n->next = new listNode { data, n->next };
    }
    return head;    
}