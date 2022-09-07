#include <bits/stdc++.h>
using namespace std;


bool isPalindrome(string s){

    int left = 0;
    int right = s.size() - 1;
    while (left < right)
    {
        if(s[left++] != s[right--])
            return false;
    }
    
    return true;

}

void solve(){

    int n, k;
    cin >> n >> k;
    string s;
    cin >> s;
    
    if(k <= 1)
        cout << 1 << endl;
    
    else if(isPalindrome(s))
        cout << 1 << endl;
    else
        cout << 2 << endl;

}



int main(){

    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }
    
}