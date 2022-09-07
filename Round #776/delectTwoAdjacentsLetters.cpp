#include <bits/stdc++.h>
using namespace std;

void solve(){

    string s;
    cin >> s;
    char c;
    cin >> c;

    size_t found = s.find(c);

    if(found == string::npos){
        cout << "NO" << endl;
    }
    else{
        
        for (size_t i = 0; i < s.size(); i++)
        {
            if(c == s[i] && (i+1) % 2 != 0){
                cout << "YES" << endl;
                break;
            }
            if(i == s.size() - 1  && c != s[i]){
                cout << "NO" << endl;
                break;
            }    
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