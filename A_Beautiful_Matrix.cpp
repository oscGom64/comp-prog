// _Oscar Gomez (tupapifox)_
// A. Beautiful Matrix
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
    int mat[5][5];
    int moves = 0;
    int x, y;
    while(tc--){
        for (int i = 0; i < 5; i++) {
            for (int j = 0; j < 5; j++) {
                cin >> mat[i][j];
                if (mat[i][j] == 1) {
                    y = i;
                    x = j;
                }
            }
        }

        while (y != 2 || x != 2) {
            if (y != 2) {
                y = (y > 2 ? y-1 : y+1);
            }
            else {
                x = (x > 2 ? x-1 : x+1);
            }
            moves++;
        }

        cout << moves;
    }
    return 0;
}
