#include<bits/stdc++.h>
using namespace std;
// Finding the intersection b/w two arrays
// This is not the most effiecient soln
// as we proceed further, we will see more better soln using 
// hashing and sets 

int main(){
    //array of N length
    int array_1[6] = {1,2,2,3,3,4};
    //array of M length
    int array_2[4] = {2,2,3,3};
    // this is how we should define a vector.
    vector<int> vect;
    // Two Pointer approach
    int i = 0, j = 0;
    while(i<6 && j<4){
        if (array_1[i]==array_2[j]){
            vect.push_back(array_1[i]);
            i++;
            j++;
        }
        else if (array_1[i]<array_2[j]){
            i++;
        }
        else{
            j++;
        }   
    }
    vector<int> vect2;
    if (vect == vect2 ){
        cout<<"NO Intersection b/w arrays";
    }
    else{
        cout<<"[ ";
        for(int k = 0; k < vect.size(); k++ ){
            cout<<vect[k]<<" ";
    }
    cout<<"]";
    }
}