/*
  Reverse a linked list and return pointer to the head
  The input list will have at least one element  
  Node is defined as 
  struct Node
  {
     int data;
     struct Node *next;
  }
*/
Node* Reverse(Node *head)
{
    Node *currentNode = head;
    Node *prevNode    = NULL;
    Node *nextNode    = NULL;
    
    while(currentNode != NULL) {
     
        nextNode = currentNode -> next;
        currentNode -> next = prevNode;
        prevNode = currentNode;
        currentNode = nextNode;
        
    }
    head = prevNode;
    return head;
}