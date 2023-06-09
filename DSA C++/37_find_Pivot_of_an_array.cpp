#include<iostream>
using namespace std;

// pivot element ,means 
// element jiske left elements kaa sum == right elements ka sum
int PivotFinder(int arr[], int size){
    int totalSum = 0, leftSum = 0;
    //finding the total sum
    for(int i = 0; i< 6 ; i++){
        totalSum+=arr[i];
    }
    // leftsum == rightsum (for pivot element)
    for(int i = 0; i< 6; i++){
        if(leftSum == totalSum - leftSum - arr[i]){
            return i;
        }
        leftSum+=arr[i];
// if no pivot return -1
    }
    return -1;

}

int main(){
    int arr[6] = {1,7,3,6,5,6};
    cout<<"the pivot element is : "<<arr[PivotFinder(arr,6)]<<endl;
    cout<<"and the index of pivot element is: "<<PivotFinder(arr,6);
}