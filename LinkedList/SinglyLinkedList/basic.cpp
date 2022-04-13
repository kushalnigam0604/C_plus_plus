#include<iostream>
using namespace std;
class Node{
    public:
    int data;
    Node* next;

    Node(int data){                // Constructor
        this -> data = data;
        this -> next = NULL;
    }
};

void insertAtHead(Node* &head, int d){        //   &head isliye likhenge taki head ki copy create na ho and original position p hi changes ho jaye.
// new node create
Node* temp = new Node(d);
temp -> next = head;
head = temp;

}

void insertAtTail(Node* &tail, int d){
    // new node create
Node* temp = new Node(d);
tail->next = temp;
tail = temp ;

}

void insertAtAnyPosition(Node* &head, Node* &tail , int position, int d){

    // Insert at starting--

    if(position == 1){
        insertAtHead(head, d);
        return;
    }
    int count = 1;
    Node* temp = head;

    while(count < position - 1){
        temp = temp -> next;
        count++;
    }

    if(temp -> next == NULL){
        insertAtTail(tail , d );
        return;
    }

    Node* nodeToInsert = new Node(d);
    nodeToInsert -> next = temp -> next;
    temp -> next = nodeToInsert;
}

void print(Node* &head){
    Node* temp = head;

    while(temp!=NULL){
        cout<< temp -> data << " -> ";
        temp = temp -> next;
    }
    cout<< "NULL"<<endl;
}

int main(){

    Node* node1 = new Node(4);          // creating object in heap memory
    //  head pointed to node1
    Node* head = node1;
    Node* tail = node1;

// 1.

    // cout<< node1 -> data << endl;
    // cout<< node1 -> next << endl;

// 2.

    // insertAtHead(head, 10);
    // insertAtHead(head ,22);

    // print( head);

// 3.

    insertAtTail(tail, 10);
    insertAtTail(tail, 22);

    print( head);

// 4.

    insertAtAnyPosition(head, tail, 3, 20);

    print(head);
}