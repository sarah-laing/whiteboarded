listNode* delete_at_pos(listNode* head, int n)
{
    if( n == 1 && head )
        head = head->next;
    else
    {
        listNode *node = head;
        while( --n > 1 && node )
            node = node->next;
        if( node && n == 1 )
            node->next = node->next ? node->next->next : nullptr;
    }
    return head;    
}