#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int A[] = {1,20,10,32,11,43,34,56};
	
	int n = sizeof(A)/sizeof(int);
	
	// sort the array (use any sorting algorithm)
	for(int i=0;i<n-1;i++){
	    for(int j=0;j<n-i-1;j++){
	        if(A[j]>A[j+1]){
	            int temp = A[j];
	            A[j]=A[j+1];
	            A[j+1]=temp;
	        }
	    }
	}
	
	int index;
	cin >> index;
	
	cout << A[index-1]<<endl;
	
	return 0;
}
