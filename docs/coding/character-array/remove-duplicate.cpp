#include<bits/stdc++.h>
using namespace std;

void duplicate(char a[], int l){
  int i=0;
  if (l==1 || l == 0){
    return;
  }
  for(int j=1;j<l;j++){
    if(a[i] != a[j]){
      a[++i]=a[j];
    }
  }
  a[i+1]='\0';
}
int main(){
    char a[100];
    cin>>a;
    int l=strlen(a);
    duplicate(a,l);
    cout<<a;
}