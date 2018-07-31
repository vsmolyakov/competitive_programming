class Solution {
public:
    int numIslands(vector<vector<char>>& grid) {
        
        result = 0;
        if (grid.size() == 0 || grid[0].size() == 0) {return 0;}
        num_rows = grid.size(); num_cols = grid[0].size();
        
        for (int i = 0; i < num_rows; ++i)
        {
            for (int j = 0; j < num_cols; ++j)
            {
                if (grid[i][j] == '1')
                {
                    result++;
                    DFS(grid, i, j);
                }
            }
        }
        return result;        
    }

private:
    int result;
    int num_rows, num_cols;

    void DFS(vector<vector<char>>& grid, int i, int j)
    {
        grid[i][j] = '0';

        if (i > 0 && grid[i-1][j] == '1') 
        {
            DFS(grid, i-1, j);
        }
        if (i < num_rows - 1 && grid[i+1][j] == '1')
        {
            DFS(grid, i+1, j);
        }
        if (j > 0 && grid[i][j-1] == '1')
        {
            DFS(grid, i, j-1);
        }
        if (j < num_cols - 1 && grid[i][j+1] == '1')
        {
            DFS(grid, i, j+1);
        }
    }

};
