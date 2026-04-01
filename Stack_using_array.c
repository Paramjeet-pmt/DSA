#include <stdio.h>
#include <stdlib.h>
#define MAX 5

int arr[MAX];
int top = -1;

void insertstack(int num)
{
    top++;
    arr[top] = num;

    printf(" Stored Number %d\n", arr[top]);
}

void delete()
{
    int num = arr[top];
    top--;
}

void display()
{
    for (int i = 0; i <= top; i++)
    {
        printf("%d  ", arr[i]);
    }
    printf("\n");
}
int main()
{
    int choice;
    int num;
    while (1)
    {
        printf("1. Insert\n2. Delete\n3. Display\n4. Exit\n");
        printf("Enter the choice : ");
        scanf("%d", &choice);
        switch (choice)
        {
        case 1:
            printf("Enter number: ");
            scanf("%d", &num);
            insertstack(num);

            break;

        case 2:
            delete();
            break;

        case 3:
            display();
            break;

        case 4:
            exit(0);

        default:
            printf("Invaild choice");
        }
    }
}