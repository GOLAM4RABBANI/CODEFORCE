#include <bits/stdc++.h>
using namespace std;
#define  optimize() ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl '\n'
#define pb push_back

bool isVowel(char c){
    return(c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u') ;

}

int main(){
    optimize();


    vector<string> v;
    int arr[] ={5,7,5};
    


    for(int i =0;i<3; i++){
        string st;
        char c;
        cin >> c;
        getline(cin,st);
        st = c+st;
        v.pb(st);
    }// String input done
    
    for(int j=0;j < 3;j++){
        int ans =0;

        for(auto u:v[j]){
            if(isVowel(u)){
                ans++;
            }
        }
        

       

        if(arr[j] != ans) return cout << "NO\n" ,0;
        
    }
    cout << "YES" << endl;
     
    
    
   
    return 0;
     }

    
