#include <iostream>
#include <vector>

using namespace std;

bool safe(int x, int y, int row, int col, vector<vector<bool>> visited, int arr[3][3]) {
    if (x >= 0 && x < row && y >= 0 && y < col &&
        !visited[x][y] && arr[x][y] == 1) {
        return true;
    }
    return false;
}

void Solvemaze(int x, int y, int row, int col, int arr[3][3], vector<vector<bool>> visited, vector<string>& path, string output) {
    if (x == row - 1 && y == col - 1) {
        path.push_back(output);
        return;
    }

    if (safe(x - 1, y, row, col, visited, arr)) {
        visited[x - 1][y] = true;
        Solvemaze(x - 1, y, row, col, arr, visited, path, output + 'U');
        visited[x - 1][y] = false;
    }

    if (safe(x + 1, y, row, col, visited, arr)) {
        visited[x + 1][y] = true;
        Solvemaze(x + 1, y, row, col, arr, visited, path, output + 'D');
        visited[x + 1][y] = false;
    }

    if (safe(x, y + 1, row, col, visited, arr)) {
        visited[x][y + 1] = true;
        Solvemaze(x, y + 1, row, col, arr, visited, path, output + 'R');
        visited[x][y + 1] = false;
    }

    if (safe(x, y - 1, row, col, visited, arr)) {
        visited[x][y - 1] = true;
        Solvemaze(x, y - 1, row, col, arr, visited, path, output + 'L');
        visited[x][y - 1] = false;
    }
}

int main() {
    int maze[3][3] = {{1, 0, 0}, {1, 1, 0}, {1, 1, 1}};
    int row = 3;
    int col = 3;

    if (maze[0][0] == 0) {
        cout << "no path";
        return 0;
    }

    vector<vector<bool>> visited(row, vector<bool>(col, false));
    visited[0][0] = true;

    vector<string> path;
    string output = "";

    Solvemaze(0, 0, row, col, maze, visited, path, output);

    for (auto i : path) {
        cout << i << endl;
    }

    return 0;
}
