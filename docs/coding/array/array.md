# Introduction

- Array stores the continuous and homogenous data of the fixed size.
- It should be declared in the form of `<data-type> <name>[<size>]` i.e, `int arr[10]`

## Initialise

- **`int a[10]`**: It initialises all the array elements with garbage value
- **`int a[10]={5}`**: It initialises the first element by 5 and rest of the elements by 0
- **`int a[10]={5,2}`**: It initialises the first element by 5, second element by 2, and rest of the elements by 0

## Comparator

Comparator function can be passed inside inbuild sort() function to sort the array based on the condition provided inside comparator function.

#### sort the array based on last digit of each number
```
bool comparator(int a, int b){
    return b%10>a%10;
}
```

Pass the above function inside sort function. 
```
sort(a,a+n,comparator);
```

## Function As An Argument

Functions can be passed as an argument to another function in cpp. The `sort` function accepts comparator function as an argument. 

Using function as an argument to print all the odd numbers present inside the given array
??? info "View the code"
    ```c++
    // print all the odd numbers in the array
    #include<bits/stdc++.h>
    using namespace std;

    bool isOdd(int a){
        return a&1;
    }

    void printOddNumbers(int a[], int n, bool (&fun)(int a)){
        for(int i=0;i<n;i++){
            if(fun(a[i])){
                cout<<a[i]<<" ";
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
        printOddNumbers(a,n,isOdd);
    }
    ```
