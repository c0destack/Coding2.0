#include<bits/stdc++.h>
using namespace std;

void input(int a[][100], int m , int n){
    int c=1;
    for(int i=0;i<m;i++)
        for(int j=0;j<n;j++) a[i][j]=c++;
}

void spiralPrint(int a[][100], int m , int n){
   int rs=0,cs=0,re=m-1,ce=n-1;
   while(rs<=re && cs <= ce){
       // print start row
       for(int i=cs;i<=ce;i++) cout<<a[rs][i]<<" ";
       rs++;
       // print end col
       for(int i=rs;i<=re;i++) cout<<a[i][ce]<<" ";
       ce--;

       if(re > rs){
       // print end row
       for(int i=ce;i>=cs;i--) cout<<a[re][i]<<" ";
       re--;
       }

       // print start col
       if(ce>cs){
       for(int i=re;i>=rs;i--) cout<<a[i][cs]<<" ";
       cs++;
       }
   }
}

int main(){
    int m,n;cin>>m>>n;
    int a[m][100];
    input(a,m,n);
    spiralPrint(a,m,n);
}
