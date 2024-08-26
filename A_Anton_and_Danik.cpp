// _Oscar Gomez (tupapifox)_
// link y/o nombre del programa
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
    int n;
    int wA = 0, wD=0;
    while(tc--){
        cin >> n;
        char s[n+1];

        cin >> s;

        for(int i = 0; i < n; i++) {
            if (s[i] == 'A')
                wA++;
            else
                wD++;
        }

        if (wA > wD)
            cout << "Anton";
        else if (wD > wA)
            cout << "Danik";
        else
            cout << "Friendship";

    }
    return 0;
}
