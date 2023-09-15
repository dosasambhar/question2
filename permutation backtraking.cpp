#include <iostream>
using namespace std;
void permutation (string &str, int i){
  //base case
  if(i>=str.length()){
    cout<<str<<" ";
    return;
  }

  for(int j =i; j<str.length(); j++){
    swap(str[i], str[j]);

    //recursion 
    permutation(str, i+1);

    //backtracking
    swap(str[i], str[j]);
  }
}

int main() {
  string str = "abds";
  int i =0;
  permutation(str, i);
  cout<<endl;
  return 0;
}