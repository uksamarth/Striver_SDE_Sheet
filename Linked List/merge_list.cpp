#include <bits/stdc++.h>
using namespace std;

class Node {
    public:
        int data;
        Node* next;

        Node(int data1){
            data = data1;
            next = nullptr;
        }
};

Node* convertArrToLinkedList(vector<int>& arr){
    Node* dummynode = new Node(-1);
    Node* temp = dummynode;
    for(int i=0;i<arr.size();i++){
        temp->next = new Node(arr[i]);
        temp = temp->next;
    }
    return dummynode->next; 
}

Node* sortTwoLinkedLists(Node* list1, Node* list2){
    vector<int> arr;
    Node* temp1 = list1;
    Node* temp2 = list2;
    while(temp1!= nullptr){
        arr.push_back(temp1->data);
        temp1 = temp1->next;
    }
    while(temp2!=nullptr){
        arr.push_back(temp2->data);
        temp2 = temp2->next;
    }
    sort(arr.begin(),arr.end());
    Node* head = convertArrToLinkedList(arr);
    return head;
}

void printLinkedList(Node* head){
    Node* temp = head;
    while(temp!= nullptr){
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
}
int main() {
    // Example Linked Lists
    Node* list1 = new Node(1);
    list1->next = new Node(3);
    list1->next->next = new Node(5);

    Node* list2 = new Node(2);
    list2->next = new Node(4);
    list2->next->next = new Node(6);

    cout << "First sorted linked list: ";
    printLinkedList(list1);

    cout << "Second sorted linked list: ";
    printLinkedList(list2);

    Node* mergedList = sortTwoLinkedLists(list1, list2);

    cout << "Merged sorted linked list: ";
    printLinkedList(mergedList);

    return 0;
}