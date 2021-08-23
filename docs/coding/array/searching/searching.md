# Searching Problems

1. [linear search](#linear-search)
1. [binary search](#binary-search)
1. [pair with given sum](#pair-with-given-sum)

#### Linear Search
Search for the given element in the unsorted array
??? info "View the code"
    ```c++
    #include<bits/stdc++.h>
    using namespace std;

    int search(int a[],int n, int x){
        for(int i=0;i<n;i++){
            if(a[i]==x) return i;
        }
        return -1;
    }

    int main(){
        int n;
        cout<<"enter size"<<endl;
        cin>>n;
        int a[n];
        cout<<"enter "<<n<<" elements"<<endl;
        for(int i=0;i<n;i++) cin>>a[i];
        cout<<"enter element to search"<<endl;
        int x;cin>>x;
        cout<<search(a,n,x);
    }
    ```

#### Binary Search
Search for the given element in sorted array
??? info "View the code"
    ```c++
    #include<bits/stdc++.h>
    using namespace std;

    int search(int a[],int n, int x){
        int s=0;
        int e = n-1;
        while(s<=e){
            int m = (s+e)/2;
            if(a[m] == x) return m;
            else if(a[m]>x) e =m-1;
            else s= m+1;
        }
        return -1;
    }

    int main(){
        int n;
        cout<<"enter size"<<endl;
        cin>>n;
        int a[n];
        cout<<"enter "<<n<<" elements"<<endl;
        for(int i=0;i<n;i++) cin>>a[i];
        cout<<"enter element to search"<<endl;
        int x;cin>>x;
        cout<<search(a,n,x);
    }
    ```

#### Pair with given sum
Find all the pairs with given sum
??? info "View the code"
    ```c++
    #include<bits/stdc++.h>
    using namespace std;

    void search(int a[],int n, int x){
        int l=0,r=n-1;
        while(l<r){
            int val = a[l]+a[r];
            if(val==x){
                cout<<a[l]<<" "<<a[r]<<endl;
                l++;r--;
            } else if (val > x){
                r--;
            } else{
                l++;
            }
        }
    }

    int main(){
        int n;
        cout<<"enter size"<<endl;
        cin>>n;
        int a[n];
        cout<<"enter "<<n<<" elements"<<endl;
        for(int i=0;i<n;i++) cin>>a[i];
        cout<<"enter element to search"<<endl;
        int x;cin>>x;
        search(a,n,x);
    }
    ```

