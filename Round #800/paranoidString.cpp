# include <bits/stdc++.h>
using namespace std;

int t, n;
string S;
long long ans;

int main(){
	ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);

	cin >> t;
	while (t --){
		cin >> n >> S;
		for (int i = 0; i < n; i++){
            ans++;
			if (S[i] != S[i - 1])
				ans += i;
        }
		cout << ans << '\n';
	}

	return 0;
}