listNode* reverse_list(listNode* head)
{
    if( listNode* last = head )
    {
        for( listNode* next = head->next; next; )
        {
            listNode* next_next = next->next;
            next->next = head;
            head = next;
            next = next_next;
        }
        last->next = nullptr;
    }
    return head;
}