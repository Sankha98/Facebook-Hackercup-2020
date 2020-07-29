#include<bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp> 
#include <ext/pb_ds/tree_policy.hpp>

using namespace std;
using namespace __gnu_pbds;

#define ordered_set tree<long long, null_type,less<long long>, rb_tree_tag,tree_order_statistics_node_update>
//s.find_by_order(index) returns iterator to the index-th element
//in O(logn) time.



typedef unsigned long long ull;
typedef long long ll;
typedef vector<ll> vll;
typedef vector<int> vii;
typedef vector<string> vss;
typedef vector<pair<ll, ll> > vpll;
typedef unordered_map<ll ,ll> mpll;
typedef unordered_map<int ,int> mpii;
typedef unordered_map<char ,ll> mpcl;
typedef pair<ll , ll> pll;
typedef complex<double> cd;
typedef vector< complex<double> > vcd;


#define fore(i,n) for(i=0;i<n;i++)
#define forz(i,s,f) for(i=s;i<f;i++)
#define forer(i,n) for(i=n-1;i>=0;i--)
#define forzr(i,s,f) for(i=s;i>=f;i--)
#define mkp make_pair
#define pb push_back
#define eb emplace_back
#define ub upper_bound
#define lb lower_bound
#define ff first
#define ss second
#define pvec(i,vec) fore(i,vec.size())cout<<vec[i]<<" ";cout<<"\n";

const int M = 1005;
char in[M];
char out[M];
const ll mod=1e9+7;
const ll modulo=998244353;
const double pi = 3.14159265358979323846;


ll power(ll x,ll y,ll m)//gives (x^y)%m
{
    ll ans=1;
    while (y>0)
    {
        if(y & 1)
        {
            ans=(ans*x)%m;
        }
        y=y/2;
        x=(x*x)%m;
    }
    return ans;
}

bool sortbysec(pll &a,pll &b)
{
    return(a.ss<b.ss);
}

ll gcd(ll a,ll b)
{
    if(a==0)
        return b;
    else
        return(gcd(b%a,a));
}

ll lcm(ll a,ll b)
{
    ll ans=(a*b)/gcd(a,b);
    return ans;
}

long double logn(long double a,long double n)
{
    return(log(n)/log(a));
}

int solve()
{
    int n;
    scanf("%d", &n);
	scanf("%s", in);
	scanf("%s", out);
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            bool flag = true;
            if(i <= j)
            {
                for (int k = i; k < j; k++)
                {
                    if(out[k] != 'Y' || in[k + 1] != 'Y')
                    {
                        flag = false;
                    }
                }
            }
            else
            {
                for (int k = i; k > j; k--)
                {
                    if(out[k] != 'Y' || in[k - 1] != 'Y')
                    {
                        flag = false;
                    }
                }
            }
            printf(flag ? "Y" : "N");
        }
        puts("");
    }
}

int main(int argc, char const *argv[])
{
    ios_base::sync_with_stdio(false);cin.tie(NULL);
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    int t;
    scanf("%d", &t);
    for (int i = 1; i <= t; i++)
    {
        printf("Case #%d: ", i);
        puts("");
        solve();
    }
    return 0;
}