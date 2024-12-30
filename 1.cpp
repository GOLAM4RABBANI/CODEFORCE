#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector<int> vi;
typedef vector<long long> vl;
#define fast ios_base::sync_with_stdio(0); cin.tie(0);
#define pb push_back
#define yes cout << "YES" << endl;
#define no cout << "NO" << endl;
#define all(a) a.begin(),a.end()
#define rall(a) a.rbegin(),a.rend()
#define poin(x) cout << fixed << setprecision(x);
void solve()
{
    int n; cin >> n;
    vector<pair<int,int>> a(n);
    map<int,int> x,y;
    vi c;
    for(int i=0; i<n; i++)
    {
        cin >> a[i].first >> a[i].second;
        if(a[i].first==a[i].second) x[a[i].first]++;
    }
    if(x.size()==0 or x.size()==n)
    {
        for(int i=0; i<n; i++) cout << 1 ;
        cout << endl;
    }
    else
    {
        for(int i=1; i<2*n+1; i++)
        {
            if(x[i]) y[i]++;
            y[i]+=y[i-1];
        }
        for(int i=0; i<n; i++)
        {
            if(a[i].first==a[i].second)
            {
                if(x[a[i].first]==1) cout << 1;
                else cout << 0;
            }
            else
            {
                if(y[a[i].second]-y[a[i].first-1]<(a[i].second-a[i].first+1)) cout << 1;
                else cout << 0;
            }
        }
        cout << endl;
    }
}
int main()
{
    fast
    //freopen("input.txt", "r", stdin);                                           
    //freopen("output.txt", "w", stdout); 
    int t;
    cin >> t;
    while(t--)
    solve();
}