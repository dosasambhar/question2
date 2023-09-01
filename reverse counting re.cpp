#include <iostream>
using namespace std;

int print(int n){
  if(n==0){
    return false ;
  }

  cout<<n;

  int ans= print (n-1);
  return ans;
}

int main() {
 int n;
 cin>>n;

 int result= print(n);
 cout<<result;
  return 0;
}