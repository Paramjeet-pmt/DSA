#include<stdio.h>

int main(){
    int n,i,j,num,loca,arr_num;
    int arr[50];

    printf("Enter the size of array :");
    scanf("%d",&n);

    for(i=0; i<n; i++){
        printf("Enter the %d Element of arry: ",i);
        scanf("%d",&arr[i]);
    }

    printf("Enter the element you want to find :");
    scanf("%d",&num);

    for(j=0; j<=n; j++){
       if(num == arr[j]){
            arr_num = arr[j];
            loca = j;
            break;
       } 
    }
    if(num == arr_num){
            printf("The %d is present at %dth position of array",arr_num,loca);
        }else{
            printf("The element is not present in the array");
        }
    return 0;
}