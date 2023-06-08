#include <iostream>
#include<vector>
using namespace std;
// example : array = [1,2,3,4,5]
// sum = 5
// output = [[1,4],[2,3]]

vector<vector<int>> output_vector;
int array_1[5] = {1,2,3,4,5};
int sum = 5;
int main(){
    for (int i = 0 ; i<5 ; i++){
        for (int j = i+1 ; j<5 ; j++ ){
            if(array_1[i]+array_1[j]==sum){
                vector<int> temp;
                // becoz we want sorted output
                temp.push_back(min(array_1[i],array_1[j]));
                temp.push_back(max(array_1[i],array_1[j]));
                output_vector.push_back(temp);


            }
        }
    }
    for(int i = 0; i < output_vector.size();i++){
        cout<<"["<<output_vector[i][0]<<","<<output_vector[i][1]<<"]";

    }
    return 0;
}