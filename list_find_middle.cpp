listNode* find_middle_node(listNode* head)
{
    listNode *fast = head, *slow = head;
    
    while( fast )
    {
        fast = fast->next;
        if( fast )
            if( fast = fast->next )
                slow = slow->next;
    }
    
    return slow;
}