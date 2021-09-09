#include<bits/stdc++.h>
using namespace std;
int main() {
	int n;cin>>n;
	int a[n];
	for(int i=0;i<n;i++) cin>>a[i];
	int sum;cin>>sum;
	sort(a,a+n);
	for(int i=0;i<n-2;i++){
		int l=i+1,r=n-1;
		while(l<r){
			int u=a[l]+a[r];
			if(u==(sum-a[i])){
				cout<<a[i]<<", "<<a[l]<<", and "<<a[r]<<endl;
				l++;r--;
			}else if(u<(sum-a[i])){
				l++;
			} else{
				r--;
			}
		}
	}
	return 0;
}