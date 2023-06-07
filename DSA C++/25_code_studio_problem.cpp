#include<iostream>
using namespace std;

// We are given an array --> {3,7,2,2,7,3,4} (can be any array)
// in this array, all elements have 2 occurence except one element.
// We need that number as output which has only one occurence in the array
// for example array --> {3,7,2,2,7,3,4} will give output --> 4
// for example array --> {5,5,8,15,8,3,15} will give output --> 3

int main(){
    int myArray[11] = {3,4,5,3,8,5,7,4,7,2,2};
    int ans = 0;
    for(int i =0; i<11;i++){
        // as a^a = 0 so we are using that logic here.
        ans = ans^myArray[i];
    }
    cout<<ans<<" is the number \nIT is occuring only one time in the array"<<endl;

}
 