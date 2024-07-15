/*
   Author:PRITUL
*/
#include <bits/stdc++.h>
using namespace std;
#define  optimize() ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl '\n'
#define pb push_back
#define ll long long
#define F first
#define S second
#define sz size()
#define yes() cout << "YES" << endl;
#define no() cout << "NO" << endl;
#define be(x) (x).begin(),(x).end()
const ll mod = 2e8+12;



int main(){

    optimize();
    ifstream InputFile("input.txt");
    ofstream OutputFile;
    OutputFile.open("output.txt");
    

    int in;
    int tc =0;
    InputFile >> in;
    
    vector<pair<int,int>>v(2*in);
    vector<pair<int,int>> ans;
    for(int i=0;i < 2*in;i++){

        InputFile >> v[i].F;
        v[i].S = i+1;
        
 

    }
    //* for(auto u:v) cout << u.F <<  " " << u.S << endl;
    sort(be(v));
    for(int i = 0; i < 2*in;i++){
        
        if(v[i].F ==  v[i+1].F){
            ans.pb({v[i].S,v[i+1].S});
            i++;
            tc++;
        }else{
            if(tc <= 1){
                 OutputFile << -1 << endl;
                 
                return 0;
            }else if(tc%2 != 0){
                 OutputFile << -1 << endl;
                 
                return 0;
            }else{
                tc =0;
                
            }

        }
    }
    
    for(auto u:ans){
        OutputFile << u.F << " " << u.S << endl;
    }
    
    

    

    
    

    return 0;
}




