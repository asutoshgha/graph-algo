#include <iostream>
using namespace std;
/*
timecomplexity -O(n*(n+log(n))
stable algo
online algo
no of comparisions max-log(n)
*/
int binarysearch(int arr[],int item,int low,int high){
    while(low<=high){
        int mid=(low+high)/2;
        
        if(arr[mid] == item)
        return mid;
        else if(arr[mid]>item){
            high=mid-1;
        }
        else{
            low=mid+1;
        }
    }
    return low;
}
void insertionsort(int arr[],int n){
    int j;
    for(int i=1;i<n;i++){
        int key=arr[i];
        j=i-1;
        
        int loc=binarysearch(arr,key,0,j);
        while(j>=loc){
            arr[j+1]=arr[j];
            j--;
        }
        arr[j+1]=key;
    }
}
int main() {
	// your code goes here
	int n;
	cin>>n;
	int arr[n];
	for(int i=0;i<n;i++){
	    cin>>arr[i];
	}
	insertionsort(arr,n);
	for(int i=0;i<n;i++){
	    cout<<arr[i]<<" ";
	}
	return 0;
}
