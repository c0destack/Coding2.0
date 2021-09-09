#include<bits/stdc++.h>
using namespace std;
int main() {
	int t;cin>>t;
	while(t--){
		int n;cin>>n;
		int a[n];
		for(int i=0;i<n;i++) cin>>a[i];
		int pre[n],suf[n];
		pre[0]=1,suf[n-1]=1;
		for(int i=1;i<n;i++){
			pre[i]=(a[i]>=a[i-1])?pre[i-1]+1:1;
		}
		for(int i=n-2;i>=0;i--){
			suf[i]=(a[i]>=a[i+1])?suf[i+1]+1:1;
		}
		int ans=pre[0]+suf[0]-1;
		for(int i=1;i<n;i++){
			ans=max(ans,pre[i]+suf[i]-1);
		}
		cout<<ans<<endl;
	}
	return 0;
}