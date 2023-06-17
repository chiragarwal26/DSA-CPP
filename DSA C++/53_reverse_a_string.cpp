#include<iostream>
using namespace std;

void reverseString(char charArray[], int length){
    int start = 0;
    int end = length -1;
    while(start<end){
        swap(charArray[start++], charArray[end--]);
    }
}

int get_length(char name[]){
    int length = 0;
    for(int i =0; name[i] != '\0'; i++ ){
        length++;
    }
    return length;
}

int main(){
    char naamLikh[8];
    cout<<"NAAM LIKH APNA\n";
    cin>>naamLikh;
    cout<<"TERE NAAM KI LENGTH HAI ";
    cout<<get_length(naamLikh);
    cout<<endl;
    cout<<"TERE NAAM KAA REVERSE HAI ";
    int len = get_length(naamLikh);
    reverseString(naamLikh, len);
    cout<<naamLikh<<endl;

}