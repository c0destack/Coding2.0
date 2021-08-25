# Introduction

- Character array stores the characters of fixed size
- It should be terminated by the null character('\0')
- `cout<<name-of-char-array>` prints the array content unlike int array which prints base address of the array. It uses operator overloading in case of char array
- `char a[]={'a','b','c','d'}`: sizeof array is 4. The `cout<<a` will keep printing characters until it find a null character
- `char a[]="abcd"`: sizeof array is 5. The `cout<<a` will print only `abcd` 

## Input
- `cin>>a;`: it reads the input until it recieved `\n` or `\t` character.
- `cin.getline(a,100,'\n')`: it reads the input until it recieved the `\n` chatracter

## Problems

1. [Palindrome](#palindrome)
1. [Remove duplicate characters](#remove-duplicate-characters)
1. [Largest string](#largest-string)

#### Palindrome
Find whether a character array is palindrome or not

??? info "View the code"
    ```c++
    #include<bits/stdc++.h>
    using namespace std;

    bool palindrome(char a[], int l){
    int i=0,j=l-1;
    while(i<j){
    if(a[i]!=a[j]) return false;
    i++;j--;
    }
    return true;
    }
    int main(){
        char a[100];
        cin>>a;
        int l=strlen(a);
    cout<< palindrome(a,l)<<endl;
    }
    ```

#### Remove duplicate characters
Remove the consecutive duplicates characters from the character array

??? info "View the code"
    ```c++
    #include<bits/stdc++.h>
    using namespace std;

    void duplicate(char a[], int l){
    int i=0;
    if (l==1 || l == 0){
        return;
    }
    for(int j=1;j<l;j++){
        if(a[i] != a[j]){
        a[++i]=a[j];
        }
    }
    a[i+1]='\0';
    }
    int main(){
        char a[100];
        cin>>a;
        int l=strlen(a);
        duplicate(a,l);
        cout<<a;
    }
    ```

#### Largest String
Find the largest string among million strings

??? info "View the code"
    ```c++
    #include<bits/stdc++.h>
    using namespace std;

    int main(){
        char a[100];
        char b[100];
        int n,maxlen=0;
        cin>>n;
        cin.get();
        while(n--){
        cin.getline(a,100);
        int l = strlen(a);
        if(l>maxlen){
        maxlen=l;
        strcpy(b,a);
        }
        }
        cout<<"string is: "<<b<<" length: "<<maxlen<<endl;
    }
    ```