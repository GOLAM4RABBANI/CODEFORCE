#include<stdio.h>
int main(){
  int b,n,sum=0;
  printf("ENTER THE BASE : ");
  scanf("%d",&b);
  printf("ENTER THE POWER : ");
  scanf("%d",&n);
  int k=b;
  for(int i=0;i < n;i++){
     
     sum = sum+b;
     b = b*10+k;
  }
  printf("SUM : %d",sum);
}
