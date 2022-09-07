#include <bits/stdc++.h>
using namespace std;

void solve(){

    int n, m, r, c;
    cin >> n >> m >> r >> c;
    int countBlack = 0;
    char colors[n][m];
    
    for (size_t i = 0; i < n; i++)
    {
        for (size_t j = 0; j < m; j++)
        {
            cin >> colors[i][j];
            if(colors[i][j] == 'B')
                countBlack++;
        }
        
    }

  
    if(countBlack == 0){
        cout << "-1" << endl;
    }

    else if (colors[r-1][c-1] == 'B')
    {   
        cout << "0" << endl;
    }

    else{
        
        bool band = true;
        int x, y;
        x = n;
        y = m;

        for (size_t i = 0; i < x; i++)
        {
            if(colors[i][c-1] == 'B'){
                cout << "1" << endl;
                return;
                // band = false;
            }                

        }
        
        for (size_t j = 0; j < y && band; j++)
        {
            if(colors[r-1][j] == 'B'){
                cout << "1" << endl;
                return;
                // band = false;
            }
        }

        if(band)
            cout << "2" << endl;      
        
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