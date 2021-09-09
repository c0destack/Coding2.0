#include<bits/stdc++.h>
using namespace std;

int ans1(int a[], int n){
	int pre[n],suf[n];
	pre[0]=a[0];
	for(int i=1;i<n;i++) pre[i]=max(pre[i-1],a[i]);
	suf[n-1]=a[n-1];
    for(int i=n-2;i>=0;i--) suf[i]=max(suf[i+1],a[i]);
	int ans=0;
	for(int i=1;i<n-1;i++){
		int val=min(pre[i-1],suf[i+1]);
		if(val>a[i]){
			ans+=(val-a[i]);
		}
	}
	return ans;
}

int ans2(int a[],int n){
	int ans=0;
	int l=0,r=n-1;
	int ml=-1,mr=-1;
	while(l<r){
		if(a[l]<a[r]){
			if(a[l]>ml) ml=a[l];
			else{
				ans+=ml-a[l];
			}
			l++;
		} else{
			if(a[r]>mr) mr=a[r];
			else{
				ans+=mr-a[r];
			}
			r--;
		}
	}
	return ans;
}

int main() {
	int n;cin>>n;
	int a[n];
	for(int i=0;i<n;i++) cin>>a[i];
	cout<<ans2(a,n);
	return 0;
}