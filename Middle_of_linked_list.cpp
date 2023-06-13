Node *findMiddle(Node *head) {
    Node* slow=head;
    Node* temp=head;
    while(temp && temp->next){
        slow=slow->next;
        temp=temp->next->next;
    }
    return slow;
}
