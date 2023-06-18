#include <bits/stdc++.h>
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
void deleteNode(LinkedListNode<int> * node) {
    auto it=node;
    if(it->next){
        it->data=it->next->data;
        it->next=it->next->next;
    }

}
