#include<bits/stdc++.h>
using namespace std;

void sum(int a[],int b[], int m, int n){
	int i=m-1,j=n-1,k=0;
	int c[max(m,n)+1];
	int carry=0;
	while(i>=0&&j>=0){
		int val=a[i]+b[j]+carry;
		c[k++]=val%10;
		carry=val/10;
		i--;j--;
	}
	while(i>=0){
		int val=a[i]+carry;
		c[k++]=val%10;
		carry=val/10;
		i--;
	}
	while(j>=0){
		int val=b[j]+carry;
		c[k++]=val%10;
		carry=val/10;
		j--;
	}
	if(carry>0){
		c[k++]=carry%10;
		carry=carry/10;
	}
	for(int u=k-1;u>=0;u--){
		cout<<c[u]<<", ";
	}
	cout<<"END";
}

int main() {
	int m;cin>>m;
	int a[m];
	for(int i=0;i<m;i++) cin>>a[i];
	int n;cin>>n;
	int b[n];
	for(int i=0;i<n;i++) cin>>b[i];
	sum(a,b,m,n);
	return 0;
}