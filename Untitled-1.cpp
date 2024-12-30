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
  int x;
  cin >> x;
  if(x==1) cout << 1 << endl;
  else if(x<=4) cout << 2 << endl;
  else{
    int t = 4;
    int ans = 1;
    for(int i=1;;i++){
        if(t*2 < x){ans++;t*=2;}
        else break;
    }
    cout << ans + 1 << endl;
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