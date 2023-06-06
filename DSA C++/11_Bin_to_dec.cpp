#include<iostream>
#include<math.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int answer = 0;
    int i = 0;
    while(n!=0){
        int digit = n%10;
        answer = digit * pow(2,i) + answer;
        i+=1;
        n = n/10;
    }
    cout<<"Binary to Decimal conversion is "<<answer<<endl;
}