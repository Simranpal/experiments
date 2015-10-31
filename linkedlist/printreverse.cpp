/*
  Print elements of a linked list in reverse order as standard output
  head pointer could be NULL as well for empty list
  Node is defined as 
  struct Node
  {
     int data;
     struct Node *next;
  }
*/
void ReversePrint(Node *head)
{
  Node *currentNode = head;
  if(currentNode == NULL){
      return;
  }
  
  ReversePrint(currentNode->next);
  cout <<currentNode->data<<endl;
}