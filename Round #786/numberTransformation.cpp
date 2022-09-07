#include <bits/stdc++.h>
using namespace std;

void solve(){

    int x,y;
    cin >> x >> y;
    int a = 0, b = 0;
    
    if(x > y || y % x != 0){
        cout << a << " " << b << endl;
    }
    else{
        a = 1;
        b = floor(y/x);
        cout << a << " "<< b << endl;
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