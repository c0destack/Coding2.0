#include<bits/stdc++.h>
using namespace std;

bool palindrome(int a[], int l, int r){
	if(l>=r) return true;
	if(a[l]==a[r]) return palindrome(a,l+1,r-1);
	else{
		return false;
	}
}

int main() {
	int n;cin>>n;
	int a[n];
	for(int i=0;i<n;i++) cin>>a[i];
	if(palindrome(a,0,n-1)) cout<<"true";
	else cout<<"false";
	return 0;
}