#include <bits/stdc++.h>
using namespace std;

#define ll long long int

#define NEED_FOR_SPEED ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

vector<int> twoSum(vector<int>& v, int target){
    
    unordered_map<int, int> mp1, mp2;
    
    for(int i = 0; i < v.size(); i++){

        if(mp1[v[i]]){
            mp2[v[i]] = i+1;
            continue;
        }
        mp1[v[i]] = i+1;
    }

    vector<int> ans;

    for(int i = 0; i < v.size(); i++){
        
        int x = v[i];
        int rem = target - x;

        if(mp1[x] && mp1[rem] && x != rem){
            
            ans.push_back(mp1[x]-1);
            ans.push_back(mp1[rem]-1);
            break;
        }
        else if((mp1[x] && mp2[rem]) || (mp1[rem] && mp2[x]) && x == rem){
            
            if(mp1[x] && mp2[rem]){
                ans.push_back(mp1[x]-1);
                ans.push_back(mp2[rem]-1);
            }
            else{
                ans.push_back(mp1[rem]-1);
                ans.push_back(mp2[x]-1);
            }
            break;
        }
    }

    return ans;

}

void solve(){
    int n; cin >> n;
    int target; cin >> target;
    vector<int> v(n);

    for(int i = 0; i < n; i++){
        
        cin >> v[i];
    }
    vector<int> ans = twoSum(v, target);

    for(auto &x : ans){
        cout << x << ' ';
    }cout << '\n';

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