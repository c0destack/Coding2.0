// calculate sum of all diagonal elements whose non-diagonal duplicates are odd
// time: O(N*N)
// extra space: O(n)
#include<bits/stdc++.h>
using namespace std;

int main(){
    int m,n;cin>>m>>n;
    map<int, int> freq;
    int matrix[m][n],ans=0;
    for(int i=0;i<m;i++)
        for(int j=0;j<n;j++) cin>>matrix[i][j];

    int l=max(m,n);
    if(m != n) freq[1]=0;
    int r=0;
    // mark the diagonal elements
    while(r<l){
       // principle diagonal
       if(r<m && r<n){
           freq[matrix[r][r]]=0;
    } 
    // secondary diagonal
    if(r<m && (l-r-1)<n){
        freq[matrix[r][(l-r-1)]]=0;
    } 
    r++;
    }

    // calculate freq of only diagonal elements
    for(int i=0;i<l;i++)
        for(int j=0;j<l;j++){
            if(i != j && (i+j+1)!=l){
                if(i<m && j<n){
                    if(freq[matrix[i][j]]!= -1)
                        freq[matrix[i][j]] = !freq[matrix[i][j]];
                } else{
                    freq[1] = !freq[1];
                }
             }
        }

    // sum of all diagonal elements
    r=0;
    while(r<=l){
        // principle diagonal
       if(r<m && r<n){
           if(freq[matrix[r][r]]){
            ans+=matrix[r][r];
        }
    } else{
       if(freq[1]){
            ans+=1;
        }
    }

    // skip diagonal intersecting point
    if((2*r+1)==l) {r++;continue;}

  // secondary diagonal
  if(r<m && (l-r-1)<n){
        if(freq[matrix[r][l-r-1]]){
            ans+=matrix[r][l-r-1];
        }
    } else{
       if(freq[1]){
            ans+=1;
        }
    }
    r++;
    }
    cout<<"ans: "<<ans<<endl;
}

// 1 2 3 4 1
// 5 5 5 5 1
// 7 5 9 9 1
// 3 2 1 4 1
// 1 9 4 2 1

