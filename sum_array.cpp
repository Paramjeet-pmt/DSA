#include<iostream>

using namespace std;

int sum_arr (int arr[],int size){
    int sum = 0;
    for(int i= 0; i< size; i++){
        sum += arr[i];
    }
    return sum;
}

int main(){
    int arr[] = {1,2,3,9,42,52,532};
    int size = sizeof(arr)/sizeof(int);

    int sum = sum_arr(arr, size);
    cout << "The sum of array is " << sum << endl;

}