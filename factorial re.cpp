#include <iostream>
using namespace std;

int factorial(int n){
  if(n==1){
    return 1;
  }

  int num = factorial(n-1);
  int nums = n*num;

  return nums;
}

int main() {
 int n;
 cin>>n;

 int ans= factorial(n);
 cout<<ans;
  return 0;
}