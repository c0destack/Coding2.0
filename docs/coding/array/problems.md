# Problems

1. ### Searching Problems

    1. [linear search](#linear-search)
    1. [binary search](#binary-search)
    1. [pair with given sum](#pair-with-given-sum)

1. ### Sorting Problems

    1. [selection sort](#selection-sort)
    1. [bubble sort](#bubble-sort)
    1. [insertion sort](#insertion-sort)

1. ### SubArray Problems

    1. [print all subarrays](#print-all-subarrays)
    1. [maximum sum subarray](#maximum-sum-subarray)

## Searching 

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

## Sorting 

#### Selection Sort
Sort the array using selection sort
??? info "View the code"

    ```c++
    #include<bits/stdc++.h>
    using namespace std;

    void asc(int a[],int n){
        for(int i=0;i<n-1;i++){
            int min_element =i;
            for(int j=i+1;j<n;j++){
                if (a[j]<a[min_element]){
                    min_element = j;
                }
            }
            int temp = a[min_element];
            a[min_element]= a[i];
            a[i]= temp;
        }
    }

    void desc(int a[],int n){
        for(int i=0;i<n-1;i++){
            int max_element =i;
            for(int j=i+1;j<n;j++){
                if (a[j]>a[max_element]){
                    max_element = j;
                }
            }
            int temp = a[max_element];
            a[max_element]= a[i];
            a[i]= temp;
        }
    }

    int main(){
        int n;
        cout<<"enter size"<<endl;
        cin>>n;
        int a[n];
        cout<<"enter "<<n<<" elements"<<endl;
        for(int i=0;i<n;i++) cin>>a[i];
        cout<<"input 1 for asc order"<<endl<<"enter 2 for desc order"<<endl;
        int x;cin>>x;
        if(x==1){
            asc(a,n);        
        } else{
            desc(a,n);
        }
        for(int i=0;i<n;i++) cout<<a[i]<<" ";
    }
    ```
#### Bubble Sort
Sort the array using bubble sort
??? info "View the code"
    ```c++
    #include<bits/stdc++.h>
    using namespace std;

    void asc(int a[],int n){
        for(int i=0;i<n-1;i++){
            for(int j=0;j<n-i-1;j++){
                if (a[j]>a[j+1]){
                    int temp = a[j];
                    a[j]= a[j+1];
                    a[j+1]= temp;
                }
            }
        }
    }

    void desc(int a[],int n){
        for(int i=0;i<n-1;i++){
            for(int j=0;j<n-i-1;j++){
                if (a[j]<a[j+1]){
                    int temp = a[j];
                    a[j]= a[j+1];
                    a[j+1]= temp;
                }
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
        cout<<"input 1 for asc order"<<endl<<"enter 2 for desc order"<<endl;
        int x;cin>>x;
        if(x==1){
            asc(a,n);        
        } else{
            desc(a,n);
        }
        for(int i=0;i<n;i++) cout<<a[i]<<" ";
    }
    ```

#### Insertion Sort
Sort the array using insertion sort
??? info "View the code"
    ```c++
    #include<bits/stdc++.h>
    using namespace std;

    void asc(int a[],int n){
        for(int i=1;i<=n-1;i++){
            int j=i-1;
            int key = a[i];
            while(j>=0 && a[j]> key){
                a[j+1]=a[j];
                j--;
            }
            a[j+1] = key;
        }
    }

    void desc(int a[],int n){
    for(int i=1;i<=n-1;i++){
            int j=i-1;
            int key = a[i];
            while(j>=0 && a[j]< key){
                a[j+1]=a[j];
                j--;
            }
            a[j+1] = key;
        }
    }

    int main(){
        int n;
        cout<<"enter size"<<endl;
        cin>>n;
        int a[n];
        cout<<"enter "<<n<<" elements"<<endl;
        for(int i=0;i<n;i++) cin>>a[i];
        cout<<"input 1 for asc order"<<endl<<"enter 2 for desc order"<<endl;
        int x;cin>>x;
        if(x==1){
            asc(a,n);        
        } else{
            desc(a,n);
        }
        for(int i=0;i<n;i++) cout<<a[i]<<" ";
    }
    ```

## Subarray

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