// print all the odd numbers in the array
#include<bits/stdc++.h>
using namespace std;

bool isOdd(int a){
    return a&1;
}

void printOddNumbers(int a[], int n, bool (&fun)(int a)){
    for(int i=0;i<n;i++){
        if(fun(a[i])){
            cout<<a[i]<<" ";
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
    printOddNumbers(a,n,isOdd);
}
