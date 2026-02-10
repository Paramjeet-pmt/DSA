#include<stdio.h>

int main(){
    int n,i,j,k,num,loca;
            int arr[50];

    printf("Enter the size of array :");
    scanf("%d",&n);

    for(i=0; i<n; i++){
        printf("Enter the %dth element of array :",i);
        scanf("%d",&arr[i]);
    }
    for(k=0; k<(n-1); k++){
    for(j=0; j<(n-1-k); j++){
        if(arr[j]> arr[j+1]){
            int temp = arr[j];
            arr[j] = arr[j+1];
            arr[j+1] = temp;
        }
    }
}

printf("The output is \n");
printf("Sorted Array :");
    for(i=0; i<n; i++){
        printf("%d  ",arr[i]);
    }
}