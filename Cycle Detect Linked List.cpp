/****************************************************************

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


*****************************************************************/

bool detectCycle(Node *head)
{
	Node* s=head;
    Node* f=head;
    do{
        if(f==NULL || f->next==NULL){
            return false;
        }
        s=s->next;
        f=f->next->next;
    }while(s!=f);
    return true;
}
