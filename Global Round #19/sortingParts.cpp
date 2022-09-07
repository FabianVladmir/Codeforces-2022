#include <bits/stdc++.h>
using namespace std;

void solve(){

    // int n;
    // cin >> n;
    // vector<int> arr(n);
    // for (size_t i = 0; i < n; i++)
    // {
    //     cin >> arr[i];
    // }

    // if(arr[0] >= arr[n-1])
    //     cout << "YES" << endl;

    // else if (n == 0 || n == 1)
    //     cout << "YES" << endl;

    // else{

    //     vector<int> temp(arr);
    //     sort(temp.begin(), temp.end());

    //     if(temp == arr)
    //         cout << "NO" << endl;
        
    //     else
    //         cout << "YES" << endl;

    // }

    int n;
    cin >> n;
    vector<int> a(n);
    for (auto& u : a)
        cin >> u;
    if (!is_sorted(a.begin(), a.end()))
        cout << "YES\n";
    else
        cout << "NO\n";


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