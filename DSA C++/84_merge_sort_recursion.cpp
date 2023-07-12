#include<iostream>
using namespace std;

void merge(int *array, int start, int end ){
    int mid = start + (end-start)/2;
    // length of two sub-arrays
    int len1 = mid-start+1;
    int len2 = end-mid;
    // declaring two arrays of len1 & len2 (dynamic memory allocation)
    // CAUTION !!! Don't forget to release the memory after usage
    int *first = new int[len1];
    int *second = new int[len2];
    //copy values of main array into two sub-arrays
    int mainArrayIndex = start;
    for(int i = 0; i<len1; i++){
        first[i] = array[mainArrayIndex++];
    }
    mainArrayIndex = mid+1;
    for(int i =0; i<len2; i++){
        second[i] = array[mainArrayIndex++];
    }
    // merging the two sorted arrays
    int index1=0;
    int index2=0;
    mainArrayIndex = start;
    while(index1<len1 && index2<len2){
        if(first[index1]< second[index2]){
            array[mainArrayIndex++] = first[index1++];
        }
        else{
            array[mainArrayIndex++] = second[index2++];
        }
    }
    while(index1<len1){
        array[mainArrayIndex++] = first[index1++];
    }
    while(index2<len2){
        array[mainArrayIndex++] = second[index2++];
    }
    // free the dynamic memory allocated
    delete[] first;
    delete[] second;
}

void mergeSort(int *array, int start, int end){
    // base codntion
    if(start>=end){
        return ;
    }
    int mid = start+(end-start)/2;

    //left waale array ko sort krna h
    mergeSort(array,start, mid);

    // right waale array ko sort krna h
    mergeSort(array,mid+1,end);

    // merging the arrays
    merge(array,start,end);
}

int main(){

    int array[4] = {2,5,1,6};
    mergeSort(array,0,3);
    for(int i = 0; i<4; i++){
        cout<<array[i]<<" ";
    }
    cout<<endl;
}