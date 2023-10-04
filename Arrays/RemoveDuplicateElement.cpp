/*
 Remove duplicate elements form an array and returns length of the string
*/


// With respect to first element compare to rest of elements in an array
// If next element(jth) is !=  compared elements then put the new elements to next ith position

int i =0;

int removeDuplicateElements( int n , vector<int> arr){
    for(int j= 1; j<n ; j++){
        if(a[j] != a[i]){
            a[i+1] = a[j];
            i++;
        }
    
    }
    return i+1;   // return length of unique array
}
