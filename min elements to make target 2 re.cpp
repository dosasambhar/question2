#include <iostream>
#include <vector>
#include <limits.h>
using namespace std;

int solve(vector<int>& v, int target, vector<int>& output) {
  // base case
  if (target == 0) {
    return output.size();
  }

  if (target < 0 || output.size() >= target) {
    return INT_MAX;
  }

  int mini = INT_MAX;
  for (int i = 0; i < v.size(); i++) {
    output.push_back(v[i]);
    int ans = solve(v, target - v[i], output);
    output.pop_back(); 

    if (ans != INT_MAX) {
      mini = min(mini, ans);
    }
  }
  return mini;
}

int main() {
  vector<int> v{1, 2, 3};
  int target = 5;
  vector<int> output;
  int result = solve(v, target, output);
  if (result == INT_MAX) {
    cout << "No combination found" << endl;
  } else {
    cout << result << " elements needed" << endl;
  }
  return 0;
}
