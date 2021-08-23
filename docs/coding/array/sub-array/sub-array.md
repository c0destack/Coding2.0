# SubArray Problems

1. [print all subarrays](#print-all-subarrays)
1. [maximum sum subarray](#maximum-sum-subarray)

#### Print all subarrays

Print all the possible subarrays
??? info "View the code"
    ```c++
    #include<bits/stdc++.h>
    using namespace std;

    void printSubarray(int a[], int n){
        for(int i=0;i<n;i++){
            for(int j=i;j<n;j++){
                for(int k=i;k<=j;k++) cout<<a[k]<<" ";
                cout<<endl;
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
        printSubarray(a,n);
    }
    ```

#### Maximum sum subarray

Print the subarray with the maximum sum 
??? info "View the code"
    ```c++
    #include<bits/stdc++.h>
    using namespace std;

    void maxSumSubarray(int a[], int n){
        int ms=0,cs=0,e=0,s=0;
        for(int i=0;i<n;i++){
            cs = max(0,cs+a[i]);
            if (cs > ms){
                ms=cs;
                e=i;
            }
        }

        int temp=ms;
        s=e;
        while(s>=0){
            temp-=a[s];
            if(temp==0) break;
            s--;
        }

        cout<<"max sum"<<ms<<endl;
        for(int i=s;i<=e;i++) cout<<a[i]<<" ";
    }

    int main(){
        int n;
        cout<<"enter size"<<endl;
        cin>>n;
        int a[n];
        cout<<"enter "<<n<<" elements"<<endl;
        for(int i=0;i<n;i++) cin>>a[i];     
        maxSumSubarray(a,n);
    }
    ```