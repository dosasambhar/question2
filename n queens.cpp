#include <iostream>
#include <vector>
using namespace std;

bool isSafe(int row, int col, vector<vector<int>> &board, int n) {
    int i = row;
    int j = col;

    // left row (i, j-1), (j, j-2)
    while (j >= 0) {
        if (board[i][j] == 1) {
            return false;
        }
        j--;
    }

    i = row;
    j = col;

    // upper diagnol (i-1,j-1), (i-2, j-2)
    while (i >= 0 && j >= 0) {
        if (board[i][j] == 1) {
            return false;
        }
        i--;
        j--;
    }

    i = row;
    j = col;

    // lower diagnol (i+1, j-1), (i+2, j-2)
    while (i < n && j >= 0) {
        if (board[i][j] == 1) {
            return false;
        }
        i++;
        j--;
    }

    return true;
}


void print( vector<vector<int>> &board, int n){
  for(int i=0; i<n; i++){
    for(int j =0; j<n; j++){
      cout << board[i][j]<<" ";
    }
    cout<<endl;
  }
  cout<<endl<<endl;
}

void solve(vector<vector<int>> &board, int col, int n) {
    // base case
    if (col >= n) {
        print(board, n);
        return;
    }

    // recursion -- pehle col ke har row pe Q1 rakhke check karna
    for (int row = 0; row < n; row++) {
        if (isSafe(row, col, board, n)) {
            board[row][col] = 1;
            solve(board, col + 1, n);
            // backtracking
            board[row][col] = 0;
        }
    }
}

int main() {
  int n =4;
  vector<vector<int>> board (n , vector<int>(n,0));
  int col =0;

  solve (board, col , n);
  
  return 0;
}