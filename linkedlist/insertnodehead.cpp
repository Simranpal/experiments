/*
  Insert Node at the begining of a linked list
  Initially head pointer argument could be NULL for empty list
  Node is defined as 
  struct Node
  {
     int data;
     struct Node *next;
  }
returning back the pointer to the head of the linked list 
*/
Node* Insert(Node *head,int data)
{
    Node *insertNode = new Node();
    insertNode -> data = data;
    insertNode -> next = head;
    
    return insertNode;
}
