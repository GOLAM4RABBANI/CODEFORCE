#include <bits/stdc++.h>
using namespace std;


int main(){

    ios::sync_with_stdio(0);
    cin.tie(0);
int n ;
cin >> n;
for(int i=0;i<n;i++){

    char arr[5];
    for(int i=0;i < 5;i++){
     char ch ;
     cin >> ch;
     arr[i] = ch;
    }
    int a,b,time;
    a = arr[0] - '0';
    b = arr[1] - '0';
    time = a*10 + b;
    /* TIME */
    if(time > 12){
        int t = time -12;

        if(t < 10){
            cout << "0" << t << arr[2] << arr[3] << arr[4] << " PM" << endl;
        }else{
            cout << t << arr[2] << arr[3] << arr[4] << " PM" << endl;
        }

    }else if(time == 12){

        for(int i=0 ;i < 5;i++){
        cout << arr[i];
        }

        cout << " PM" << endl;
    }else if(time == 0){
        cout << "12" << ":" << arr[3] << arr[4];

        cout << " AM" << endl;
    }else{
        for(int i=0 ;i < 5;i++){
        cout << arr[i];
        }

        cout << " AM" << endl;

    }


}

return 0;
}




