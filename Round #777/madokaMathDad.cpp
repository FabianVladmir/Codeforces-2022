#include <bits/stdc++.h>
using namespace std;

void solve(){

    int n;
    cin >> n;

    if ( n < 3 && n > 0){
        cout << n << endl;
        return;
    }

    int total = 0;
    string ans = "";

    if(n % 3 == 0){
        int temp = n / 3;
        while(temp--){
            ans.push_back('2');
            ans.push_back('1');
        }
        cout << ans << endl;
        return;
    }

    if((n%3) == 1 ){
        ans.push_back('1');
        ans.push_back('2');
        ans.push_back('1');        
        int temp = n/3 - 1;
        while (temp--)
        {
            ans.push_back('2');
            ans.push_back('1');
        }
        cout << ans << endl;
        return;
    }

    if(n%3 > 1){
        ans.push_back('2');
        int temp = n/3;
        while (temp--)
        {
            ans.push_back('1');
            ans.push_back('2');
        }
        cout << ans << endl;
        return;
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