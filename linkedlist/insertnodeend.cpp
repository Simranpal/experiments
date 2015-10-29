/*
  Insert Node at the end of a linked list 
  head pointer input could be NULL as well for empty list
  Node is defined as 
  struct Node
  {
     int data;
     struct Node *next;
  }
*/
Node* Insert(Node *head,int data)
{
    Node *insertNode = new Node();
    insertNode->data = data;
    insertNode->next = NULL;
    
    if(head == NULL) { 
        head= insertNode;
        return head;
    }
    Node *currentNode = head;
    while(currentNode->next != NULL) {
        currentNode = currentNode->next;
    }

    currentNode->next = insertNode;
    return head;
}
