//Largest element at rigtmost position after each round

void bubbleSort(int arr[], int size){
    for(int i = 0; i < size - 1; i++){
        bool swapped = false;
        for(int j = 0; j < size-1-i; j++){
            if(arr[j]>arr[j+1]){
            swap(arr[j],arr[j+1]);
            swapped = true;
            }
        }
        if(swapped == false) //if already sorted 
        break;
    }
}
