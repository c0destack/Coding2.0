#include<bits/stdc++.h>
using namespace std;
int main() {
	int m,n;cin>>m>>n;
	int a[m][n];
	for(int i=0;i<m;i++)
	for(int j=0;j<n;j++) cin>>a[i][j];
	int startRow=0,startCol=0,endRow=m-1,endCol=n-1;
	while(startRow<=endRow&&startCol<=endCol){
		// print start col
		for(int i=startRow;i<=endRow;i++) {
			cout<<a[i][startCol]<<", ";
		}
		startCol++;
		// print end row
		for(int i=startCol;i<=endCol;i++){
			cout<<a[endRow][i]<<", ";
		}
		endRow--;
		if(startCol<=endCol){
		// print end col
		for(int i=endRow;i>=startRow;i--) {
			cout<<a[i][endCol]<<", ";
		}
		endCol--;
		}
		// print start row
		if(startRow<=endRow){
		for(int i=endCol;i>=startCol;i--){
			cout<<a[startRow][i]<<", ";
		}
		startRow++;
		}
    
	}
	cout<<"END";
	return 0;
}