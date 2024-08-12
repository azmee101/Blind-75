#include <bits/stdc++.h>
using namespace std;

#define ll long long int

#define NEED_FOR_SPEED ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

int findMin(const vector<int>& nums) {
    int left = 0;
    int right = nums.size() - 1;
    int mn = INT_MAX;
    while (left <= right) {
        int mid = left + (right - left) / 2;
        
        if(nums[mid] > nums[right]){
            left = mid + 1;
            mn = min(mn, nums[right]);
        }
        else{
            right = mid - 1;
            mn = min(mn, nums[mid]);
        }
    }
    return mn;
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
    int t = 1;
    // cin >> t;
    while(t--){
        solve();
    }
    return 0;
}