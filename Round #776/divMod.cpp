#include <bits/stdc++.h>
using namespace std;

void solve(){

    long long l, r, a;
    cin >> l >> r >> a;
    int ans = 0;
    if(r % a == 0){
        r--;
        ans = floor(r/a) + (r % a);
        cout << ans << endl;
    }

    else{

        int temp = floor((r-1)/a) + ((r-1) % a);
        ans = floor(r/a) + (r % a);
        cout << max(ans,temp) << endl;

    }  

    // if(a-1 < r && a-1 > l)
    //     cout << a-1 << endl;

    // else{

    //     if (r % a == 0)
    //     {
    //         r--;
    //     }
    //     int ans = floor(r/a) + (r % a);

    //     cout << ans << endl;


    // }

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