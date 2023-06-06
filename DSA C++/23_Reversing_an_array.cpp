#include<iostream>
using namespace std;

void printArray( int arr[],int size){
    for(int i = 0; i<size; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}
void reverse(int arr[], int size){
    int start = 0;
    int end = size-1;
    while(start<=end){
        swap(arr[start],arr[end]);
        start++;
        end--;

    }

}


int main(){
    int array[10] = {1,2,3,4,5,6,7,8,9,10};
    int array2[5] = {1,2,3,4,5};
    cout<<"the original array are : \n";
    printArray(array,10);
    printArray(array2,5);

    reverse(array2,5);
    reverse(array,10);
    cout<<"the reversed array are : \n";
    printArray(array,10);
    printArray(array2,5);
}