//#include<bits/stdc++.h>
//
//#define sf(n) scanf("%d", &n);
//#define pf(n) printf("%d", &n);
//#define rep(q, i, n) for(int q=i; q<n; q++)
//#define ll long long
//#define ull unsigned long long
//#define pb push_back
//#define all(v) v.begin(),v.end()
//#define ff first
//#define ss second
//#define pii pair<int,int>
//#define pll pair<ll,ll>
//
//#define PI 2*acos(0.0)
//#define INF (1<<28)
//#define mem(a,x) memset(a,x,sizeof(a))
//#define MAX 1000000000
//#define MIX 0
//
//using namespace std;
//
//int main()
//{
//    ios::sync_with_stdio(false);
//    cin.tie(),cout.tie();
//
//    int n, k, a, t, s, mini = 1000000;
//    cin >> n >> k >> a;
//    int cnt = k/a, time;
//    rep(i, 0, n)
//    {
//        cin >> t >> s;
//        int times = cnt/t;
//
//    if(times==0)
//    {
//        mini = cnt;
//    }
//    else
//    {
//        if(cnt-(times*t)==0)
//        {
//            time = times * t + (times-1)*s;
//        }
//        else
//        {
//                    time = times * t + times*s + cnt-(times*t);
//        }
//
//        if(time<mini)
//        {
//            mini = time;
//        }
//
//    }
//
//    }
//
//    printf("%d", mini);
//
//    return 0;
//
//}
//
