#include <iostream>
#include<bits/stdc++.h> 
using namespace std;

int main() {
	// your code goes here
	
	int A[] = {1,2,3,4,5};
	
	
	// Finding minimum element 
	int min = INT_MAX;
	
	int n = sizeof(A)/sizeof(int);
	for(int i=0;i<n;i++){
	    if(A[i]<min){
	        min = A[i];
	    }
	}
	
	cout << min <<endl;
	
	// Finding maximum element 
	int max = INT_MIN;
	
	for(int i=0;i<n;i++){
	    if(A[i]>max){
	        max=A[i];
	    }
	}
	
	cout << max <<endl;
	
	return 0;
}
