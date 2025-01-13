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
int solve(int k){
   int ans=1;
   if(k == 1) return 1;
   ans = k*solve(k-1);
   cout << k << endl;
   return ans;
   //5
   //4
   //3
   //2

}

int main(){
   optimize()
  //  ll tc;
  //  cin >> tc;
  //  while(tc--)
   cout << solve(5) << endl;
   
   return 0;
}