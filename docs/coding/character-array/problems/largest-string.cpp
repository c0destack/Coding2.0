#include<bits/stdc++.h>
using namespace std;

int main(){
    char a[100];
    char b[100];
    int n,maxlen=0;
    cin>>n;
    cin.get();
    while(n--){
     cin.getline(a,100);
     int l = strlen(a);
     if(l>maxlen){
       maxlen=l;
       strcpy(b,a);
     }
    }
    cout<<"string is: "<<b<<" length: "<<maxlen<<endl;
}