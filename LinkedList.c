#include <stdio.h>
#include <stdlib.h>


//linked List 
//  root[23] [data , 24] -> [date, 25] ->[data,null]
//           23              24             25


// Define a structure for the node
typedef struct node
{
    int data;
    struct node *next;
} node;

node *root = NULL; // global variable

// Function to create a new node
void append();

// Function to print the linked list
void print();

void main()
{
    while (1)
    {
        printf("\nEnter 1 To Append a Node :- \n");
        printf("Enter 2 To Print the List :- \n");
        printf("Enter 3 To Exit :- \n");
        int choice;
        scanf("%d", &choice);
        switch (choice)
        {
        case 1:
            append();
            break;
        case 2:
            print();
            break;
        case 3:
            exit(0);
            break;
        default:
            printf("Invalid Choice\n");
        }
    }
}

void append()
{
    node *temp;
    temp = (node *)malloc(sizeof(node)); // allocate memory for the node
    printf("Enter the data :- ");
    scanf("%d", &temp->data);
    temp->next = NULL; // initialize the next pointer to NULL
    if (root == NULL)
        root = temp;
    else
    {
        node *traverse = root;
        while (traverse->next != NULL)
            traverse = traverse->next; // traverse to the last node
        traverse->next = temp;         // assign the new node to the last node
    }
}

void print()
{
    node *traverse = root;
    while (traverse != NULL)
    {
        printf("%d \t",traverse->data);
        traverse = traverse->next;
    }
    
}