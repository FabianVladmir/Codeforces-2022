#include <iostream>
#include <iosfwd>
#include <iomanip>
#include <cstdio>
#include <cstring>
#include <cstdlib>
#include <ctime>
#include <cmath>
#include <cassert>
#include <cctype>
#include <climits>
#include <vector>
#include <bitset>
#include <set>
#include <queue>
#include <math.h>
#include <stack>
#include <map>
#include <deque>
#include <string>
#include <list>
#include <iterator>
#include <sstream>
#include <complex>
#include <fstream>
#include <functional>
#include <numeric>
#include <utility>
#include <algorithm>
#include <assert.h>
#include <unordered_map>
#pragma GCC optimize ("-O3")
 
using namespace std;
 
#define watch(x) cout << (#x) << " = " << (x) << endl
#define PI double(2 * acos(0.0))
#define LL long long
#define MOD 1000000007
#define all(x) (x).begin(), (x).end()
#define INF 1e15
 
int main()  {
    ios_base::sync_with_stdio(0);
    cin.tie(0);cout.tie(0);
    int t;
    cin >> t;
    while(t--)	{
    	int n, k;
    	cin >> n >> k;
    	if(n == 4 && k == 3)	{
    		cout << -1 << "\n";
    		continue;
    	}
    	int v[n/2][2];
    	for(int i = 0; i < n/2; i++)	{
    		v[i][0] = i;
    		v[i][1] = n-i-1;
    	}
    	if(k == n-1)	{
    		swap(v[0][0], v[1][1]);
    		swap(v[1][1], v[2][1]);
    	} else {
    		if(k < n/2)	{
    			swap(v[0][0], v[k][0]);
    		} else {
    			k = n-k-1;
    			swap(v[0][0], v[k][1]);
    		}
    	}
    	for(int i = 0; i < n/2; i++)	{
    		cout << v[i][0] << " " << v[i][1] << "\n";
    	}
    }
    return 0;
}
 
 