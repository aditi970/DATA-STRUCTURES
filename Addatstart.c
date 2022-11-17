#include <stdio.h>  
struct node
{
    int data;  
    struct node *next;  
};
struct node *head, *tail = NULL;  
void addAtStart(int data) 
{  
    struct node *newNode = (struct node*)malloc(sizeof(struct node));  
    newNode->data = data;  
    newNode->next = NULL;  
      
    if(head == NULL) 
    {  
        head = newNode;  
        tail = newNode;  
    }  
    else 
    {  
        struct node *temp = head;  
        head = newNode;  
        head->next = temp;  
    }  
}  
void display() 
{  
    struct node *current = head;  
      
    if(head == NULL) 
    {  
        printf("List is empty\n");  
        return;  
    }  
    printf("Adding nodes to the start of the list: \n");  
    while(current != NULL)
    {  
        printf("%d ", current->data);   
        current = current->next;  
    }  
    printf("\n");  
}  
      
int main()  
{  
   addAtStart(1);  
    display();  
      
   addAtStart(2);  
    display();  
      
   addAtStart(3);  
    display();  
      
   addAtStart(4);  
    display();  
   
    return 0;  
} 
