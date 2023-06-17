#include<iostream>
#include<array>
using namespace std;

void mergingFunction(int arr1[],int size1, int arr2[], int size2){
    int n = size1 - size2;
    //n denotes no. of zeroes in arr1
    int i = n - 1 , j = n - 1, k = (2*n)-1;
    while(i>=0 && j>=0){
        if(arr2[j] > arr1[i]){
            arr1[k--] = arr2[j--];
        }
        else{
            arr1[k--] = arr1[i--];
        }
    } 
}

void print(int arr[], int size){
    cout<<"{";
    for(int i = 0 ; i<size ; i++){
        cout<<arr[i]<<" ";
    }
    cout<<"}"<<endl;
}
int main(){
    int array1[6] = {1,2,3,0,0,0};
    int array2[3] = {2,4,6};
    mergingFunction(array1,6,array2,3);

    print(array1, 6);
    return 0;
}