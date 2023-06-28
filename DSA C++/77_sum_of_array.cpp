#include<iostream>
using namespace std;

int sumArray(int arr[], int size){

    // base condition
    if(size==0){
        return 0;
    }

    if(size==1){
        return *arr;
    }
// remaining part is array without arr[0] element
    int remainingPart =  sumArray(arr+1, size-1);
    int sum = *arr + remainingPart;
    return sum;
}

int main(){
    int array[5] = {1,2,3,4,5};
    int size = 5;
    int answer = sumArray(array,size);
    cout<<answer;
}