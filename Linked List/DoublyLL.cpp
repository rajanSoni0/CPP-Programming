#include<iostream>
using namespace std;

class Node{
    public:
    int data;
    Node *prev;
    Node * next;
    Node(){
        this -> data = 0;
        this -> prev = NULL;
        this -> next = NULL;
    }
    Node(int data){
        this -> data = data;
        this -> prev = NULL;
        this -> next = NULL;
    }
};
void Print(Node *head){
    Node* temp = head;
    while (temp != NULL){
        cout << temp -> data << " ";
        temp = temp ->next;
    }
    cout << endl;
}
int getLength(Node *head){
    int len = 0;
    Node* temp = head;
    while (temp != NULL){
        len++;
        temp = temp ->next;
    }
    return len;
}
void InsertAtHead(Node* &head,Node* &tail, int data){
    if (head == NULL)
    {
        Node* NewNode = new Node(data);
        head = NewNode;
        tail = NewNode;
    }
    
    Node*NewNode = new Node(data);
    head -> prev = NewNode;
    NewNode -> next = head;
    head = NewNode;
}
void InsertAtTail(Node* &head,Node* &tail, int data){
    if (head == NULL)
    {
        Node* NewNode = new Node(data);
        head = NewNode;
        tail = NewNode;
    }
    Node* NewNode = new Node(data);
    tail -> next = NewNode;
    NewNode -> prev = tail;
    tail = NewNode;
}
void InsertAtPos(Node* &head,Node* &tail, int data,int pos){
    Node* NewNode = new Node(data);
     if (pos == 1) {
        InsertAtHead(head, tail, data);
        return;
    }
    Node* temp = head;
    int i = 1;
    while (i < pos - 1 && temp != NULL) {
        temp = temp->next;
        i++;
    }

    if (temp == NULL || temp->next == NULL) {
        InsertAtTail(head, tail, data);
        return;
    }
    NewNode -> next = temp -> next;
    temp -> next -> prev = NewNode;
    temp -> next = NewNode;
    NewNode -> prev = temp;
}
int main()
{
    Node *first = new Node(10);
    Node *second = new Node(20);
    Node *third = new Node(30);
    Node *fourth = new Node(40);

    first -> prev = NULL;
    first -> next = second;

    second -> prev = first;
    second -> next = third;

    third -> prev = second;
    third -> next = fourth;

    fourth -> prev = third;
    fourth -> next = NULL;

    Node* head = first;
    Node* tail = fourth;
    cout << "Linked List before Insertion: " << endl;
    Print(head);
    InsertAtPos(head, tail, 5,2);
    cout << "Linked List after Insertion: " << endl;
    Print(head);
    return 0;
}