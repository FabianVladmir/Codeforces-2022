#include <bits/stdc++.h>
using namespace std;

void solve(){

    int a,b;
    cin >> a >> b;

    if(a>0){
        int ans = b*2 + a + 1;
        cout << ans << endl;
    }
    else if(a==0){
        cout << 1 << endl;
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