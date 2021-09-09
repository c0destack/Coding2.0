#include<bits/stdc++.h>
using namespace std;
bool comparator(string a,string b){
string ab=a+b;
string ba=b+a;
return (ab>ba);
}
int main() {
	int t;cin>>t;
	while(t--){
		int n;cin>>n;
		string a[n];
		for(int i=0;i<n;i++) cin>>a[i];
		sort(a,a+n,comparator);
		for(int i=0;i<n;i++)
		cout<<a[i];
		cout<<endl;
	}
	return 0;
}