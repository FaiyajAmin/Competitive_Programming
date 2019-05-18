#include<bits/stdc++.h>

#define sf scanf
#define pf printf
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

    int n, m, k, c;
    int extra=0, maxi=0;

    sf("%d %d %d", &n, &m, &k);
    rep(i, 0, n)
    {
        sf("%d", &c);

        if(c>maxi)
            maxi=c;   ///   or use maxi=max(maxi, c);


        if(c>m)
            extra++;
    }

    if(maxi==m)
        cout<<"YES\n";
    else if (extra<=k && k>0) /// cuz if k==0 then maxi must be equal to m
        cout<<"YES\n";
    else
        cout<<"NO\n";

    return 0;
}

