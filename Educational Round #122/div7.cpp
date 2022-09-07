#include <bits/stdc++.h>
using namespace std;

void solve(){

    int n;
    cin >> n;

    if(n % 7 == 0)
        cout << n << endl;   
    
    else{
       int n;
    	cin >> n;
    	int abc = n/10 * 10;
    	if(n%7 == 0)	{
    		cout << n << "\n";
    	} else 
    	for(int i = 0; i < 10; i++)	{
    		if((abc+i) % 7 == 0 && (abc+i) != 0)	{
    			cout << abc+i << "\n";
    			break;
    		}
    	}
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