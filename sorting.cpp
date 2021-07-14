#include <bits/stdc++.h>
using namespace std;
void merge(int a[],int low,int mid,int high){
    int left=mid-low+1;
    int right=high-mid;
    int k[left],k1[right];
    for(int i=0;i<left;i++){
        k[i]=a[low+i];
    }
    for(int i=0;i<right;i++){
        k1[i]=a[mid+1+i];
    }
    int m=low,i=0,j=0;
    while(i<left && j<right){
        if(k[i]<=k1[j]){
            a[m]=k[i];
            i++;
            
        }else{
            a[m]=k1[j];
            j++;
        }
        m++;
    }
    while(i<left){
        a[m]=k[i];
        i++;
        m++;
    }
    while(j<right){
        a[m]=k1[j];
        j++;
        m++;
    }
    
}
void mergeSort(int a[],int low,int high){
    if(low<high){
        int mid=(low+high)/2;
        mergeSort(a,low,mid);
        mergeSort(a,mid+1,high);
         merge(a,low,mid,high);
    }
}
int partition(int a[], int low,int high){
    int pivot=a[high];
    int i=low;
    for(int j=low;j<high;j++){
        if(a[j]<pivot){
            swap(a[j],a[i++]);
        }
    }
    swap(a[i],a[high]);
    return i;
}

void quickSort(int a[],int low,int high){
    if(low<high){
        int pivot=partition(a,low,high);
        quickSort(a,low,pivot-1);
        quickSort(a,pivot+1,high);
    }
}

int main() {
	// your code goes here
	int a[10]={4,6,2,8,3,7,1,9,5,2};
	int n=10;
//Bubble Sort
// 	for(int i=0;i<n-1;i++){
// 	    for(int j=0;j<n-i-1;j++){
// 	        if(a[j]>a[j+1]){
// 	            swap(a[j],a[j+1]);
// 	        }
// 	    }
// 	}

//selection Sort
// for(int i=0;i<n;i++){
//     int min=i;
//     for(int j=i+1;j<n;j++){
//         if(a[j]<a[min]){
//             min=j;
//         }
//     }
//     swap(a[i],a[min]);
// }

//insertion Sort
// for(int i=1;i<n;i++){
//     int key=a[i];
//     int j=i-1;
//     while(j>=0 && key<a[j]){
//         a[j+1]=a[j];
//         j--;
//     }
//     a[j+1]=key;
// }

// mergeSort(a,0,9);
// quickSort(a,0,9);

	for(int i=0;i<n;i++){
	    cout<<a[i]<<" ";
	}
	return 0;
}
