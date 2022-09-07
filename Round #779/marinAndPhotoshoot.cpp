#include <bits/stdc++.h>
using namespace std;

void solve(){
    int n;
    cin >> n;
    string s;
    cin >> s;

    string temp = "";
    int ans = 0;
    // int totalOnes = count(s.begin(), s.end(),'1');
    // int totalZeros = count(s.begin(),s.end(),'0');

    // cout << totalOnes << " " << totalZeros << endl;
    int index = 3;
    for (size_t i = 0; i <= n - 2; i++)
    {
        temp = s.substr(i,index);

        if(temp == "000"){
            ans+=4;
            
            i = index;
            index+=2;
        }
        else if(temp == "001" || "100"){
            ans+=2;
            
            i = index;
            index+=2;
        }
        else if(temp == "101"){
            ans++;
            
            i = index;
            index+=2;
        }
        else{
            index++;
        }
        cout << temp << endl;
        temp.clear();
        
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


// #include <bits/stdc++.h>
// using namespace std;
 
// const int N = 2e5 + 5;
 
// int n;
// string s;
// vector<int> v;
 
// void solve() {
//     v.clear();
//     cin >> n >> s;
//     int ans = 0;
//     for (int i = 0; i < n; ++i) {
//         if (s[i] == '0') v.push_back(i);
//     }
//     for (int i = 0; i < (int)v.size() - 1; ++i) {
//         if (v[i + 1] - v[i] <= 2) ans += 2 - (v[i + 1] - v[i]) + 1;
//     }
//     cout << ans << '\n';
// }
 
// int main() {
//     ios_base::sync_with_stdio(false);
//     cin.tie(NULL);
//     int t; cin >> t;
//     while (t--) solve();
// }