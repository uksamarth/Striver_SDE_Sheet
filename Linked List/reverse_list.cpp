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
Node* reverse_list(Node* head){
    Node* prev = nullptr;
    Node* temp = head;
    Node* front = nullptr;

    while(temp!= nullptr){
        front = temp->next;
        temp->next = prev;
        prev = temp;
        temp = front;
    }
    return prev;
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

    cout << "Original list is :";
    printLinkedList(head);

    head = reverse_list(head);
    cout << "Reversed Linked List: ";
    printLinkedList(head);

    return 0;
}
