// by me
void insertionSort(int arr[], int size){
    int j;
    for(int i = 0; i < size; i++){
        j = i;
        while(j > 0 && arr[j-1] > arr[j]){
            swap(arr[j], arr[j-1]);
            j = j - 1;
        }

    }
}


// from gfg
void insertionSort(int arr[], int size){
    int j, key;
    for(int i = 1; i < size; i++){
        key = arr[i];
        j = i - 1;
        while (j >= 0 && arr[j] > key){
            arr[j + 1] = arr[j];
            j = j - 1;
        }
        arr[j + 1] = key;
    }
}
