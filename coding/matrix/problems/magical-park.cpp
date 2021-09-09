#include<bits/stdc++.h>
using namespace std;

void ans(char a[][100], int m , int n, int s, int k){
  for(int i=0;i<m;i++){
      for(int j=0;j<n;j++){
          if(s<k){cout<<"No";return;}
          if(a[i][j]=='.'){
          s-=2;
          } else if(a[i][j]=='*'){
              s+=5;
          } else{
              break;
          }
        if(j!=(n-1)){
        s--;
        }
      }
  }

  if(s>k){
      cout<<"Yes "<<s;
  } else{
      cout<<"No";
  }
}

int main(){
    int m,n,k,s;cin>>m>>n>>k>>s;
    char a[m][100];
    for(int i=0;i<m;i++)
    for(int j=0;j<n;j++) cin>>a[i][j];
    ans(a,m,n,s,k);
}
