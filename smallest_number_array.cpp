#include<iostream>
#include<climits>
using namespace std;

int main(){
    int marks[] ={92, 12, 32, 67, -98, -897, -4180};

    int smallest = INT_MAX;
    int size = sizeof(marks)/sizeof(int);

    for(int i = 0; i< size; i++){
        if(smallest > marks[i]){
            smallest = marks[i];
        }
    }

    cout<< smallest << endl;
}