#include <stdio.h>
#include<string.h>
int main(){
char in1[100],in2[100],ans[100]={};
gets(in1);gets(in2);
for(int i=0;i < strlen(in2);i++){
for(int j=0;j < strlen(in1);j++){
if(in2[i]==in1[j]){
in1[j]='0';
}
}
}
for(int i=0;i < strlen(in1);i++){
if(in1[i]!='0'){
printf("%c",in1[i]);
}
}

return 0;
}