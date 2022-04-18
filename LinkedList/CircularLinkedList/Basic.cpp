#include<iostream>
using namespace std;

class Node{
    public: 
    int data;
    Node* next;

    // constructor --
    Node(int d){
        this -> data = d;
        this -> next = NULL;
    }
};


void insertNode(Node* &tail, int element , int d){
    //  empty list
    if(tail == NULL){
        Node* newNode = new Node(d);
        tail = newNode;
        newNode -> next = newNode;
    }
    else{
        //  for non empty list
        // and assuming that the element is present in the list

        Node* curr = tail;
        while(curr -> data != element){
            curr = curr -> next;
        }

        // element found --> curr is representing node of element 
        Node* temp = new Node(d);
        temp -> next = curr -> next;
        curr -> next = temp;  
    }
}

void deleteNode(Node* &tail, int value){

    // Empty list
    if(tail == NULL){
        cout<< "List is empty, please check again " << endl;
        return;
    }
    else{
        //  For Non Empty
        Node* prev = tail;
        Node* curr = prev -> next;

        while(curr = data != value){
            prev = curr;
            curr = curr -> next;
        }

        prev -> next = curr -> next;

        //  when 1 Node in LL
        if(curr == prev){
            tail = NULL;
        }
        //  >=2 Node in LL
        else if(tail == curr){
            tail = prev;
        }
        curr -> next = NULL;
    }
}

void print(Node* tail){
    Node* temp = tail;
    do{
        cout<< tail -> data << " -> ";
        tail = tail -> next;
    }while(tail != temp);
    cout<< " NULL";
    cout << endl;
}

int main (){

    Node* tail = NULL;

    // insert in empty list
    insertNode(tail, 5, 3);

    print(tail);

    insertNode(tail, 3, 4);
    print(tail);

    insertNode(tail, 3, 8);
    print(tail);

    return 0;
}
