#include<bits/stdc++.h>
using namespace std;
int main() {
	int t;cin>>t;
	while(t--){
	int n;cin>>n;
	int a[n],sum=0;
	for(int i=0;i<n;i++) {cin>>a[i];sum+=a[i];}
	int currmax=a[0],currmin=a[0],maxsofar=a[0],minsofar=a[0],ans=a[0];
	for(int i=1;i<n;i++){
		currmax=max(currmax+a[i],a[i]);
		maxsofar=max(maxsofar,currmax);
		currmin=min(currmin+a[i],a[i]);
		minsofar=min(minsofar,currmin);
	}
		if(minsofar==sum){
			ans=maxsofar;
		} else{
			ans=max(maxsofar,sum-minsofar);
		}
	cout<<ans<<endl;
	}

	return 0;
}