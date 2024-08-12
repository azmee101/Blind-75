#include <bits/stdc++.h>
using namespace std;

#define ll long long int

#define NEED_FOR_SPEED ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

int search(vector<int>& nums, int target) {
        
    int indx = -1;

    for(int i = 0; i < nums.size(); i++){

        if(nums[i] == target){
            indx = i;
            break;
        }

    }

    return indx;
}


void solve(){
    int n, target;
    cin >> n >> target;
    vector<int> v(n);
    for(int i = 0; i < n; i++){
        cin >> v[i];
    }
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