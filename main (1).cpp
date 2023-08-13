#include <iostream>
#include <vector>
using namespace std;

int bs(vector<int>arr){
  int s=0;
  int e=arr.size()-1;

  while(s<=e){
    int mid = (s+e)/2;
    if(s==e){
      return s;
    }
    if(mid%2 ==0){
      if(arr[mid]==arr[mid+1]){
        s=mid+2;
      }
      else{
        e=mid;
      }
    }
    else{
      if(arr[mid]==arr[mid-1]){
        s=mid+1;
      }
      else{
        e=mid-1;
      }
    }
  }
   return -1;
}

  int main(){
    vector<int>arr{1,1,2,2,3,3,4,4,3,6,6,4,4,8,8};
    int ans = bs(arr);
    cout<<ans<<endl;
  }
