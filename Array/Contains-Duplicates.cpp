


#include <bits/stdc++.h>
using namespace std;

#define ll long long int

#define NEED_FOR_SPEED ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

bool containsDuplicate(vector<int>& v){

    unordered_set<int> s;

    for(int i = 0; i < v.size(); i++){

        s.insert(v[i]);
    }

    if(s.size() == v.size()) return false;
    return true;
}

void solve(){
    int n; cin >> n;
    vector<int> v(n);

    for(int i = 0; i < n; i++){

        cin >> v[i];
    }

    cout << containsDuplicate(v) << '\n';
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