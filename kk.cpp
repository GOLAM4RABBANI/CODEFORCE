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
//   55555
//   54444
//   54333
//   54322
//   54321 
  ll cnt = n;
  for(int i=n;i >= 1;i--){
    
    for(int j=n;j >= 1;j--){
      cout << max(i,j) << " ";
    }
    cout << endl;
  }

}

int main(){
   optimize()
//    ll tc;
//    cin >> tc;
//    while(tc--)
   solve();
   
   return 0;
}