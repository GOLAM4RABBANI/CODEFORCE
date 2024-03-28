#include <bits/stdc++.h>
using namespace std;


int main(){

    ios::sync_with_stdio(0);
    cin.tie(0);
int n ;
cin >> n;
for(int i=0;i<n;i++){
    int a,b,c;
    cin >> a >> b>> c;
    if(c > a && c > b && b > a)
        cout << "STAIR" << endl;
    else if(b > a&& b> c)
        cout << "PEAK" << endl;
    else
        cout << "NONE" << endl;
}

return 0;
}
