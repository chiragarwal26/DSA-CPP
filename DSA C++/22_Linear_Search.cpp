#include<iostream>
using namespace std;

bool linearSearch(int arr[],int size,int key){
    for (int i = 0;i<size;i++){
        if (arr[i]==key){
            return 1;
        }
    }
    return 0;
}

int main(){
    int myArray[10] = {5,13,-4,-19,32,23,2,21,44,-78};
    int key;
    cout<<"Enter the element you want to search for:\n";
    cin>>key;
    int result = linearSearch(myArray,10,key);
    if (result){
        cout<<"Element is present";
    }
    else{
        cout<<"Element is not presnt";
    }
    

}