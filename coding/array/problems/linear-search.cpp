#include<bits/stdc++.h>
using namespace std;

int search(int a[],int n, int x){
    for(int i=0;i<n;i++){
        if(a[i]==x) return i;
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
