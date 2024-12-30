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
  ll n,l,r,k;
  cin >> n >> l >> r >> k;

  vl v(n);
  for(int i=0;i < n;i++) cin >> v[i];
  sort(all(v));
  ll ans = 0;

  for(int i=0;i < n;i++){
    ll tem = v[i];
    ll cnt = 1;
    for(int j=i+1;j < n;j++){
      if(tem+v[j] > r){tem = v[i]; cnt =1 ;}
      tem+=v[j];

      if(v[j]-v[i]>=k && (tem >= l && tem <= r)){
         cnt++;
         ans++;
      }
      if(cnt > 2 && v[j]-v[i]>=k && v[j]+v[i] >= l && v[j]+v[i] <= r) ans++;
      
    }//
  }
  cout << ans << endl;
   
}

int main(){
   optimize()
  //  ll tc;
  //  cin >> tc;
  //  while(tc--)
   solve();
   
   return 0;
}