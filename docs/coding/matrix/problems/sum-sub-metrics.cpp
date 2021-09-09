#include<bits/stdc++.h>
using namespace std;

void input(int a[][100], int m , int n){
    int c=1;
    for(int i=0;i<m;i++)
        for(int j=0;j<n;j++) a[i][j]=c++;
}

void display(int a[][100], int m ,int n){
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            cout<<a[i][j]<<" ";
        }
        cout<<endl;
    }
}

void Prefix(int prefix[][100], int a[][100], int m , int n){
    prefix[0][0] = a[0][0];
    // first row
    for(int i=1;i<n;i++) prefix[0][i]+=prefix[0][i-1]+a[0][i];
    // first col
    for(int i=1;i<m;i++) prefix[i][0]+=prefix[i-1][0]+a[i][0];
       
    for(int i=1;i<m;i++){
        for(int j=1;j<n;j++)
       prefix[i][j]+=prefix[i-1][j]+prefix[i][j-1]-prefix[i-1][j-1]+a[i][j];
    }
}

int sum1(int prefix[][100], int m, int n){
    int ans=0;
    for(int xl=0;xl<m;xl++){
        for(int yl=0;yl<n;yl++){
            for(int xr=xl;xr<m;xr++){
                for(int yr=yl;yr<n;yr++){
                    ans+=prefix[xr][yr];    
                    if(xl>0&&yl>0){
                        ans+=prefix[xl-1][yl-1];
                    }
                    if(xl>0){
                        ans-=prefix[xl-1][yr];
                    }
                    if(yl>0){
                        ans-=prefix[xr][yl-1];
                    }
                }
            }
        }
    }
    return ans;
}

int sum2(int a[][100], int m, int n){
    int ans=0;
    for(int l=0;l<m;l++){
        for(int r=0;r<n;r++){
        ans+=a[l][r]*((l+1)*(r+1))*((m-l)*(n-r));
        }
    }
    return ans;
}

int main(){
    int m,n;cin>>m>>n;
    int a[m][100];
    int prefix[m][100]={0};
    input(a,m,n);
    Prefix(prefix,a,m,n);
    cout<<sum1(prefix,m,n)<<endl;;
    cout<<sum2(a,m,n);
}
