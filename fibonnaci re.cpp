#include <iostream>
using namespace std;

int print(int n ){
  if(n<=1){
    return n;
  }

  else 
  return print(n-1)+ print(n-2);
}

int main() {
 int n;
 cout<<"enter the number"<< endl;
 cin>>n;

for(int i=0; i<n; i++){
  int ans = print(i);
  cout<<ans<<",";
}
  return 0;
}