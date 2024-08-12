#include <bits/stdc++.h>
using namespace std;

#define ll long long int

#define NEED_FOR_SPEED ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

ll mod = 1e17+7;

int maxProduct(vector<int> &v){

    long long int pre = 1, suf = 1;
    long long int mx = INT_MIN;

    for(int i = 0; i < v.size(); i++){

        if(v[i] == 0){
            pre = 1;
            mx = max(mx, 0LL);
            continue;
        }

        pre = ((pre % mod) * (v[i] % mod))%mod;
        mx = max(mx, pre);
    }

    for(int i = v.size()-1; i >= 0; i--){

        if(v[i] == 0){
            suf = 1;
            mx = max(mx, 0LL);
            continue;
        }

        suf = ((suf % mod) * (v[i] % mod))%mod;
        mx = max(mx, suf);
    }

    return mx;
}

void solve(){
    int n; cin >> n;
    vector<int> v(n);
    for(int i = 0; i < n; i++){
        cin >> v[i];
    }
    cout << maxProduct(v) << '\n';
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