/*
Check array is sorted or not
*/

//Approach : Compare each element to its adjacent elements


Code 1:
int isSortedArray(int n , vector<int> a){
    for (int i =1 ;i<n;i++){
        if( a[i] >= a[i-1]){

        } else{
            return false;
        }
    }
    return true;
}


Code 2:
int isSortedArray(int n , vector<int> a){
   for ( int i =1 ; i<n;i++){
        if(a[i-1]>a[i])
            {
              return false ;  
            }
         
    }
    return true;
}

