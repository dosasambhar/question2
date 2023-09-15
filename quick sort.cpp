#include <iostream>
using namespace std;

int partition(int arr[], int s, int e){
  int pivotindex = s;
  int pivotelement = arr[s];

  int count = 0;
  for(int i=s+1; i<=e; i++){
    if(pivotelement>arr[i]){
      count++;
    }
  }

  swap(arr[pivotindex], arr[s+count]); // Swapping using indices
  pivotindex = s+count;

  int i= s;
  int j=e;

  while(i<pivotindex && j>pivotindex){
    while(arr[i]<pivotelement){
      i++;
    }

    while(arr[j]>pivotelement){
      j--;
    }

    if(i<=j){  // Corrected the condition
      swap(arr[i], arr[j]); // Swap when i<=j
    }
  }

  return pivotindex;
}

void quicksort(int arr[], int s, int e){
  if(s>=e){
    return;
  }

  int p = partition(arr, s, e);

  quicksort(arr, s, p-1);
  quicksort(arr,p+1,e);
}

int main() {
  int arr[] = {8,2,4,6,9,11,34,23,5};
  int n = 9;
  int s = 0;
  int e = n-1;

  quicksort(arr, s, e);

  for(int i=0; i<n; i++){
    cout << arr[i] << " ";
  }
  cout << endl;

  return 0;
}
