#include<stdio.h>

#define MAX 5

int stack[MAX];
int top =-1;

//Push Operation

void push(int value){
    if(top == MAX-1){
        printf("Stack Overflow\n");
    }else{
        top++;
        stack[top] = value;
        printf("Inserted: %d\n",value);
    }
}

//Pop Operation
void pop(){
    if(top == -1){
        printf("Stack Underflow\n");
    }else{
        printf("Deleted: %d\n",stack[top]);
        top--;
    }
}\

//Peek operation
void peek(){
    if(top == -1){
        printf("Stack is empty\n");
    }else{
        printf("Top element is %d\n",stack[top]);
    }
}

//Display operation
void display(){
    if(top == -1){
        printf("Stack is empty\n");
    }else{
        printf("Stack elements are: ");
        for(int i = top; i>=0; i--){
            printf("%d   ",stack[i]);
        }
        printf("\n");
    }
}

//Main function
int main(){
    int choice, value;

    while(1){
        printf("\n1. Push\n2. Pop\n3. Peek\n4. Display\n5. Exit\n");

        printf("Enter your Choice: ");
        scanf("%d",&choice);

        switch(choice){
            case 1 :
            printf("Enter Value: ");
            scanf("%d",&value);
            push(value);
            break;

            case 2 :
            pop();
            break;

            case 3 :
            peek();
            break;

            case 4 :
            display();
            break;

            case 5 :
            return 0;

            default:
            printf("Invaild Choice\n");
        }

    }
}