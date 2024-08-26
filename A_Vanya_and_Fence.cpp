// _Oscar Gomez (tupapifox)_
// 677A - Vanya and Fence
#pragma GCC optimize("Ofast,unroll-loops")//-0.0+0.0=-0  
#pragma GCC target("avx2")
#include <bits/stdc++.h>

using ull = unsigned long long;
using ll = long long;
using namespace std;
#define endl '\n'
#define dbg(...) cerr<<"LINE("<<__LINE__<<")->["<<#__VA_ARGS__<<"]: ["<<(__VA_ARGS__)<<"]\n";   
#define pb push_back 
#define F first
#define S second

int main(){
    ios::sync_with_stdio(0);cin.tie(0);
    //freopen("in.txt", "r", stdin);
    int tc=1;
    //cin>>tc;
    int n;  // number of friends
    int h;  // height of fence
    int a;  // auxiliar input
    int road = 0;   // counter for road width
    while(tc--){
        cin >> n >> h;
        for(int i=0;i<n;++i){
            cin >> a;   // capture each friend height
            if (a <= h) {
                road++;
            }
            else {
                road += 2;
            }
        }
        cout << road;
    }
        return 0;
}
