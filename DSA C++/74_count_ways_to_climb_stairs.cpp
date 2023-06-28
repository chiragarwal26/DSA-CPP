#include<iostream>
using namespace std;

int NumberOfWaysToClimbStairs(int n){
    //base condition
    if(n<0){
        // no. of ways in which n can climb stairs if n is -ve
        return 0;
    }
    if(n==0){
        // no. of ways in which n can climb stairs if n == 0
        return 1;
    }
    //recursive relation
    return NumberOfWaysToClimbStairs(n-1)+NumberOfWaysToClimbStairs(n-2);
}