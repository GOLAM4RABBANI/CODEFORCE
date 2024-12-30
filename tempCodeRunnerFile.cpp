  
int arr[3][3];
int arr2[3][3];
int ans[3][3];
for(int i=0;i < 3;i++){
  for(int j=0;j < 3;j++){
    cin >> arr[i][j];
  }  
}
for(int i=0;i < 3;i++){
  for(int j=0;j < 3;j++){
    cin >> arr2[i][j];
  }  
}
for(int i=0;i < 3;i++){
    
  for(int j=0;j < 3;j++){
    ll sum = 0;
    for(int k=0;k < 3;k++){
        sum += arr[i][k]*arr2[k][j];
    }
    ans[i][j] = sum;
  }  
}
for(int i=0;i < 3;i++){
    for(int j=0;j < 3;j++){
       cout << ans[i][j] << " ";
    }
    cout << endl;
}