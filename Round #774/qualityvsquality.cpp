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

    sort(arr,arr+n);
    
    
    int less = arr[0] + arr[1];
    int greater = arr[n-1];
    if(less >= greater){
        cout << "NO" << endl;
    }

    else if(greater > less)
        cout << "YES" << endl;

    else{
        int i = 2;
        int j = n-1;
        while(less > greater && arr[i] != arr[j] ){
            less+=arr[i++];
            greater+=arr[j--];
            
            if(greater > less){
                cout << "YES" << endl;
                break;
            }            
        }
        if(less > greater)
            cout << "NO" << endl;       
        
    }
}


int main(){

    int t;
    cin >> t;
    while(t--){
        solve();
    }

    return 0;
}


// #include <bits/stdc++.h>
// using namespace std;

// int main(){
// 	ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
// 	int t; cin >> t;
// 	for(int test_number = 0; test_number < t; test_number++){
// 		int n; cin >> n;
// 		vector <long long> a(n);
// 		for(int i = 0; i < n; i++){
// 			cin >> a[i];
// 		}
// 		sort(a.begin(), a.end());
// 		vector <long long> prefix_sums = {0};
// 		for(int i = 0; i < n; i++){
// 			prefix_sums.push_back(prefix_sums.back() + a[i]);
// 		}
// 		vector <long long> suffix_sums = {0};
// 		for(int i = n - 1; i >= 0; i--){
// 			suffix_sums.push_back(suffix_sums.back() + a[i]);
// 		}
// 		bool answer = false;
// 		for(int k = 1; k <= n; k++){
// 			if(2 * k + 1 <= n){
// 				long long blue_sum = prefix_sums[k + 1];
// 				long long red_sum = suffix_sums[k];
// 				if(blue_sum < red_sum){
// 					answer = true;
// 				}
// 			}
// 		}
// 		if(answer) cout << "YES\n";
// 		else cout << "NO\n";
// 	}
// 	return 0;
// }