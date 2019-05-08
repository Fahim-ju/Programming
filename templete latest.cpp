/*-----------------------------
|       MD. FAHIMUL KARIM      |
|         Dept. of CSE         |
|    JAHANGIRNAGAR UNIVERSITY  |
-------------------------------*/

#include<bits/stdc++.h>
using namespace std;

#define  READ   freopen("input.txt","r",stdin)
#define  WRITE  freopen("output.txt","w",stdout)
#define  faster_io    ios_base::sync_with_stdio(0); cin.tie(0);cout.tie(0);
#define D       double
#define ld      long double
#define ll      long long int
#define ul      unsigned int
#define ull     unsigned long long int
#define ff      first
#define ss       second
#define pb(a)         push_back(a)
#define mk(a,b)       make_pair(a,b)
#define allcl(i,n,v)  for(int i=0;i<=n;i++)v[i].clear()
#define endl          "\n"
#define mem0(a)     memset(a,0,sizeof a)
#define mem1(a)     memset(a,-1,sizeof a)
#define sqr(a)    (a*a)
typedef pair< int , int > pi;
typedef pair< int , pi > pii;

///bit on,off,check
bool check_bit(int n,int k) {return ( (n&(1<<(k-1))) )? true:false;}
int on(int n,int k) {return (n | (1<<(k-1)));}
int off(int n,int k) {return check_bit(n,k)? (n^(1<<(k-1))):n;}

///direction array
ll dx4[]= {1,-1,0,0};
ll dy4[]= {0,0,1,-1};
ll dx8[]= {-1,1,0,0,-1,1,-1,1};
ll dy8[]= {0,0,1,-1,1,1,-1,-1};

///gcd/bigmod
ll gcd(ll a, ll b)              {if(b>a)gcd(b,a);return ((b==0)?a:gcd(b,a%b));}
ll lcm(ll a, ll b)              {ll p=(a*b)/(gcd(a,b));return p;}
ll bigmod(ll a,ll b,ll m)       {ll ans=1;a=a%m;while(b){if(b&1)ans=(ans*a)%m;a=(a*a)%m;b/=2;}return ans;}
ll mod_inv(ll a, ll m)          {return bigmod(a,m-2,m);}
ll sum(ll a, ll b, ll m)        {return a>=m-b?a-(m-b):a+b;}
ll multiply(ll a, ll b, ll m)   {ll ans=0;if(b>a)swap(a,b);while(b){if(b&1)ans=sum(ans,a,m);b>>=1;a=sum(a,a,m);}return ans;}

///Declaration
#define mod     1000000007LL
#define eps     0.000000001
#define inf     9999999999999999LL
#define pi      acos(-1.00)
const ll base = 31;


int vis[100];

int main()
{
    return 0;
}
