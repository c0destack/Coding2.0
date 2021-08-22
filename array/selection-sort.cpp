#include<bits/stdc++.h>
using namespace std;

void asc(int a[],int n){
    for(int i=0;i<n-1;i++){
        int min_element =i;
        for(int j=i+1;j<n;j++){
            if (a[j]<a[min_element]){
                min_element = j;
            }
        }
        int temp = a[min_element];
        a[min_element]= a[i];
        a[i]= temp;
    }
}

void desc(int a[],int n){
    for(int i=0;i<n-1;i++){
        int max_element =i;
        for(int j=i+1;j<n;j++){
            if (a[j]>a[max_element]){
                max_element = j;
            }
        }
        int temp = a[max_element];
        a[max_element]= a[i];
        a[i]= temp;
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