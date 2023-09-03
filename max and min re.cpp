#include <iostream>
#include <limits.h>
using namespace std;

void printmax (int arr[], int n, int i, int& maxi){
  if(i>=n){
    return;
  }

  if(arr[i]>maxi){
    maxi=arr[i];
  }

  printmax(arr, n, i+1, maxi);
}

void printmin (int arr[], int n, int i, int& mini){
  if(i>=n){
    return;
  }

  if(arr[i]<mini){
    mini = arr[i];
  }

  printmin(arr,n,i+1,mini);
}

int main() {
  int arr[]={15,3,4,5,66,7,4,8};
  int n=8;
  int i =0;
  int maxi = INT_MIN;
  int mini = INT_MAX;

  printmax(arr, n, i, maxi);
  printmin(arr, n, i, mini);
  cout<<maxi<<endl;
  cout<<mini;
  return 0;
}