#include <stdio.h>
#include <stdlib.h>

#define max 4

int frt = -1, rr = -1;
int arr[max];

void insert(int num)
{
    if ((frt == 0 && rr == max - 1) || (frt == rr + 1))
    {
        printf("\n||____________________Overflow____________________________||\n");
        return;
    }
    else if (frt == -1 && rr == -1)
    {
        frt++;
        rr++;
    }
    else
    {
        rr++;
    }

    arr[rr] = num;

    printf("Insertd Element :%d\n", arr[rr]);
}

void delete(){
    if(frt == -1){
        printf("Underflow");
        return;
    }else{
        frt++;
    }
}

void display(){
    for(int i = frt; i<=rr; i++){
        printf("%d  ",arr[i]);
    }
}


int main()
{

    int choice, num;

    while (1)
    {
        printf("\n1. Insert\n2. Delete\n3. Display\n4. Exit\n");
        printf("Enter your choice ");
        scanf("%d", &choice);

        switch (choice)
        {
        case 1:
            printf("Enter the element you want to enter: ");
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
            break;

        default:
            printf("Invalid choice");
            break;
        }
    }
}