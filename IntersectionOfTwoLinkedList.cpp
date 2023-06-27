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

Node* findIntersection(Node *firstHead, Node *secondHead)
{
    Node* l1=firstHead;
    Node* l2=secondHead;
    while(l1 && l2){
        l1=l1->next;
        l2=l2->next;
        if(l1==l2){
            return l1;
        }
        if(l1==NULL){
            l1=secondHead;
        }
        if(l2==NULL){
            l2=firstHead;
        }
    }
    return NULL;
}
