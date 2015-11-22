#include <iostream>
using namespace std;

struct Node {
    int data;
    Node * next;
};

Node* top = NULL;

void push (int x) {
    
    Node * newNode = new Node();
    
    newNode -> data = x;
    newNode -> next = top;
    
    top = newNode;
    
}

void pop () {
    if(top == NULL) return ;
    Node *topNode = top;
    top = topNode ->  next;
    
    delete(topNode);
}

void Print()
{
    Node* temp = top;
    while(temp!=NULL)
    {
        cout <<temp->data << endl;
        temp=temp->next;        
    }

}
int main() {
	push(1); Print();
	push(2); Print();
	push(3); Print();
	push(4); Print();
	return 0;
}
