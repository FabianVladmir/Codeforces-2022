#include <bits/stdc++.h>
using namespace std;

void solve(){

    int n;
    cin >> n;
    vector<int> a(n),b(n);

    for (size_t i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    for (size_t i = 0; i < n; i++)
    {
        cin >> b[i];
    }

    for (size_t i = 0; i < n; i++)
    {
        if(b[i] > a[i])
            swap(b[i], a[i]);
        

    }

    // for (size_t i = 0; i < n; i++)
    // {
    //     cout << a[i] << " ";
    // }
    // cout << endl;
    // for (size_t i = 0; i < n; i++)
    // {
    //     cout << b[i] << " ";
    // }
    // cout << endl;
    


    int maxx = *max_element(a.begin(),a.end());
    int minn = *max_element(b.begin(),b.end());

    cout << maxx * minn << endl; 

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