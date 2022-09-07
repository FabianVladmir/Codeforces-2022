#include <bits/stdc++.h>
using namespace std;

void solve(){

    int n;
    cin >> n;
    
    string cad;
    cin >> cad;
    
    // int n = cad.size();
    if(n == 1)
        cout << "YES" << endl;

    else if (cad == "10")
        cout << "YES" << endl;

    else if (cad == "01")
        cout << "YES" << endl; 

    else
        cout << "NO" << endl;

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