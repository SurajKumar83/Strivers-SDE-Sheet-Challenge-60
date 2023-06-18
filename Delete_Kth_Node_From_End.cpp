/*
Following is the class structure of the Node class:

class Node
{
public:
    int data;
    Node *next;
    Node()
    {
        this->data = 0;
        next = NULL;
    }
    Node(int data)
    {
        this->data = data; 
        this->next = NULL;
    }
    Node(int data, Node* next)
    {
        this->data = data;
        this->next = next;
    }
};
*/

Node* removeKthNode(Node* head, int K)
{
    int n=0;
    Node* temp=head;
    while(temp){
        temp=temp->next;
        n++;
    }
    
    temp=head;
    int cnt=n-K;
    if(cnt==0){
        return head->next;
    }
    while(temp && cnt>1){
      temp=temp->next;
      cnt--;
    }
    Node* todel=temp->next;
    temp->next=todel->next;
    delete(todel);
    return head;
}
