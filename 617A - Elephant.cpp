#include <bits/stdc++.h>
using namespace std;


int main(){

    ios::sync_with_stdio(0);
    cin.tie(0);
   int x,y,st;
   cin >> x;
   if(x > 5){
    y = x/5;
    if(x%5==0){
        cout << y << endl;
    }else{

    st = y + 1;
    cout << st << endl;
    }
   }else{
       cout << 1 << endl;

   }

 return 0;
}




