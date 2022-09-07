#include <bits/stdc++.h>
using namespace std;

void solve(){

    int R, C;
    cin >> R >> C;

    R = 2*R + 1;
    C = 2*C + 1;

    vector<vector<char>> ans (R , vector<char> (C,'.'));

    for (size_t i = 0; i < R; i++)
    {
        if(i % 2 == 0){
            for (size_t j = 0; j < C; j++)
            {
                if(j%2 != 0)
                    ans[i][j] = '-';
                else
                    ans[i][j] = '+';
            }
            
        }
        else{
            for (size_t j = 0; j < C; j++)
            {
                if(j%2 != 0)
                    ans[i][j] = '.';
                else
                    ans[i][j] = '|';
            }
            
        }
    }
    
    ans[0][0] = '.';
    ans[0][1] = '.';
    ans[1][0] = '.';
    ans[1][1] = '.';

    for (size_t i = 0; i < R; i++)
    {
        for (size_t j = 0; j < C; j++)
        {
            cout << ans[i][j];
        }
        cout << endl;
        
    }
}

int main(){

    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
    int num_case = 1;
    int t;
    cin >> t;
    while (t--)
    {
        cout << "Case #" << num_case++ << ":" << endl;
        solve();

    }
    return 0;
}