//Static memory allocation(SMA)
#include<iostream>

using namespace std;

int main(){
    int arr[fixedSize]; // never take variable
    //arr = &arr[0]
    
    //initialisation from 0
    int arr[10] = {0};
    
    //designated initialiser
    //initialisation from any number other than zero 0 
    int arr[10] = {[0 ...9]=5};
    
    
    
}

//Using STL (cpp)
#include<iostream>
#include<array>
using namespace std;

int main(){
      array<int, fixedSize > arr;
      arr.size(); //for size
}

//Traversal 
for(int i = 0; i < arr.size(); i++){
      cout<<arr[i]<<endl;
    }
