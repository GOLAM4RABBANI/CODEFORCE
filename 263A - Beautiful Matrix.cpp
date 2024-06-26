#include <bits/stdc++.h>
using namespace std;
#define  optimize() ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl '\n'
#define pb push_back


int main(){

    optimize();
	 
	for(int i=1;i<=5;i++){
		for(int j=1;j <= 5;j++){

			int x;
			cin >> x;

			if(x == 1){
				cout << abs(3-i) + abs(3-j) << endl;
				break;
			}

		}
	}

	
	
	return 0;
	}



   


    
    

     
    
