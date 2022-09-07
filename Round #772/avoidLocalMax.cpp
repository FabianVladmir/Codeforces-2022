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

    int ans = 0;
    for (int i = 1; i < n-1; i++)
    {
        if(arr[i] > arr[i-1] && arr[i+1] < arr[i]){
            ans++;
            if(i+2 < n){
               arr[i+1] = max(arr[i], arr[i+2]);
            }             
            else{
                arr[i+1] = arr[i];            
            }
        }
    }
    
    cout << ans << endl;
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