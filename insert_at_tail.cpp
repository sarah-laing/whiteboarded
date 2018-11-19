listNode* insert_at_tail( listNode* head, int data)
{
    listNode *tail = head;
   
    for( listNode *end = head; end; end = end->next )
        tail = end;
        
    if( head && tail )
        tail->next = new listNode { data, nullptr };
    else
        head = tail = new listNode { data, nullptr };
        
    return head;
}