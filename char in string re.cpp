#include <iostream>
using namespace std;

bool check(string str, int n, int i, char key){
  if(i>=n){
    return false ;
  }
  if(str[i]==key){
     return true;
  }
  return check(str, n, i+1, key);
}
int main() {
 string str="lovebabbar";
 char key = 'h';
 int n = str.length();
 int i =0;
 
  cout<< check(str, n, i, key);
}