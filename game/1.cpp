#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define pb push_back
#define FIO                           \
    ios_base::sync_with_stdio(false); \
    cin.tie(0);                       \
    cout.tie(0);

int main()
{
    FIO;
    ll t;
    cin >> t;
    while(t--){
    ll n;
    cin >> n;
    vector<ll> v1(n),v(n);
    ll c = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
        v1[i] = v[i];
    }
    sort(v.begin(), v.end());
    ll cn = 0;
    for (int i = 0; i < n;i++){
        if(v[i]!=v1[i])
            cn++;
    }
        cout << cn << endl;
    }
}
