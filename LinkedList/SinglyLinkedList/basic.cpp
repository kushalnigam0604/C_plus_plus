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

void insertAtHead(Node* &head, Node* &tail, int d){        //   &head isliye likhenge taki head ki copy create na ho and original position p hi changes ho jaye.

// new node create
if(head == NULL){
    Node* temp = new Node(d);
    head = temp;
    tail = temp;
}
else{
    Node* temp = new Node(d);
    temp -> next = head;
    head = temp;
}
}

void insertAtTail(Node* &head, Node* &tail, int d){
    // new node create
    if(head == NULL)
    {
       Node* temp = new Node(d);
       head = temp;
       tail = temp;
   }
    else{
       Node* temp = new Node(d);
       tail->next = temp;
       tail = temp ;
   }

}

void insertAtAnyPosition(Node* &head, Node* &tail , int position, int d){

    // Insert at starting--

    if(position == 1){
        insertAtHead(head,tail, d);
        return;
    }
    int count = 1;
    Node* temp = head;

    while(count < position - 1){
        temp = temp -> next;
        count++;
    }

    if(temp -> next == NULL){
        insertAtTail(head,tail , d );
        return;
    }

    Node* nodeToInsert = new Node(d);
    nodeToInsert -> next = temp -> next;
    temp -> next = nodeToInsert;
}

void deleteNode(int position , Node* &head ,Node* &tail){
    if(position == 1){
        head = head -> next;
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
        prev -> next = curr -> next;
        if(prev -> next == NULL)
        tail = prev;
    }
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

    Node* head = NULL;
    Node* tail = NULL;

// 1.

    // cout<< node1 -> data << endl;
    // cout<< node1 -> next << endl;

// 2.

    insertAtHead(head, tail, 10);
    insertAtHead(head, tail, 22);

    // print( head);

// 3.

    insertAtTail(head, tail, 10);
    insertAtTail(head, tail, 22);
    insertAtTail(head, tail, 30);

    // print( head);

// 4.

    insertAtAnyPosition(head, tail, 3, 20);

    // print(head);

// 5.
    // deleteNode(5, head, tail);

    print(head);    
}