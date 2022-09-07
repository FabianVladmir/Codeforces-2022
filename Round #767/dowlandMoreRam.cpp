#include <bits/stdc++.h>
using namespace std;

void solve(){

    int n, k;
    cin >> n >> k;
    bool band = false;
    vector<int> a(n);
    vector<int> b(n);

    for (size_t i = 0; i < 2; i++)
    {
        for (size_t j = 0; j < n; j++)
        {
            if(i==0){
                cin >> a[j];
                if(a[j] <= k)
                    band = true;
            }
                
            else
                cin >> b[j];
        }
        
    }
    
    vector<pair<int,int>> vt;

    for (size_t i = 0; i < n; i++)
    {
        vt.push_back(make_pair(a[i],b[i]));
    }
    
    sort(vt.begin(),vt.end());

    for (size_t i = 0; i < n && band; i++)
    {
        if(vt[i].first > k)
            break;
        else
            k+=vt[i].second;
    }
    
    cout << k << endl;

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