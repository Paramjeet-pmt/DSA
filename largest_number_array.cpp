#include<iostream>
#include<climits>

using namespace std;

int main(){
    int marks[] = {31,324,13,23,-8923, 2432};
    int largest = INT_MIN;
    int size = sizeof(marks)/ sizeof(int);

    for(int i = 0; i< size; i++){
        if(largest < marks[i]){
            largest = marks[i];
        }   
    }
    cout << largest << endl;
    
}
