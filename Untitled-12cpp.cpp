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

int cnt = 1;
//* main code
void solve(){
   
  int r,c,d1,d2;
  cin >> r >> c  >> d1 >> d2;
  vector<string> st;
  st.pb("k");
  for(int i =0; i <= c;i++){
   st[0]+= "k";
  }
//   cout << st[0];
  for(int i=0;i <r;i++){
   string s;
   cin >> s;
   st.pb("k");
   st[i+1]+=s+"k";

}
st.pb("k");
  for(int i =0; i <= c;i++){
   st[c+1]+= "k";
  }
//   st[i+1][j]=='V' || 
//       st[i-1][j]=='V' || st[i][j+1]=='V' || 
//       st[i][j+1]=='V' || st[i-1][j-1]=='V' || st[i+1][j+1]=='V' || 
//       st[i-1][j+1]=='V' || st[i+1][j-1]=='V'

for(int i=1;i <= r;i++){
   for(int j=1;j <=c;j++){
      if((st[i-1][j]=='V'|| st[i+1][j]=='V' || st[i][j+1]=='V' ||st[i][j-1]=='V') && st[i][j]!= 'V'){
         st[i][j] = d1+'0';
      }else if(st[i][j]!= 'V'){
         st[i][j]= '0';
      }

      if((st[i+1][j+1]=='V' ||  st[i+1][j-1]=='V' || st[i-1][j+1]=='V' || st[i-1][j-1]=='V' )&&st[i][j]!= 'V'){
         int ma = max(st[i][j]-'0',d2);
                  st[i][j]= ma+'0';
      }
      }
   }

   cout << "Airplane #" << cnt<< ":" << endl;
   for(int i=1;i <= r;i++){
      for(int j=1; j <= c;j++){
         cout << st[i][j];
      }
      cout << endl;
   }
   cout << endl;
   cnt++;
}
 



int main(){
   optimize()
   ll tc;
   cin >> tc;
   while(tc--)
   solve();
   int in;
   cin >> in;
   
   return 0;
}
const int mod = 1e6;
vector<int> v(mod);
int main(){
   int in;
   
   cin >> in;
   vector<int> vin(in);
   for(int i=0;i < in;i++){
      cin >> vin[i];
      v[vin[i]++];
   }
   sort(vin.begin(),vin.end());
   int un = unique(vin.begin(),vin.end())-v.begin();
    unique(vin.begin(),vin.end())

   for(int i=0;i < un;i++){
      cout << vin[i] << " " << v[vin[i]] << endl;
   }
   
}


