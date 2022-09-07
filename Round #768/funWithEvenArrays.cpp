#include <bits/stdc++.h>
using namespace std;

void solve(){

    int n;
    cin >> n;
    int countDifferentNum = 0;
    vector<int> nums(n);

    for (size_t i = 0; i < n; i++)
    {
        cin >> nums[i];
    }
    
    for (size_t i = 1; i < n; i++)
    {
        if(nums[i-1] != nums[i]){
            countDifferentNum++;
            i++;
        }
    }

    if(countDifferentNum == 0 || countDifferentNum == 1)
        cout << countDifferentNum << endl;

    else{
        int ans = floor(countDifferentNum/2) + 1;
        cout << ans << endl;
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

// using namespace __gnu_pbds;
// template<class T>
// using ordered_set = tree<T, null_type, less<T>, rb_tree_tag, tree_order_statistics_node_update> ;
 
// template<class key, class value, class cmp = std::less<key>>
// using ordered_map = tree<key, value, cmp, rb_tree_tag, tree_order_statistics_node_update>;
// find_by_order(k)  returns iterator to kth element starting from 0;
// order_of_key(k) returns count of elements strictly smaller than k;
 
// #define DIVYA ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
// #define ll long long
// #define umap unordered_map
// #define uset unordered_set
// #define lb lower_bound
// #define ub upper_bound
// #define fo(i,a,b) for(i=a;i<=b;i++)
// #define all(v) (v).begin(),(v).end()
// #define all1(v) (v).begin()+1,(v).end()
// #define allr(v) (v).rbegin(),(v).rend()
// #define allr1(v) (v).rbegin()+1,(v).rend()
// #define sort0(v) sort(all(v))
// typedef pair<int, int> pii;
// typedef vector<int> vi;
// typedef vector<ll> vll;
// typedef pair<ll, ll> pll;
// #define sz(x) (ll)x.size()
// #define pb push_back
// #define ppb pop_back
// #define mkp make_pair
// #define inf 1000000000000000005
// const ll mod = 1e9 + 7;
 
// ll inv(ll i) {if (i == 1) return 1; return (mod - ((mod / i) * inv(mod % i)) % mod) % mod;}
 
// ll mod_mul(ll a, ll b) {a = a % mod; b = b % mod; return (((a * b) % mod) + mod) % mod;}
 
// ll mod_add(ll a, ll b) {a = a % mod; b = b % mod; return (((a + b) % mod) + mod) % mod;}
 
// ll gcd(ll a, ll b) { if (b == 0) return a; return gcd(b, a % b);}
 
// ll ceil_div(ll a, ll b) {return a % b == 0 ? a / b : a / b + 1;}
 
// ll pwr(ll a, ll b) {a %= mod; ll res = 1; while (b > 0) {if (b & 1) res = res * a % mod; a = a * a % mod; b >>= 1;} return res;}
//****************************Template Ends*******************************//

// int main() {
//     DIVYA;
// #ifndef ONLINE_JUDGE
//     freopen("input.txt" , "r" , stdin);
//     freopen("output.txt", "w", stdout);
// #endif
//     ll t, n, i, j, ans, temp, sum;
//     string sans;
//     t = 1;
//     cin >> t;
//     while (t--)
//     {
//         sans = "NO";
//         ans = temp = sum = 0;
//         cin >> n;
//         vll a(n + 1, 0);
//         fo(i, 1, n)
//         {
//             cin >> a[i];
//         }
//         ll i = n - 1;
//         while (i > 0)
//         {
//             if (a[i] == a[n])
//             {
//                 i--;
//             }
//             else
//             {
//                 ans++;
//                 i -= (n - i);
//                 // all elements from n-i+1 to n become equal to a[n]
//             }
//         }
//         cout << ans << "\n";
//     }
//     return 0;
// }
 