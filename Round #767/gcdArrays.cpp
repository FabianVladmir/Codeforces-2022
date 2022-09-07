#include <bits/stdc++.h>
using namespace std;

void solve(){

    int l, r, k;
    cin >> l >> r >> k;

    if(l == r && l > 1)
        cout << "YES" << endl;
    
    else if(l == r  && l == 1 )
        cout << "NO" << endl;
    
    else{
        int min = r-l + 1;
        int pos = (r/2) - ceil((float)l/2) + 1;

        if(k >= min-pos)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
        
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