#include <bits/stdc++.h>
using namespace std;

void solve(){

    int n, m;
    cin >> n >> m;
    
    int p = 50;
    int q = 21;
    vector<vector<int>> matrix(n, vector<int>(m));    

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            int x;
            cin >> x;
            matrix[i][j] = x;
        }
        
    }
    
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if(matrix[i][j]){
                helper(i,j,matrix);
            }
        }
        
    }

}

void helper(int i, int j, vector<vector<int>> &matrix){

    int n, m;
    n = matrix.size();
    m = matrix[0].size();
    if(i < 0 || j < 0 || i >= n || j>=m || !matrix[i][j])
        return;
    
    if(matrix[i+1][j]){
        matrix[i+1][j] = 0;
        helper(i+1,j,matrix);
    }

    if(matrix[i-1][j]){
        matrix[i-1][j] = 0;
        helper(i-1,j,matrix);
    }

    if(matrix[i][j+1]){
        matrix[i][j+1] = 0;
        helper(i,j+1,matrix);
    }

     if(matrix[i][j-1]){
        matrix[i][j-1] = 0;
        helper(i,j-1,matrix);
    }

}

int main(){

    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }
    


    return 0;
}