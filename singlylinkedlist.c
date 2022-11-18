#include<stdio.h>
#include<stdlib.h>
/*Creating basic stucture of the node of the linked list. */
struct Node {
 int INFO;
 struct Node *NEXT;
};
/*Creating Start Pointer. */
struct Node* Create_List()
{
 /*Creating a empty linked list. */
 struct Node *START=(struct Node *)malloc(sizeof(struct 
Node));
 START=NULL;
 return START;
}
/*Function to insert node in the linked list. */
struct node* Insert_beginning(struct Node *START,int info)
{
 /*Allocating memory to the pointer new node with the help which 
we will be able to insert the node in the linked list. */
 struct Node *New_Node=(struct Node *)malloc(sizeof(struct 
Node));
 /*Storing data information in the new node. */
 New_Node->INFO=info;
 /*Storing address of the start pointer in the next of the new node. */
 New_Node->NEXT=START;
 /*Pointing start pointer to the new node. */
 return New_Node;
 
}
/*Function to traverse the linked list. */
void Traverse_List(struct Node* START)
{
 struct Node *Temp;
 Temp=START;
 while(Temp != NULL)
 {
 printf("%d ",Temp->INFO);
 Temp =Temp->NEXT;
 }
}
int main()
{
 int n,info;
 
 printf("\nEnter the number of nodes to be added in the linked 
list:\n");
 scanf("%d",&n);
 
 /*Creating START Pointer. */
 struct Node *START= Create_List();
 printf("\n");
 /*Loop to insert n nodes in the linked list. */
 for(int i=1;i<=n;i++)
 {
 printf("Enter the value of the node %d to be inserted in the 
linked list:\n",i);
 scanf("%d",&info); 
 /*Calling function to insert node and updating START 
simultaneously. */
 START = Insert_beginning(START,info);
 }
 /*Calling Function traverse to print all the nodes of the linked list. */
 printf("\nLINKED LIST: ");
 Traverse_List(START);
 printf("\n");
 return 0; 
}
