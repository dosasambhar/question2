#include <iostream>
#include <vector>
using namespace std;

bool check(vector<int>arr, int n, int i){
  if(i==n-1){
    return true;
  }

  if(arr[i+1]<arr[i]){
    return false;
  }

  return check(arr, n , i+1);
}
int main() {
  vector<int>arr{10,20,13,40,50};
  int n=arr.size();
  int i=0;

  cout<< check(arr, n, i);
  return 0;
}