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

ll lcm(ll n,ll k){

   ll tem = max(n,k);

   for(int i=tem;;i++){
      if(i%n == 0 && i%k==0) return i;
   }

}



//* main code
void solve(){
   ll n;
   char c;
   string st;
   cin >> n >> c >> st;
   vl v;
   bool chk1 = 0,chk2 =0;
   ll cnt1=1,cnt0=0;
   ll ans = 0;
   ll temans = 0;

   for(int i=0;i < n;i++){
      if(chk1==0 && st[i]=='g' && chk2 == 0) {chk2 = 1; temans = i+1;}
      if(st[i]==c)chk1 = 1;
      if(chk1==1 && st[i]!='g')cnt1++;
      else if(chk1 == 1 && st[i]=='g'){
         v.pb(cnt1);
         cnt1=0;
         chk1 =0;
      }
   }
   sort(all(v));
   for(auto u:v) cout << u << " ";
   cout << endl;

   if(v.empty()==1){
    ans = cnt1+temans;
    cout << ans << endl;
    return;
   }else{
    v[v.sz-1]==0? cout << 1 << endl : cout << v[v.sz-1] << endl;
    return;
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
