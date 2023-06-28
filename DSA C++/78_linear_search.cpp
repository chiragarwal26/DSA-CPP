#include<iostream>
using namespace std;

bool linearSearch(int arr[], int size, int key){

    // base condition
    if(size==0){
        return false;
    }
    if(key == *arr){
        return true;
    }
    linearSearch(arr+1, size-1, key);
}

int main(){
    int array[5] = {1,2,3,4,5};
    int size = 5;
    int key = 3;
    int answer = linearSearch(array,size, key);
    if(linearSearch){
        cout<<"The Key is Present\n";
    }
    else{
        cout<<"the Key is Absent\n";
    }
}