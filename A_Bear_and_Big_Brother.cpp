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

int main(){
    ios::sync_with_stdio(0);cin.tie(0);
    //freopen("in.txt", "r", stdin);
    int tc=1;
    //cin>>tc;
    int a;  // Limak's weight
    int b;  // Bob's weight
    int yrs = 0;    // counter of years for Limak to become larger than Bob

    while(tc--){
        cin >> a >> b;

        while (a <= b) {
            a *= 3;
            b *= 2;
            yrs++;
        }
        
        cout << yrs;
    }
    return 0;
}
