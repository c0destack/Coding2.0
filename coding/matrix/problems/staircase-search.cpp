#include<bits/stdc++.h>
using namespace std;

void search(int a[][100], int m, int n, int k){
   int i=0,j=n-1;
   while(i<m&&j<n){
       if(a[i][j]==k) {cout<<"i: "<<i<<", j: "<<j;return;}
       else if(a[i][j]<k){
       i++;
       } else{
           j--;
       }
   }
   cout<<"-1";
}

void display(int a[][100], int m ,int n){
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            cout<<a[i][j]<<" ";
        }
        cout<<endl;
    }
}

void input(int a[][100], int m , int n){
    int c=1;
    for(int i=0;i<m;i++)
        for(int j=0;j<n;j++) a[i][j]=c++;
}

void inputFromConcole(int a[][100], int m , int n){
    for(int i=0;i<m;i++)
        for(int j=0;j<n;j++) cin>>a[i][j];
}

int main(){
    int m,n,k;cin>>m>>n>>k;
    int a[m][100];
    inputFromConcole(a,m,n);
    search(a,m,n,k);
}

