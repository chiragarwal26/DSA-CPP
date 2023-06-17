#include<iostream>
using namespace std;

void InsertionSort( int arr[], int size){

    for(int i = 1; i<size ; i++){
        int temp = arr[i];
        int j = i-1;
        for( ;j>=0; j--){

            if(arr[j]> temp){
                arr[j+1] = arr[j];
            }
            else{
                break;
            }
        }
        arr[j+1] = temp;
    }

}

//driver code
int main(){
    int array[7] = {10,1,7,4,8,2,11};
    cout<<"\nOriginal ARRAY\n[ ";
    for(int k = 0 ; k<7; k++){
        cout<<array[k]<<" ";
        
    }
    cout<<"]";
    InsertionSort(array,7);
    cout<<"\nSORTED ARRAY\n[ ";
    for(int k = 0 ; k<7; k++){
        cout<<array[k]<<" ";
    }
    cout<<"]";
}