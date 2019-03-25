#include<bits/stdc++.h>
using namespace std;

int parent[100009];
int cnt[100009];
int m = 0;
map< string, int >mp;

void make_parent(int n)
{
    for(int i=0; i<=n; i++)
    {
        parent[i] = i;
        cnt[i] = 1;
    }
}

int find(int u)
{
    if(parent[u]==u) return u;
    return parent[u] = find(parent[u]);
}

int main()
{
//    freopen("input.txt","r",stdin);
//    freopen("output.txt","w",stdout);
    int test,n;
    string a,b;
    scanf("%d",&test);
    while(test--)
    {
        int ans = 0;
        int prev = 0;
        m = 0;
        mp.clear();
        scanf("%d",&n);
        make_parent(100005);
        for(int i=0; i<n; i++)
        {
            ans = 0;
            cin>>a>>b;
            if(mp[a]==0)
            {
                mp[a] = ++m;
            }
            if(mp[b]==0)
            {
                mp[b] = ++m;
            }
            //cout<<mp[a]<<" "<<mp[b]<<endl;
            int x = find(mp[a]);
            int y = find(mp[b]);
            if(x!=y)
            {
                parent[y] = x;
                cnt[x] += cnt[y];
                cnt[y] += cnt[x];
            }

            printf("%d\n",cnt[x]);
        }
    }
    return 0;
}
