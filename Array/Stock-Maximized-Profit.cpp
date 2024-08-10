
// https://leetcode.com/problems/best-time-to-buy-and-sell-stock/description/

#include <bits/stdc++.h>
using namespace std;

#define ll long long int

#define NEED_FOR_SPEED ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

int maxProfit(vector<int>& v){

    int mn = INT_MAX, mx = INT_MIN;
    int ans = 0;
    for(int i = 0; i < v.size(); i++){

        if(mn > v[i]){
            
            mn = v[i];
            continue;
        }
        
        if(v[i] > mn){
            
            mx = v[i];
            ans = max(ans, mx-mn);
        }

    }

    return ans;
}

void solve(){
    int n; cin >> n;
    vector<int> v(n);
    
    for(int i = 0; i < n; i++){
        
        cin >> v[i];
    }

    cout << maxProfit(v) << '\n';
    return;
}

int32_t main()
{
    NEED_FOR_SPEED;
    int t = 1;
    // cin >> t;
    while(t--){
        solve();
    }
    return 0;
}