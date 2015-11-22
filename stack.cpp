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
	push(1); 
	push(2); 
	push(3); 
	push(4); 
	
	pop();
	Print();
	return 0;
}
