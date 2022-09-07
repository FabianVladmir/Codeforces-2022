#include <bits/stdc++.h>
using namespace std;
#define size_dictionary 25

void solve(){

    string s;
    cin >> s;
    int ans = 0;
    ans+=(s[0] - 'a') * size_dictionary;
    ans+=(s[1] - 'a') + 1;

    if(s[1] > s[0])
        ans--;

    cout << ans << endl;

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