/*
  Delete Node at a given position in a linked list 
  Node is defined as 
  struct Node
  {
     int data;
     struct Node *next;
  }
*/
Node* Delete(Node *head, int position)
{
    Node *currentNode = head;
    
    
    if (position == 0){ return head->next; }
    
    for(int i = 0; i < position-1; i++) {
        currentNode = currentNode -> next;
    }
    Node *delNode = currentNode -> next;
    currentNode -> next = delNode -> next;
    
    return head;
}
