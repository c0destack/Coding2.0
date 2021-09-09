#include<bits/stdc++.h>
using namespace std;
int find(string s,int k, char ch){
	int n=s.length();
	int ans=0;
	int l=0,r=0,count=0;
	while(r<n&&count<k){
		if(s[r]!=ch) count++;
        if(count==k) break;
		r++;
	}
	while(r<n){
        while(s[r+1]==ch&&r<n-1) r++;
		ans=max(ans,r-l+1);
		while(s[l]==ch&&l<r) l++;
		if(s[l]!=ch) l++;
		if(s[r+1]!=ch) r++;
	}
	ans=max(ans,r-l);
	return ans;
}
int main() {
	int k;cin>>k;
	string s;cin>>s;
	cout<<max(find(s,k,'a'),find(s,k,'b'));
	return 0;
}