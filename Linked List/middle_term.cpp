#include <iostream>
using namespace std;

class Node{
    public:
    int data;
    Node* next; // pointer to the next node
    Node(int data1, Node* next1){
        data = data1;
        next = next1;
    }
    Node(int data1){
        data = data1;
        next = nullptr;
    }
};
Node* middle_term(Node* head){
    Node* slow = head;
    Node* fast = head;

    while(fast!= nullptr && fast->next!= nullptr){
        slow = slow->next;
        fast = fast->next->next;
    }
    return slow;
}

void printLinkedList(Node* head){
    Node* temp = head;
    while(temp!= nullptr){
        cout<< temp->data << " ";
        temp = temp->next;
        }
        cout << endl;
}

int main(){
    Node* head = new Node(1);
    head->next = new Node(2);
    head->next->next = new Node(3);
    head->next->next->next = new Node(4);
    head->next->next->next->next = new Node(5);
    cout << "Original list is :";
    printLinkedList(head);

    Node* middlenode = middle_term(head);
    cout << "Middle term is: " << middlenode->data << endl;
    return 0;
}
