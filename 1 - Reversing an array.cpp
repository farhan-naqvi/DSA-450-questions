#include <iostream>
using namespace std;

int main() {
	// your code goes here
	
	int A[] = {1,2,3,4,5,6,7,8,9,10,11};
	
	int n =  sizeof(A)/sizeof(int);
	
	// approch 1 : using new array (more space) , O(n)
// 	int arr[n], cnt=0;
// 	for(int i=n-1;i>=0;i--){
// 	    arr[cnt++]= A[i];
// 	}
	
// 	for(int i=0;i<=n-1;i++){
// 	    cout << arr[i] << " ";
// 	}

    // approch 2 : reversing elements in same array O(n)
    for(int i=0;i<n/2;i++){
        int temp = A[i];
        A[i] = A[n-1-i];
        A[n-1-i] = temp;
    }
    
    	for(int i=0;i<=n-1;i++){
	    cout << A[i] << " ";
	}
	
	
	
	return 0;
}
