#include <iostream>
using namespace std ;
struct Node1{
    int data;
    Node1*next;
    Node1(int value){
        data = value;
        next = NULL;
    }
    
};
int main() {
    // Write C++ code here
    Node1*head = new Node1(10);
    head->next = new Node1(20);
    head->next->next = new Node1(30);
    Node1*current = head;
    while(current!=NULL){
        cout<<current->data<<"->";
        current = current->next;
    }
    cout<<"NULL"<<endl;
    return 0;
}
