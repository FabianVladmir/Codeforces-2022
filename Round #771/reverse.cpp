#include <bits/stdc++.h>
using namespace std;

void solve(){

    int n;
    cin >> n;
    int arr[n];


    for (size_t i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    

    for (int i = 0, temp = 1; i < n; i++, temp++)
    {
        if(arr[i] == temp)
            sort(arr, arr+ (n-temp));
    }
    
    for (size_t i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    
    cout << endl;



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