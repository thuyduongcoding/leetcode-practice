class Solution {
public:
    vector<vector<int>> updateMatrix(vector<vector<int>>& mat) {
        int rows = mat.size();
        int cols = mat[0].size();
        vector<vector<int>> ans(rows, vector<int>(cols, -1)); // Create the distance matrix
        queue<pair<int,int>> queue;

        vector<int> row_dirs = {0, 0, -1, 1}; // left, right, above, below
        vector<int> col_dirs = {-1, 1, 0, 0}; 

        for (int i = 0; i < rows; i++) {
            for (int j = 0; j < cols; j++) {
                if (mat[i][j] == 0) {
                    ans[i][j] = 0;
                    queue.emplace(i, j);
                }
            }
        }


        while(!queue.empty()) {
            pair<int,int> curr = queue.front();
            queue.pop();

            for (int i = 0; i < 4; i++) {
                int next_row = curr.first + row_dirs[i];
                int next_col = curr.second + col_dirs[i];

                if (next_row >= 0 && next_row < rows && next_col >= 0 && next_col < cols && ans[next_row][next_col] == -1) {
                    ans[next_row][next_col] = ans[curr.first][curr.second] + 1;
                    queue.emplace(next_row, next_col);
                }
            }
        }
        return ans;
    }
};