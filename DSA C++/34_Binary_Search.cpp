#include<iostream>
using namespace std;


int BinarySeach(int arr[], int size, int key){
    int start = 0 , end = size-1;

    int mid = start + (end - start)/2;

    while(start<=end){
        if (arr[mid] == key){
            return mid;
        }
        //go to left wala part
        if (arr[mid]> key){
            end = mid-1;

        }
        // go to right wala part
        else{
            start = mid+1;
        }
        mid = start + (end - start)/2;
    }
    return -1;


}
int main(){
    int even[6] = {1,5,11,23,44,54};
    int odd[5] = {1,5,11,23,44};
    int answer = BinarySeach(even, 6, 54);
    cout<<"The index of 54 is: "<<answer<<endl;

}