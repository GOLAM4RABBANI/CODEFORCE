#include <bits/stdc++.h>
using namespace std;


int main(){

    ios::sync_with_stdio(0);
    cin.tie(0);


int n;
cin >> n;
for(int i=0 ; i < n;i++){

char arr[5];
int a,b;
a=0;
b=0;
   for(int j=0;j<5;j++){
    char cr;
    cin >> cr;
    arr[j] = cr;
   }

for(int k=0;k < 5;k++){
    if(arr[k] == 'A')
       a = a + 1;
    else
        b = b+ 1;

}
if(a > b)
    cout << "A" << endl;
else
    cout << "B" << endl;

}



return 0;
}




