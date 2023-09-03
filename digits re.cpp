#include <iostream>
using namespace std;

void digit(int n){
  if(n==0){
    return;
  }
  digit(n/10);
  int num = n%10;
  cout<< num<<" ";
}

int main() {
  int n = 23467;
 digit(n);
  return 0;
}