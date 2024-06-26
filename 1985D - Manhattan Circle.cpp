#include <bits/stdc++.h>
using namespace std;
#define  optimize() ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl '\n'
#define pb push_back


int main(){
    optimize();


    int p;
    cin >> p;
    while(p--) {


    int n,m;
    cin  >> n >> m;
    vector<int> v;
    vector<int> v_temp;
    

    // TAKING input
    for(int i=0;i < n;i++){
        
        int ans = 0;
        // ROW
        for(int j=1;j <= m;j++){
            char c;
            cin >> c;
            
            if(c == '#'){

                ans++; 
                v_temp.pb(j);

            }    
        }
        v.pb(ans);
    }

    // STARTING of row calculation

   int r = v[0];
   for(int k=1;k < n;k++){
    if(r < v[k]){
        r = v[k];

    }
   }
   int row;
   for(int l =0;l < n;l++){
    if(v[l] == r){

        row = l + 1;

    }
   }
   
    
    cout <<  row <<" "<< v_temp[(v_temp.size()/2)] << endl;//ANS
         
    
    }

    return 0;

}

    
    

     
    
