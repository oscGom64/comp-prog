// _Oscar Gomez (tupapifox)_
// A. Word Capitalization
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

int main() {
    ios::sync_with_stdio(0);cin.tie(0);
    //freopen("in.txt", "r", stdin);
    int tc=1;
    //cin>>tc;
    char w[1000];
    while(tc--){
        cin >> w;
        for(int i = 0; w[i] != '\0'; i++) {
            cout << ( (i == 0) ? char(toupper(w[i])) : w[i] );
        }
    }
    return 0;
}
