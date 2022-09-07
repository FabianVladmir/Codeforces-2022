#include <bits/stdc++.h>

using namespace std;

void solve(){

    int n;
    cin >> n;
    string s;
    cin >> s;

    string name = "Timur";


    if(n != name.size()){
        cout << "NO" << endl;
    }

    else{
        sort(name.begin(), name.end());
        sort(s.begin(), s.end());
        if(s == name)
            cout << "YES" << endl;
        
        else{
            cout << "NO" << endl;
        }

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