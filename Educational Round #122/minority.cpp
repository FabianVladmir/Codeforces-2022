#include <bits/stdc++.h>
using namespace std;

void solve(){

    string s;
    cin >> s;
    int n = s.size();
    int zero = 0;
    for(int i = 0; i < n; i++)	{
        if(s[i] == '0')	{
            zero++;
        }
    }
    int one = n - zero;
    if(one == zero)	{
        if(s[0] == '0')	{
            zero--;
        } else {
            one--;
        }
        cout << min(one, zero) << "\n";
    } else {
        cout << min(one, zero) << "\n";
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