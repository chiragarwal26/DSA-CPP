#include<iostream>
#include<vector>
using namespace std;

vector<int> reverseArray(vector<int> arr){
    int s = 0;
    int e = arr.size() - 1;
    while(s<e){
        swap(arr[s++], arr[e--]);
    }
    return arr;

}
void Print(vector<int> arr){
    for(int i =0; i<arr.size() ; i++){
        cout<<arr[i]<<" ";
    }
}
vector<int> sumOfArrays( vector<int> arr1 , int size1, vector<int> arr2, int size2 ){
    int i = size1-1, j = size2-1, carry = 0;
    vector<int> arr3;
    while(i>=0 && j>=0){
        int sum = arr1[i--] + arr2[j--] + carry;
        carry = sum/10;
        sum = sum%10;
        arr3.push_back(sum);
    }
    //CASE 1: when arr1 is bigger than arr2  
    while(i>=0){
        int sum = arr1[i--] + carry;
        carry = sum/10;
        sum = sum%10;
        arr3.push_back(sum);
    }
    //CASE 2: when arr2 is bigger than arr2
    while(j>=0){
        int sum = arr2[j--] + carry;
        carry = sum/10;
        sum = sum%10;
        arr3.push_back(sum);
    //CASE 3: when some carry will remain at last step
    }
    while(carry!=0){
        int sum = carry;
        carry = sum/10;
        sum = sum%10;
        arr3.push_back(sum);

    }
return reverseArray(arr3);
}
//driver code
int main(){
    vector<int> array1;
    vector<int> array2;
    //array 1
    cout<<"array 1 is  : ";
    array1.push_back(1);
    array1.push_back(2);
    array1.push_back(3);
    array1.push_back(4);
    Print(array1);
    cout<<endl;
    //array 2
    cout<<"array 2 is : ";
    array2.push_back(6);
    Print(array2);
    cout<<endl;
    cout<<"resultant array\n";
    Print(sumOfArrays(array1, 4 , array2 , 1 ));
}
