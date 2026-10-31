
class Solution {
public:
    int findCircleNum(vector<vector<int>>& isConnected) {
        ROWS = isConnected.size();
        vector<bool> visited(ROWS, false);
        num_provinces = 0;
        for (int i = 0; i < ROWS; ++i) {
            if (!visited[i]) {
                dfs(i, isConnected, visited, ROWS);
                ++num_provinces;
            }

        }
        return num_provinces;
        

    }
private:
    int ROWS;
    int num_provinces;
    void dfs(int node, vector<vector<int>>& isConnected, vector<bool>&visited, int n) {
        visited[node] = true;
        for (int nei = 0; nei < n; ++nei) {
            if (isConnected[node][nei] == 1 & !visited[nei]) {
                dfs(nei, isConnected, visited, n);
            }
        }


    }
};
