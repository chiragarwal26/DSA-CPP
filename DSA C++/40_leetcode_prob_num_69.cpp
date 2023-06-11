#include<iostream>
using namespace std;
// Q. Finding square root of a number ?
// we are taking long long int becoz
// mid * mid can overflow int range
long long int BinarySearch(int key){
    int start = 0;
    int end = key;
    long long int mid = start + (end - start)/2;
    int answer =  -1;

    while(start<=end){
        long long int square = mid * mid;
        if(square==key){
            return mid;
        }
        else if(square < key){
            answer = mid;
            start = mid+1;
        }
        else{
            end = mid-1;
        }
        mid = start + (end - start)/2;
    }
    return answer;
}

double morePrecision(int n , int precision, int tempsoln){
    double factor = 1;
    double ans = tempsoln;
    for(int i=0; i<precision;i++){
        factor/=10;
        for(double j = ans ; j*j<n; j += factor ){
            ans = j;
        }

    }
    return ans;

}

//Driver Code
int main(){
    int INPUT = 37;
    int output = BinarySearch(INPUT);
    cout<<"The Square Root of "<<INPUT<<" is approx. : "<<output<<endl;
    int tempsoln = output;

    cout<<"More Precised Soln is : "<<morePrecision(INPUT,3,tempsoln);

}
