#include <iostream>
using namespace std;

void heapify(int a[],int n,int i){
    int largest=i;
    int left=2*i+1;
    int right=2*i+2;
    if(left<n && a[left]>a[largest]){
        largest=left;
    }
    if(right<n && a[right]>a[largest]){
        largest=right;
    }
    if(i!=largest){
        swap(a[largest],a[i]);
        heapify(a,n,largest);
    }
}


void heapSort(int a[],int size){
    for(int i=size/2-1;i>=0;i--){
        heapify(a,size,i);
    }
    for(int i=size-1;i>=0;i--){
    swap(a[0],a[i]);
    heapify(a,i,0);
    }
    
}

int main() {
	// your code goes here
	int a[10]={4,6,2,8,3,7,1,9,5,2};
	heapSort(a,10);
	
	for(int i=0;i<10;i++){
	    cout<<a[i]<<" ";
	}
	return 0;
}
