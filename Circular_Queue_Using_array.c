#include <stdio.h>
#include <stdlib.h>

#define max 4

int frt = -1, rr = -1;
int arr[max];

void insert(int num)
{
    if ((rr + 1) % max == frt) // Check till the first element inserted prevent overflow
    {
        printf("\n|__________________________Overflow_______________________________________|\n");
        return;
    }
    else
    {
        // For first time input
        if (frt == -1 && rr == -1)
        {
            frt++;
            rr++;
        }
        else
        {
            // Maintain the queue circular 3 % 4 = 0(%give reminder)
            rr = (rr + 1) % max;
        }
    }
    arr[rr] = num;

    printf("\nInserted element is %d", arr[rr]);
}
void delete()
{
    if (frt == -1)
    {
        printf("\n|________________________Underflow_______________________________________|\n");
    }
    else if (frt == rr)
    {
        arr[frt] = 0;
        frt = rr = -1;
    }
    else
    {
        arr[frt] = 0;
        frt = (frt + 1) % max;
    }
}

void display()
{
    if (frt == -1 && rr == -1)
    {
        printf("\n|________________________The Queue is empty______________________________|");
    }
    else
    {
        printf("The Queue is \n");
        for (int i = frt; i <= rr; i++)
        {
            printf("%d\n", arr[i]);
        }
    }
}

int main()
{
    int choice, num;

    while (1)
    {

        printf("\n1. Insert\n2. Delete\n3. Display\n4. Exit\n");
        printf("Enter the choice: ");
        scanf("%d", &choice);
        switch (choice)
        {
        case 1:
            printf("Enter the element you want to insert: ");
            scanf("%d", &num);
            insert(num);
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
            printf("Invaild input");
            break;
        }
    }
}
