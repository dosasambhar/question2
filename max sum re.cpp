#include <iostream>
#include <vector>
#include <limits.h>

void solve(vector<int> arr, int i, int &maxi, int sum) { 
  // base case
  if (i >= arr.size()) {
    maxi = max(maxi, sum);
    return ;
  }

  // include
  solve(arr, i + 2, maxi, sum + arr[i]);

  // exclude
  solve(arr, i + 1, maxi, sum);
}

int main() {
  vector<int> arr{2, 1, 4, 9};
  int maxi = INT_MIN;
  int sum = 0;
  int i = 0;

  solve(arr, i, maxi, sum);
  cout << maxi;

  return 0;
}
