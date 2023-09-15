#include <iostream>
using namespace std;

void merge(int* arr, int s, int e){
  int mid=(s+e)/2;
  int len1 = mid-s+1;
  int len2 = e-mid;
  
  int* left = new int [len1];
  int* right = new int [len2];
  
  int k =s;
  for(int i =0; i<len1; i++){
    left[i]=arr[k];
    k++;
  }
  
  k =mid+1;
   for(int i =0; i<len2; i++){
    right[i]=arr[k];
    k++;
  }
  
  int leftindex =0;
  int rightindex =0;
  int mainindex= s;
  
  while(leftindex<len1 && rightindex<len2){
    if(left[leftindex]<right[rightindex]){
      arr[mainindex]=left[leftindex];
      leftindex++;
     mainindex++;
    }
    else{
       arr[mainindex]=right[rightindex];
        mainindex++;
    rightindex++;
    }
  }
  
  while(leftindex<len1){
     arr[mainindex]=left[leftindex];
     leftindex++;
     mainindex++;
  }
  while(rightindex<len2){
    arr[mainindex]=right[rightindex];
    mainindex++;
    rightindex++;
  }
}

void mergesort(int*arr, int s, int e){
  int mid = (s+e)/2;
  //base case
  if(s>=e){
    return;
  }
  
  //left side
  mergesort(arr, s, mid);
  
  //right
  mergesort(arr, mid+1, e);
  
  //merge
  
  merge(arr, s, e);
}


int main() 
{
  int arr[]={10,2,4,3,7,5,9,8,1};
  int n = 9;
  int s=0;
  int e=n-1;
    
    mergesort(arr, s, e);
    return 0;
}