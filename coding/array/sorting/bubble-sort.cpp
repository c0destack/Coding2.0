#include<bits/stdc++.h>
using namespace std;

void asc(int a[],int n){
    for(int i=0;i<n-1;i++){
        for(int j=0;j<n-i-1;j++){
            if (a[j]>a[j+1]){
                int temp = a[j];
                a[j]= a[j+1];
                a[j+1]= temp;
            }
        }
    }
}

void desc(int a[],int n){
     for(int i=0;i<n-1;i++){
        for(int j=0;j<n-i-1;j++){
            if (a[j]<a[j+1]){
                int temp = a[j];
                a[j]= a[j+1];
                a[j+1]= temp;
            }
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
    cout<<"input 1 for asc order"<<endl<<"enter 2 for desc order"<<endl;
    int x;cin>>x;
    if(x==1){
        asc(a,n);        
    } else{
        desc(a,n);
    }
    for(int i=0;i<n;i++) cout<<a[i]<<" ";
}
