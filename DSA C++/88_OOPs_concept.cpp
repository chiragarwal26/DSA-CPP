#include<iostream>
using namespace std;

class Human{
    public:
    int age;
    int weight;
    string name;
    int getAge(){
        return this->age;
    }
    int setWeight(int weight){
        this->weight = weight;
    }
};

class Male : public Human{
    public:
    string color;
};

// driver code
int main(){
    Male Chirag;
    cout<<Chirag.color<<endl;
    cout<<Chirag.weight<<endl;
    cout<<Chirag.setWeight(5)<<endl;
    cout<<Chirag.weight<<endl;
    return 0;
}