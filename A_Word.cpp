// _Oscar Gomez (tupapifox)_
// A. Word
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
    char s[100];    // string s
    int up = 0, low = 0;    // counter for upper and lower cases

    cin >> s;        // word input
    while(tc--){
        for (int i = 0; s[i] != '\0';i++){
            if (isupper(s[i]))
                up++;
            else
                low++;
        }

        int k = 0;
        while (s[k] != '\0') {
            if (up > low)
                cout << char(toupper(s[k]));
            else
                cout << char(tolower(s[k]));
            k++;
        }
    }
    return 0;
}
