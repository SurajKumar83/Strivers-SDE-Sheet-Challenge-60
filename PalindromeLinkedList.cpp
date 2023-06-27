#include <bits/stdc++.h> 
/****************************************************************

    Following is the class structure of the LinkedListNode class:

    template <typename T>
    class LinkedListNode
    {
    public:
        T data;
        LinkedListNode<T> *next;
        LinkedListNode(T data)
        {
            this->data = data;
            this->next = NULL;
        }
    };

*****************************************************************/

bool isPalindrome(LinkedListNode<int> *head) {
    vector<int>v;
    for(auto temp=head;temp!=NULL;temp=temp->next){
        v.push_back(temp->data);
    }
    int n=v.size();
    for(int i=0;i<n/2;i++){
        if(v[i]!=v[n-i-1])
        {
            return false;
        }
    }
    return true;
}
