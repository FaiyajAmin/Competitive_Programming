#include<bits/stdc++.h>

#define sf(n) scanf("%d", &n);
#define pf(n) printf("%d", &n);
#define rep(q, i, n) for(int q=i; q<n; q++)
#define ll long long
#define ull unsigned long long
#define pb push_back
#define all(v) v.begin(),v.end()
#define ff first
#define ss second
#define pii pair<int,int>
#define pll pair<ll,ll>

#define PI 2*acos(0.0)
#define INF (1<<28)
#define mem(a,x) memset(a,x,sizeof(a))
#define MAX 1000000000
#define MIX 0

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(),cout.tie();

    ll a, b, c, d, e, f, h, ans;

    cin >> a >> b >> c >> d >> h;

    e = max(a,c);
    f = min(b,d); /// min(b,d) > max(a,c) if they are intersecting rectangles

    ans = (f-e)*h;

    if(e>f)
        cout << 0 << endl;
    else
        cout << ans << endl;

    return 0;

}
