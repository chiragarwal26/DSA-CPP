#include<iostream>
using namespace std;
#include<vector>
int countPrime(int n){
    int count = 0;
    // initialising a vector where all elements 
    // are considered as Prime
    vector<bool> prime(n+1,true);
    // making 0 and 1 as non-prime
    prime[0] = prime[1] = false;

    for(int i = 2 ; i<n; i++){

        if(prime[i]){
            count++;
            // making all the elements coming 
            // in table of prime[i] as non-prime
            for(int j = 2*i; j<n; j+=i){
                prime[j] = false;
            }
        }
    }
    return count;
}
int main(){
    int n = 10;
    cout<<"the no. of prime no. less than "<<n<<" is:\n";
    cout<<countPrime(n);
}