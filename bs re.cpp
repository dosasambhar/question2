#include <iostream>
#include <vector>
using namespace std;

int bs(vector<int>&v, int s, int e, int& target){
  if(s>e){
    return -1;
  }
  
  int mid = (s+e)/2;
  if(v[mid]==target){
    return mid;
  }

  if(v[mid]<target){
    return bs(v, mid+1, e, target);
  }

  else{
    return bs(v, s, mid-1, target);
  }
}

int main() {
  vector<int>v={10,20,30,40,50,60};
  int n = v.size();
  int e = n-1;
  int s =0;
  int target = 20;

 int ans = bs(v,s,e,target);
 cout<<ans;
  return 0;
}