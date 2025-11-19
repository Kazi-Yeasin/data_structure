#include <iostream>
using namespace std;
struct Node {
    int data;
    Node *next;
};
void display(Node *ptr){
    while(ptr != nullptr){
        cout<< "Element :"<< ptr->data<<endl;
        ptr = ptr->next;
    }
}
void node(){
    cout<<"Enter the data :";
    Node *head = nullptr;
    Node *tail = nullptr;
    int x; cin>>x;

        Node *newnode = new Node {x, nullptr};

        if(head == nullptr){
            head = tail = newnode;
        }
        else{
            tail->next = newnode;
            tail = tail->next;
        }
    display(head);

}
int main() {
    cout<<"Linked List Creation Number : "<<endl;
    int n; cin>>n;
    // Node *head = nullptr;
    // Node *tail = nullptr;
    while (n--){
        node();
    }
    
    return 0;
}