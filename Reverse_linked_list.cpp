LinkedListNode<int> *reverseLinkedList(LinkedListNode<int> *head) 
{
    if(!head || !head->next){
        return head;
    }
    LinkedListNode<int>*temp=reverseLinkedList(head->next);
    head->next->next=head;
    head->next=nullptr;
    return temp;
}
