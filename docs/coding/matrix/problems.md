# Problems

1. [Max sum in sorted metrics](#max-sum-in-sorted-metrics)
1. [Rotate metrix](#rotate-metrix)
1. [Spiral print](#spiral-print)
1. [Staircase search](#staircase-search)
1. [Sum of all sub-metrix](#sum-of-all-sub-metrix)
1. [Wave print](#wave-print)
1. [Magical park](#magical-park)

#### Max sum in sorted metrics

Find the maximum sum sub-metrix in sorted metrix
??? info "View the code"
    ```c++
    #include<bits/stdc++.h>
    using namespace std;

    void input(int a[][100], int m , int n){
        for(int i=0;i<m;i++)
            for(int j=0;j<n;j++) cin>>a[i][j];
    }

    void display(int a[][100], int m ,int n){
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                cout<<a[i][j]<<" ";
            }
            cout<<endl;
        }
    }

    void Suffix(int suffix[][100], int a[][100], int m , int n){
        suffix[m-1][n-1] = a[m-1][n-1];
        // last row
        for(int i=n-2;i>=0;i--) suffix[m-1][i]+=suffix[m-1][i+1]+a[m-1][i];
        // last col
        for(int i=m-2;i>=0;i--) suffix[i][n-1]+=suffix[i+1][n-1]+a[i][n-1];
        
        for(int i=m-2;i>=0;i--){
            for(int j=n-2;j>=0;j--)
        suffix[i][j]+=suffix[i+1][j]+suffix[i][j+1]-suffix[i+1][j+1]+a[i][j];
        }
    }

    int sum1(int suffix[][100], int m, int n){
        int ans=0;
        for(int i=0;i<m;i++)
        for(int j=0;j<n;j++){
        ans=max(ans,suffix[i][j]);
        }
        return ans;
    }


    int main(){
        int m,n;cin>>m>>n;
        int a[m][100];
        int suffix[m][100]={0};
        input(a,m,n);
        Suffix(suffix,a,m,n);
        cout<<sum1(suffix,m,n)<<endl;
    }
    ```

#### Rotate metrix

Rotate the metrix by 90 degree
??? info "View the code"
    ```c++
    #include<bits/stdc++.h>
    using namespace std;

    void rotate(int a[][100], int n){
        for(int i=0;i<n;i++){
            int l=0,r=n-1;
            while(l<r){
                swap(a[i][l], a[i][r]);
                l++;r--;
            }
        }
    }

    void transpose(int a[][100], int n){
        for(int i=0;i<n;i++)
        for(int j=i+1;j<n;j++)
            swap(a[i][j], a[j][i]);
    }

    void display(int a[][100], int m ,int n){
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                cout<<a[i][j]<<" ";
            }
            cout<<endl;
        }
    }

    void input(int a[][100], int m , int n){
        int c=1;
        for(int i=0;i<m;i++)
            for(int j=0;j<n;j++) a[i][j]=c++;
    }

    int main(){
        int n;cin>>n;
        int a[n][100];
        input(a,n,n);
        rotate(a,n);
        transpose(a,n);
        display(a,n,n);
    }
    ```

#### Spiral print

Print the metrix in spiral form
??? info "View the code"
    ```c++
    #include<bits/stdc++.h>
    using namespace std;

    void input(int a[][100], int m , int n){
        int c=1;
        for(int i=0;i<m;i++)
            for(int j=0;j<n;j++) a[i][j]=c++;
    }

    void spiralPrint(int a[][100], int m , int n){
    int rs=0,cs=0,re=m-1,ce=n-1;
    while(rs<=re && cs <= ce){
        // print start row
        for(int i=cs;i<=ce;i++) cout<<a[rs][i]<<" ";
        rs++;
        // print end col
        for(int i=rs;i<=re;i++) cout<<a[i][ce]<<" ";
        ce--;

        if(re > rs){
        // print end row
        for(int i=ce;i>=cs;i--) cout<<a[re][i]<<" ";
        re--;
        }

        // print start col
        if(ce>cs){
        for(int i=re;i>=rs;i--) cout<<a[i][cs]<<" ";
        cs++;
        }
    }
    }

    int main(){
        int m,n;cin>>m>>n;
        int a[m][100];
        input(a,m,n);
        spiralPrint(a,m,n);
    }
    ```

#### Staircase search

Search the given key inside sorted metrics
??? info "View the code"
    ```c++
    #include<bits/stdc++.h>
    using namespace std;

    void search(int a[][100], int m, int n, int k){
    int i=0,j=n-1;
    while(i<m&&j<n){
        if(a[i][j]==k) {cout<<"i: "<<i<<", j: "<<j;return;}
        else if(a[i][j]<k){
        i++;
        } else{
            j--;
        }
    }
    cout<<"-1";
    }

    void display(int a[][100], int m ,int n){
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                cout<<a[i][j]<<" ";
            }
            cout<<endl;
        }
    }

    void input(int a[][100], int m , int n){
        int c=1;
        for(int i=0;i<m;i++)
            for(int j=0;j<n;j++) a[i][j]=c++;
    }

    void inputFromConcole(int a[][100], int m , int n){
        for(int i=0;i<m;i++)
            for(int j=0;j<n;j++) cin>>a[i][j];
    }

    int main(){
        int m,n,k;cin>>m>>n>>k;
        int a[m][100];
        inputFromConcole(a,m,n);
        search(a,m,n,k);
    }
    ```

#### Sum of all sub-metrix

Find the sum of all sub-metrices
??? info "View the code"
    ```c++
    #include<bits/stdc++.h>
    using namespace std;

    void input(int a[][100], int m , int n){
        int c=1;
        for(int i=0;i<m;i++)
            for(int j=0;j<n;j++) a[i][j]=c++;
    }

    void display(int a[][100], int m ,int n){
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                cout<<a[i][j]<<" ";
            }
            cout<<endl;
        }
    }

    void Prefix(int prefix[][100], int a[][100], int m , int n){
        prefix[0][0] = a[0][0];
        // first row
        for(int i=1;i<n;i++) prefix[0][i]+=prefix[0][i-1]+a[0][i];
        // first col
        for(int i=1;i<m;i++) prefix[i][0]+=prefix[i-1][0]+a[i][0];
        
        for(int i=1;i<m;i++){
            for(int j=1;j<n;j++)
        prefix[i][j]+=prefix[i-1][j]+prefix[i][j-1]-prefix[i-1][j-1]+a[i][j];
        }
    }

    int sum1(int prefix[][100], int m, int n){
        int ans=0;
        for(int xl=0;xl<m;xl++){
            for(int yl=0;yl<n;yl++){
                for(int xr=xl;xr<m;xr++){
                    for(int yr=yl;yr<n;yr++){
                        ans+=prefix[xr][yr];    
                        if(xl>0&&yl>0){
                            ans+=prefix[xl-1][yl-1];
                        }
                        if(xl>0){
                            ans-=prefix[xl-1][yr];
                        }
                        if(yl>0){
                            ans-=prefix[xr][yl-1];
                        }
                    }
                }
            }
        }
        return ans;
    }

    int sum2(int a[][100], int m, int n){
        int ans=0;
        for(int l=0;l<m;l++){
            for(int r=0;r<n;r++){
            ans+=a[l][r]*((l+1)*(r+1))*((m-l)*(n-r));
            }
        }
        return ans;
    }

    int main(){
        int m,n;cin>>m>>n;
        int a[m][100];
        int prefix[m][100]={0};
        input(a,m,n);
        Prefix(prefix,a,m,n);
        cout<<sum1(prefix,m,n)<<endl;;
        cout<<sum2(a,m,n);
    }
    ```

#### Wave print

Print the metrics in the wave form
??? info "View the code"
    ```c++
    #include<bits/stdc++.h>
    using namespace std;

    void input(int a[][100], int m , int n){
        int c=1;
        for(int i=0;i<m;i++)
            for(int j=0;j<n;j++) a[i][j]=c++;
    }

    void wavePrint(int a[][100], int m , int n){
    int col=0;
    while(col<n){
        if(col%2==0){
            for(int i=0;i<m;i++) cout<<a[i][col]<<" ";
            cout<<endl;
        } else{
                for(int i=m-1;i>=0;i--) cout<<a[i][col]<<" ";
            cout<<endl;
        }
        col++;
    }
    }

    int main(){
        int m,n;cin>>m>>n;
        int a[m][100];
        input(a,m,n);
        wavePrint(a,m,n);
    }
    ```

#### Magical park

??? info "View the code"
    ```c++
    #include<bits/stdc++.h>
    using namespace std;

    void ans(char a[][100], int m , int n, int s, int k){
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            if(s<k){cout<<"No";return;}
            if(a[i][j]=='.'){
            s-=2;
            } else if(a[i][j]=='*'){
                s+=5;
            } else{
                break;
            }
            if(j!=(n-1)){
            s--;
            }
        }
    }

    if(s>k){
        cout<<"Yes "<<s;
    } else{
        cout<<"No";
    }
    }

    int main(){
        int m,n,k,s;cin>>m>>n>>k>>s;
        char a[m][100];
        for(int i=0;i<m;i++)
        for(int j=0;j<n;j++) cin>>a[i][j];
        ans(a,m,n,s,k);
    }
    ```