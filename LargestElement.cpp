// Find Largest Element in an array

int largestElement(vector<int> &arr, int n) {
    // Write your code here.
    int max=arr[0];
    // for (int i =0; i < n ;i++){
    //     if(max<arr[i]){
    //         max=arr[i];
    //     }
    // }
    int i=0;
    while(i<n){
        if(max<arr[i])
        max=arr[i];
        i++;
    }
   
    return max;


}
