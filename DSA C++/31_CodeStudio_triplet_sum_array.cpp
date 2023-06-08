#include <iostream>
#include<vector>
#include<algorithm>
using namespace std;
// example : array = [1,2,3,4,5]
// sum = 12
// output = [[3,4,5]]

vector<vector<int>> output_vector;
int array_1[5] = {1,2,3,4,5};
int sum = 12;
int main(){
    for (int i = 0 ; i<5 ; i++){
        for (int j = i+1 ; j<5 ; j++ ){
            for (int k = i+2 ; k<5 ; k++){
                if( (array_1[i]+array_1[j]+array_1[k]) == sum ){
                    vector<int> temp;
                    // becoz we want no duplicate elements so
                if ((array_1[i]!= array_1[j] && 
                    array_1[j]!= array_1[k] &&
                    array_1[k] != array_1[i])){
                        // becoz we want sorted output
                        temp.push_back(array_1[i]);
                        temp.push_back(array_1[j]);
                        temp.push_back(array_1[k]);
                        sort(temp.begin(), temp.end());
                        output_vector.push_back(temp);
                    }
                    


            }
        }
    }

            }
            
    cout << "The desired output is: ";
    for (int i = 0; i < output_vector.size(); i++) {
        cout << "[";
        for (int j = 0; j < output_vector[i].size(); j++) {
            cout << output_vector[i][j]<<" ";
        }
        cout << "]";
    }
    cout << endl;

    return 0;
}