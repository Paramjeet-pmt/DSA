#include<iostream>
#include<climits>

using namespace std;

int main(){
    int marks[] = {31,324,13,23,-8923};
    int largest = INT_MIN;
    int index;
    int size = sizeof(marks)/ sizeof(int);

    for(int i = 0; i< size; i++){
        if(largest < marks[i]){
            index = i;
            largest = marks[i];
        }   
    }
    cout << "The index of largest number is " << index << endl;
    cout << largest << endl;

}
