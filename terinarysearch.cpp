#include<iostream>
using namespace std;
int terinarysearch(int arr[],int l,int r,int search){
      int mid1=l+(r-l)/3;
      int mid2=r-(r-l)/3;
      if(arr[mid1] == search){
      return mid1;
      }
  if(arr[mid2] == search){
      return mid2;
  }
  if(arr[mid1]<search){
  return mid1;
  }
  if()
}

int main(){

}
