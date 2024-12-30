#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<ll> vl;
typedef pair<ll,ll> pl;
typedef vector<pl> vpl;
//Macros
#define  optimize() ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl '\n'
#define pb push_back
#define sz size()
#define F first
#define S second
#define yes() cout << "YES" << endl;
#define no() cout << "NO" << endl;
#define all(x) (x).begin(),(x).end()
const double PI = acos(-1);
const double eps =1e-9;// abs(a-b) < eps
const ll mod = 2e5+123;


//* main code
void solve(){
   ll n;
   cin >> n;
   vector<pair<ll,ll>> v;
   map<ll,ll> m;
   for(int i=0;i < n;i++){
    cin >> v[i].F >> v[i].S;
    if(v[i].F== v[i].S) m[v[i].F]++;
   }
   if(m.sz==0 && m.sz==n){
    for(int i=0;i < n;i++) cout << 1;
    return;
   }else{
    vl v(2*n+1);

   }

}

int main(){
   optimize()
   ll tc;
   cin >> tc;
   while(tc--)
   solve();
   
   return 0;
}