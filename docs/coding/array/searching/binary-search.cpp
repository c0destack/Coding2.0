#include<bits/stdc++.h>
using namespace std;

int search(int a[],int n, int x){
    int s=0;
    int e = n-1;
    while(s<=e){
        int m = (s+e)/2;
        if(a[m] == x) return m;
        else if(a[m]>x) e =m-1;
        else s= m+1;
    }
    return -1;
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
    cout<<search(a,n,x);
}
