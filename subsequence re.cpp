#include <iostream>
using namespace std;
void subsequence(string str, string ans, int i){
  if(i>=str.length()){
    cout<<ans<<endl;
    return;
  }

  //when excluded
  subsequence(str, ans, i+1);

  //when included
  ans.push_back(str[i]);
  subsequence(str, ans, i+1);
}

int main() {
  string str="abc";
  string ans="";

  int i =0;
  subsequence(str, ans, i);
  return 0;
}