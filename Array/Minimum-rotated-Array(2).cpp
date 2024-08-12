#include <bits/stdc++.h>
using namespace std;

#define ll long long int

#define NEED_FOR_SPEED ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);


int findMin(vector<int>& nums) {
    
    int mx1 = INT_MAX, mx2 = INT_MAX;
    int ans = INT_MAX;
    for(int i = 0, j = nums.size()-1; i <= j; i++, j--){

        mx1 = min(mx1, nums[i]);
        mx2 = min(mx2, nums[j]);
        ans = min(ans, min(mx1, mx2));
    }

    return ans;
}

void solve(){
    int n; cin >> n;
    vector<int> v(n);
    for(int i = 0; i < n; i++){
        cin >> v[i];
    }  
    cout << findMin(v) << '\n';
    return;
}

int32_t main()
{
    NEED_FOR_SPEED;
    int t; cin >> t;
    while(t--){
        solve();
    }
    return 0;
}