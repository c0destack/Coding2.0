#include<bits/stdc++.h>
using namespace std;
int main() {
	string a;cin>>a;
	int n=a.length();
	cout<<a[0];
	int count=1;
	for(int i=0;i<n-1;i++){
		if(a[i]==a[i+1]) {count++;continue;}
		cout<<count<<a[i+1];
		count=1;
	}
	cout<<count;
	return 0;
}