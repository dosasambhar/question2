#include <iostream>
#include<string>
using namespace std;

int main() {
 string s ="abcde";
 int n=s.length();
 for(int i =0; i<n; i++){
  for(int j=i; j<n; j++){
    string sub = s.substr(i, j-i+1); 
     cout << sub << endl;
  }
 }
  return 0;
}