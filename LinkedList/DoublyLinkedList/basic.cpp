#include<iostream>
using namespace std;

class Node{
    public: 
    int data;
    Node* prev;
    Node* next;

    // Constructor
    Node(int d){
        this-> data = d;
        this-> prev = NULL;
        this-> next = NULL;
    }
};

// traversing --
void print(Node* &head){
    Node* temp = head;
    while(temp != NULL){
        cout<< temp -> data << " -> ";
        temp = temp -> next ;
    }
    cout<< "NULL"<<endl;
}

// gives length of linked list --
int getLength(Node* &head){
    int len = 0;
    Node* temp = head;
    while(temp != NULL){
        len++;
        temp = temp -> next;
    }
    return len;
}

// inserting New node at head --
void insertAtHead(Node* &head, Node* &tail, int d){
    if(head == NULL)
    {
       Node* temp = new Node(d);
       head = temp;
       tail = temp;
    }
    else{
       Node* temp = new Node(d);
       temp -> next = head;
       head -> prev = temp;
       head = temp;
    }
}

// inserting New Node at tail --
void insertAtTail(Node* &head, Node* &tail, int d){
    if(head == NULL)
    {
       Node* temp = new Node(d);
       head = temp;
       tail = temp;
    }
    else{
    Node* temp = new Node(d);
    tail -> next = temp;
    temp -> prev = temp;
    tail = temp;
    }
}

// inserting new node at any position --
void insertAtAnyPosition(Node* &head, Node* &tail, int position, int d){

 // Insert at starting--
    if(position == 1){
        insertAtHead(head,tail, d);
        return;
    }

    int count = 1;
    Node* temp = head;

    while(count < position - 1 ){
        temp = temp -> next;
        count++;
    }

    if(temp -> next == NULL){
        insertAtTail(head, tail , d );
        return;
    }

    Node* nodeToInsert = new Node(d);
    nodeToInsert -> next = temp -> next;
    temp -> next -> prev = nodeToInsert;
    temp -> next = nodeToInsert;
    nodeToInsert -> prev = temp;
}

//  Deletion of Node --
void deleteNode(int position , Node* &head ,Node* &tail){
    if(position == 1){
        Node* temp = head;
        temp -> next -> prev = NULL;
        head = temp -> next;
        temp -> next = NULL;
    }
    else {
        Node* curr = head;
        Node* prev = NULL;
        int count = 1;
        while(count < position ){
            prev = curr;
            curr = curr -> next;
            count++;
        }
        curr -> prev = NULL;
        prev -> next = curr -> next;
        curr -> next = NULL;

        if(prev -> next == NULL)
        tail = prev;
    }
}



int main(){

    // Node* node1 = new Node(10);
    Node* head = NULL;
    Node* tail = NULL;

    print (head);

    insertAtHead(head,tail, 4);

    print(head);

    insertAtTail(head,tail,2);
    insertAtTail(head,tail,6);

    print(head);

    insertAtAnyPosition(head , tail , 2 , 200);
    print(head);
    insertAtAnyPosition(head , tail , 5 , 20);
    print(head);
    insertAtAnyPosition(head , tail , 1 , 23);

    print(head);
    
    deleteNode(6, head, tail);
     print(head);



}
