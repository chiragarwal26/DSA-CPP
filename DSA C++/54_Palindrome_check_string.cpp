#include<iostream>
#include<vector>
using namespace std;

char toLowerCase(char arr){
    if(arr>='a' && arr<='z'){
        return arr;
    }
    else{
        char temp = arr-'A'+'a';
        return temp;
    }
}

bool palindromeChecker(char array[], int length){
    int start =0, end = length - 1;
    while(start<=end){
        if(array[start] != array[end]){
            return 0;
        }
        else{
            start++;
            end--;
        }
    }
    return 1;
}

int main(){
    char myArray[5];
    cout<<"String enter kro\n";
    cin>>myArray;
    cout<<"Palindrome checker: "<<endl;
    cout<<palindromeChecker(myArray,5);
    cout<<endl;
    char name =  'C';
    char caste = 'a';
    cout<<toLowerCase(name)<<"\n"<<toLowerCase(caste);
}
