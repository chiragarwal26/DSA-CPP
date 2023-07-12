#include<iostream>
using namespace std;

class Node{
    public:
    int data;
    // pointer of " Node Type "
    Node*next;
    //constructor
    Node(int data){
        this->data = data;
        this->next = NULL;
    }
};
// insertion at head (starting)
void insertAtHead(Node* &head, int d){
    // creating a new node named temp
    Node *temp = new Node(d);
    // address is pointing towards head
    temp-> next = head;
    // making temp as our new head
    head = temp;
}
// insertion at tail (ending)
void insertAtTail(Node* &tail, int d){
    // creating a new node
    Node *temp = new Node(d);
    // address of old tail is pointing towards temp 
    tail-> next = temp;
    //making temp as our new tail
    tail = temp;
}
              //              insertion at a particular position             //
void insertionAtPosition(Node* &head,Node* &tail, int position, int d){
    // we need to define this case because in insertion
    // at other positions we need before node
    if(position == 1){
        insertAtHead(head,d);
        return;
    }
    // creating a pointer pointing towards head
    Node* temp = head;
    int count = 1;
    // traversing to (position-1) node
    while(count < position-1){
        temp = temp->next;
        count++;
    }
    // while inserting at last position
    // we need to update tail also
    if(temp->next = NULL){
        insertAtTail(tail,d);
        return;
    }
    // creating a new node 
    Node *nodeToinsert = new Node(d);
    // address of nodeToinsert is pointing at next value  
    nodeToinsert->next = temp->next;
    // address of temp is pointing to nodeToinsert value
    temp->next = nodeToinsert;
}

         //                        deletion at a particular position                      //
void deleteNode(Node* &head, int position){
    // deleting head node
    if(position == 1){
        Node* temp = head;
        // moving the head pointer towards next value
        head = head->next;
        // deleting the heap memory allocated to initial head node to free up memory
        temp->next = NULL;
        delete temp;
    }
    // deleting any node except head node
    else{
        Node* current = head;
        Node* previous = NULL;
        int count  = 1;
        // traversing the S.L.L. to reach the position
        while(count<position){
            previous = current;
            current = current ->next;
            count++;
        }
        previous->next = current->next;
        // freeing up the memory of the deleted node
        current->next = NULL;
        delete current;

    }
}

// printing the SLL;
void print(Node* &head){
    Node *temp = head;
    while(temp != NULL){
        cout<<temp -> data << " ";
        temp = temp -> next;
    }
    cout<<endl;
}

int main(){
    Node *node1 = new Node(10);
    // head pointing at node 1
    Node* head = node1;
    Node* tail = node1;
    print(head);
    cout<<"Insertion at head\n";
    insertAtHead(head,2);
    print(head);
    insertAtHead(head,13);
    print(head);
    cout<<"Insertion at tail\n";
    insertAtTail(tail,55);
    print(head);
    insertAtTail(tail,22);
    print(head);
    cout<<"Insertion at any given position\n";
    insertionAtPosition(head,tail,3,11);
    print(head);
    insertionAtPosition(head,tail,1,0);
    print(head);
    insertionAtPosition(head,tail,5,90);
    print(head);
    cout<<"deletion at specific position\n";
    deleteNode(head,3);
    print(head);
    deleteNode(head,1);
    print(head);

    return 0;
}