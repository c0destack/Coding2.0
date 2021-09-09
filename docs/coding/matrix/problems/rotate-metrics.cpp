#include<bits/stdc++.h>
using namespace std;

void rotate(int a[][100], int n){
    for(int i=0;i<n;i++){
        int l=0,r=n-1;
        while(l<r){
            swap(a[i][l], a[i][r]);
            l++;r--;
        }
    }
}

void transpose(int a[][100], int n){
    for(int i=0;i<n;i++)
    for(int j=i+1;j<n;j++)
        swap(a[i][j], a[j][i]);
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

int main(){
    int n;cin>>n;
    int a[n][100];
    input(a,n,n);
    rotate(a,n);
    transpose(a,n);
    display(a,n,n);
}

