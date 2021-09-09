#include<bits/stdc++.h>
using namespace std;

void input(int a[][100], int m , int n){
    for(int i=0;i<m;i++)
        for(int j=0;j<n;j++) cin>>a[i][j];
}

void display(int a[][100], int m ,int n){
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            cout<<a[i][j]<<" ";
        }
        cout<<endl;
    }
}

void Suffix(int suffix[][100], int a[][100], int m , int n){
    suffix[m-1][n-1] = a[m-1][n-1];
    // last row
    for(int i=n-2;i>=0;i--) suffix[m-1][i]+=suffix[m-1][i+1]+a[m-1][i];
    // last col
    for(int i=m-2;i>=0;i--) suffix[i][n-1]+=suffix[i+1][n-1]+a[i][n-1];
       
    for(int i=m-2;i>=0;i--){
        for(int j=n-2;j>=0;j--)
       suffix[i][j]+=suffix[i+1][j]+suffix[i][j+1]-suffix[i+1][j+1]+a[i][j];
    }
}

int sum1(int suffix[][100], int m, int n){
    int ans=0;
    for(int i=0;i<m;i++)
    for(int j=0;j<n;j++){
      ans=max(ans,suffix[i][j]);
    }
    return ans;
}


int main(){
    int m,n;cin>>m>>n;
    int a[m][100];
    int suffix[m][100]={0};
    input(a,m,n);
    Suffix(suffix,a,m,n);
    cout<<sum1(suffix,m,n)<<endl;
}
