#include <bits/stdc++.h>
using namespace std;

#define ll long long int

#define NEED_FOR_SPEED ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

vector<int> productExceptSelf(vector<int>& nums) {
        
    long long int x = 1;
    int zero = 0;
    for(int i = 0; i < nums.size(); i++){

        if(nums[i]){
            x*= nums[i];
        }
        else{
            zero++;
        }
    }

    vector<int> ans(nums.size());

    if(zero > 1){

        for(int i = 0; i < nums.size(); i++){
            ans[i] = 0;
        }

    }

    else if(zero == 1){

        for(int i = 0; i < nums.size(); i++){

            if(nums[i] == 0){
                ans[i] = x;
            }
            else{
                ans[i] = 0;
            }
        }
    }

    else{
        for(int i = 0; i < nums.size(); i++){

            ans[i] = x / nums[i];
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

    vector<int> ans = productExceptSelf(v);

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