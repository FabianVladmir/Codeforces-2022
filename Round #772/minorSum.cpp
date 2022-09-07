#include <bits/stdc++.h>
using namespace std;

void solve(){

    int n;
    cin >> n;
    int arr[n];
    int ans = 0;
    for (size_t i = 0; i < n; i++)
    {
        cin >> arr[i];
        ans|=arr[i];

    }
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