/**
 * Definition of linked list:
 *
 * class Node {
 * public:
 *      int data;
 *      Node *next;
 *      Node() {
 *          this->data = 0;
 *          this->next = NULL;
 *      }
 *      Node(int data) {
 *          this->data = data;
 *          this->next = NULL;
 *      }
 *      Node (int data, Node *next) {
 *          this->data = data;
 *          this->next = next;
 *      }
 * };
 *
 *************************************************************************/

Node *addTwoNumbers(Node *num1, Node *num2)
{
    Node* sum=new Node(0);
    Node* temp=sum;
    int carry=0;
    int cursum;
    while(num1 || num2 || carry){
        cursum=0;
        if(num1){
            cursum+=num1->data;
            num1=num1->next;
        }
        if(num2){
            cursum+=num2->data;
            num2=num2->next;
        }
        cursum+=carry;
        carry=cursum/10;
        temp->next=new Node(cursum%10);

         temp=temp->next;
    }
    return sum->next;
}
