#include<bits/stdc++.h>
using namespace std;

void input(int a[][100], int m , int n){
    int c=1;
    for(int i=0;i<m;i++)
        for(int j=0;j<n;j++) a[i][j]=c++;
}

void wavePrint(int a[][100], int m , int n){
   int col=0;
   while(col<n){
       if(col%2==0){
           for(int i=0;i<m;i++) cout<<a[i][col]<<" ";
           cout<<endl;
       } else{
            for(int i=m-1;i>=0;i--) cout<<a[i][col]<<" ";
           cout<<endl;
       }
       col++;
   }
}

int main(){
    int m,n;cin>>m>>n;
    int a[m][100];
    input(a,m,n);
    wavePrint(a,m,n);
}
