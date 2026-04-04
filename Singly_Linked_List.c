#include <stdio.h>
#include <stdlib.h>

// Node Structure
struct Node
{
    int data;
    struct Node *next;
};

struct Node *head = NULL;

// Insert at Beginning
void insertBeginning(int value)
{
    struct Node *newNode = (struct Node *)malloc(sizeof(struct Node));
    newNode->data = value;
    newNode->next = head;
    head = newNode;
}

// Insert at end
void insertEnd(int value)
{
    struct Node *newNode = (struct Node *)malloc(sizeof(struct Node));
    struct Node *temp = head;

    newNode->data = value;
    newNode->next = NULL;

    if (head == NULL)
    {
        head = newNode;
        return;
    }

    while (temp->next != NULL)
    {
        temp = temp->next;
    }

    temp->next = newNode;
}

// Insert at specific position
void insertPosition(int value, int pos)
{
    struct Node *newNode = (struct Node *)malloc(sizeof(struct Node));
    struct Node *temp = head;

    newNode->data = value;

    if (pos <= 1 || head == NULL)
    {
        newNode->next = head;
        head = newNode;
        return;
    }

    for (int i = 1; i < pos - 1 && temp->next != NULL; i++)
    {
        temp = temp->next;
    }

    newNode->next = temp->next;
    temp->next = newNode;
}

// Display list
void display()
{
    struct Node *temp = head;
    while (temp != NULL)
    {
        printf("%d ->", temp->data);
        temp = temp->next;
    }

    printf("Null\n");
}

// Main Function
int main()
{
    int choice, value, pos;
    while (1)
    {
        printf("\n1. Insert At Begninning\n2. Insert at End\n3. Insert at specific Condition\n4. Display\n5. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice)
        {
        case 1:
            printf("Enter the Number you want to Insert: ");
            scanf("%d", &value);
            insertBeginning(value);
            break;

        case 2:
            printf("Enter the value you want to insert: ");
            scanf("%d", &value);
            insertEnd(value);
            break;

        case 3:
            printf("Enter the value you want to insert: ");
            scanf("%d", &value);

            printf("Enter the position where you want to insert: ");
            scanf("%d", &pos);

            insertPosition(value,pos);
            break;

        case 4:
            printf("Linked List: ");
            display();
            break;

        case 5:
            exit(0);
            break;

        default:
            printf("Invalid Input");
            break;
        }
    }
}
