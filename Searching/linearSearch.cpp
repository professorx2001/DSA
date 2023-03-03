//check if present
#include<iostream>
using namespace std;
//function for linear search
bool linearSearch(int arr[], int size, int key){
    for(int i = 0; i < size; i++){
        if(arr[i] == key)
        return true; 
    }
    return false;
}

//check and return index
int linearSearch(int arr[], int size, int k){
    for(int i = 0; i < size; i++){
        if(arr[i] == k)
        return i; 
    }
    return -1;
}
