 #include<iostream>
 using namespace std;
 int main(){
     int count = 0;
     int n = 0b100000110;
        while(n!=0){
            //checking the last bit 
            if (n&1){
                count++;
            }
            n = n>>1;
        }
    cout<<"number of occurence of 1 in the no. is "<<count;
 }
