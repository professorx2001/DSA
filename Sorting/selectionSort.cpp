//Leftmost position is the smallest after each round

void sort(int arr[], int size){
    for(int i = 0; i < size - 1; i++){
        int minIndex = i;
        for(int j = i + 1; j < size; j++){
            if(arr[j]<arr[minIndex])
            minIndex = j;
        }
        swap(arr[i],arr[minIndex]);
    }
}






// Example 64 25 12 22 11
//         11 25 12 22 64
//         11 12 25 22 64
//         11 12 22 25 64
//         11 12 22 25 64
//         last element already apne position p aa jayega so loop in size - 1;
