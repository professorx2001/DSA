int binarySearch(int arr[], int size, int key){
    int start = 0;
    int end = size - 1;
    int mid = start + (end - start)/2; //adding start + end may go out of INT_MAX
  
    while(start<=end){
        //return index when found
        if(arr[mid]==key)
        return mid;
        //goto right part
        else if(key > arr[mid])
        start = mid + 1;
        //goto left part
        else
        end = mid - 1;
        
        //update mid
        mid = start + (end - start)/2;
    }
    return -1;
}
