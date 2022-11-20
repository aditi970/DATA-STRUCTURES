#include<stdio.h>
#include<stdlib.h>
struct Node{
 int INFO;
 struct Node *NEXT;
};
/*To Traverse the linked list. */
void Traverse_List(struct Node *START)
{ 
 struct Node *Temp=START;
 while(Temp!=NULL)
 {
 printf("%d ",Temp->INFO);
 Temp=Temp->NEXT;
 }
}
/*To insert a node in the linked list at the beginning. */
struct Node* insert_At_Beginning(struct Node *START,int info)
{
 struct Node *New_Node=(struct Node *)malloc(sizeof(struct 
Node));
 New_Node->INFO=info;
 New_Node->NEXT=START;
 START=New_Node;
 return New_Node;
}
/*To insert a node in the linked list at the given location. */
struct Node* insert_At_Given_loc(struct Node *START,int info,int 
loc)
{
 struct Node *Temp=START,*New_Node;
 New_Node=(struct Node *)malloc(sizeof(struct Node));
 New_Node->INFO=info;
 if(loc==1)
 {
 New_Node->NEXT=START;
 START=New_Node;
 return New_Node;
 }
 for(int i=1;i<loc-1;i++)
 {
 Temp=Temp->NEXT;
 if(Temp==NULL)
 {
 printf("Location is greater than number of nodes.\n");
 break;
 }
 }
 New_Node->NEXT=Temp->NEXT;
 Temp->NEXT=New_Node;
 printf("NODE INSERTED SUCCESSFULLY AT GIVEN 
LOCATION\n\n");
 return START; 
}
/*To insert a node in the linked list at the end. */
struct Node* insert_At_End(struct Node *START,int info)
{
 struct Node *New_Node,*Temp;
 New_Node=(struct Node *)malloc(sizeof(struct Node));
 New_Node->INFO=info;
 New_Node->NEXT=NULL;
 
 if(START==NULL)
 {
 START=New_Node;
 return START;
 }
 else
 {
 Temp=START;
 while(Temp->NEXT != NULL)
 {
 Temp=Temp->NEXT;
 }
 Temp->NEXT=New_Node;
 return START;
 }
}
int main()
{
 int choice,loc,info;
 
 /*MENU*/
 printf("------Welcome-------\n");
 printf("Enter 1. To insert a node at beginning.\nEnter 2. To insert a 
node at specified position.\nEnter 3. To insert a node at end.\n");
 scanf("%d",&choice);
 printf("\nEnter the value of the node to be inserted in the linked list 
:\n");
 scanf("%d",&info);
 /*Creating LINKED LIST. */
 struct Node *START=(struct Node*)malloc(sizeof(struct Node));
 struct Node *FIRST=(struct Node*)malloc(sizeof(struct Node));
 struct Node *SECOND=(struct Node*)malloc(sizeof(struct
Node));
 START->INFO=31;
 START->NEXT=FIRST;
 FIRST->INFO=25;
 FIRST->NEXT=SECOND;
 SECOND->INFO=27;
 SECOND->NEXT=NULL;
 
 switch(choice)
 {
 case 1:
 START=insert_At_Beginning(START,info);
 printf("NODE INSERTED SUCCESSFULLY AT 
BEGINNING\n\n");
 printf("Linked list: "); 
 Traverse_List(START);
 break;
 case 2:
 printf("Enter the position at which the node has to be 
inserted:\n");
 scanf("%d",&loc);
 START=insert_At_Given_loc(START,info,loc);
 printf("Linked list: ");
 Traverse_List(START);
 break;
 case 3:
 START=insert_At_End(START,info);
 printf("NODE INSERTED SUCCESSFULLY AT END\n\n");
 printf("Linked list: ");
 Traverse_List(START);
 break;
 default:
 printf("INVALID INPUT");
 }
 printf("\n");
 return 0;
}
