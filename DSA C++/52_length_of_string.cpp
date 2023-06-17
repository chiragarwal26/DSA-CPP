#include<iostream>
using namespace std;

int get_length(char name[]){
    int length = 0;
    for(int i =0; name[i] != '\0'; i++ ){
        length++;
    }
    return length;
}

int main(){
    char MeraNaam[10];
    cout<<"NAAM LIKH APNA\n";
    cin>>MeraNaam;
    cout<<"TERA NAAM HAI ";
    cout<<MeraNaam<<endl;
    cout<<"TERA NAAM KI LENGTH HAI : ";
    cout<<get_length(MeraNaam);

}