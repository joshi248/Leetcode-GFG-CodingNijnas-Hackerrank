// joshi248
#include <bits/stdc++.h>
#define endl "\n"
#define all(v) (v).begin(), (v).end()
#define pb push_back
using namespace std;

template <typename T>
istream &operator>>(istream &istream, vector<T> &v){for (auto &e : v) cin >> e; return istream;}
template <typename T>
ostream &operator<<(ostream &ostream, vector<T> &v){for (auto &e : v) cout << e << ' '; return ostream;}

void solve(){
    int n, r;
    cin >> n >> r;
    int res = 1;
    for(int i = 0; i < r; ++i){
        res *= n-i;
        res /= i+1;
    }
    cout << res << endl;
}
int main(){

ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int t = 1;
cin >> t;
while(t--) solve();

    return 0;
}