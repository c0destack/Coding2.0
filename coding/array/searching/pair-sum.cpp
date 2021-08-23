#include<bits/stdc++.h>
using namespace std;

void search(int a[],int n, int x){
    int l=0,r=n-1;
    while(l<r){
        int val = a[l]+a[r];
        if(val==x){
            cout<<a[l]<<" "<<a[r]<<endl;
            l++;r--;
        } else if (val > x){
            r--;
        } else{
            l++;
        }
    }
}

int main(){
    int n;
    cout<<"enter size"<<endl;
    cin>>n;
    int a[n];
    cout<<"enter "<<n<<" elements"<<endl;
    for(int i=0;i<n;i++) cin>>a[i];
    cout<<"enter element to search"<<endl;
    int x;cin>>x;
    search(a,n,x);
}
