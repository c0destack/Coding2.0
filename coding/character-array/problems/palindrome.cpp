#include<bits/stdc++.h>
using namespace std;

bool palindrome(char a[], int l){
int i=0,j=l-1;
while(i<j){
  if(a[i]!=a[j]) return false;
  i++;j--;
}
return true;
}
int main(){
    char a[100];
    cin>>a;
    int l=strlen(a);
   cout<< palindrome(a,l)<<endl;
}