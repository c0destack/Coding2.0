# Problems

1. [string tokeniser](#string-tokeniser)
1. [sort strings based on column](#sort-strings-based-on-column)

#### String Tokeniser

Design a string tokeniser function

??? info "View the code"
    ```c++
    #include<bits/stdc++.h>
    using namespace std;

    char * token(char *arr, char del){
    static char *curr=NULL;
    if(arr!=NULL){
        curr=arr;
    }

    if(curr==NULL) return NULL;

    char *out = new char[strlen(curr)+1];
    int i;
    for(i=0;curr[i]!='\0';i++){
        if(curr[i]!=del){
        out[i]=curr[i];
        } else{
            out[i]='\0';
            curr+=i+1;
            return out;
        }
    }
    out[i]='\0';
    curr=NULL;
    return out;
    }

    int main(){
        char s[100]="This is a string";
        char *ptr = token(s,' ');
        cout<<(ptr)<<endl;

        while(ptr!=NULL){
            ptr = token(NULL,' ');
            cout<<ptr<<endl;
        }
    }
    ```

#### sort strings based on column

Sort the strings based on following constraints:

  - `key`: short the string based on some key(column number)
  - `ordering`: order the string either by `numeric` comparision or `lexicographical` comparision 
  - `reversal`: reverse the array if provided as `true` else keep it in same order

??? info "View the code"
    ```c++
    #include<bits/stdc++.h>
    using namespace std;

    string getColumn(string s, int key){
        char *ans=strtok((char*)s.c_str()," ");
        while(key>1){
        ans=strtok(NULL," ");
        key--;
        }
        return (string)ans;
    }

    int stringToInt(string a){
        int n = a.length();
        int ans=0;
        int i=0,p=1;
        while(i<n){
            ans*=p;
            ans+=(a[i]-'0');
            i++;
            p*=10;
        }
        return ans;
    }

    bool compareNumeric(pair<string,string> a, pair<string,string> b){
    int key1=stringToInt(a.second);
    int key2=stringToInt(b.second);
    return (key1<key2);
    }

    bool compareLexicographically(pair<string,string> a, pair<string,string> b){
    return (a.second<b.second);
    }

    int main(){
        int n;cin>>n;
        cin.get();
        string a[n];
        for(int i=0;i<n;i++){
            getline(cin,a[i]);
        }
        int key;
        string reversal, ordering;
        cin>>key>>reversal>>ordering;
        pair <string,string> b[100];
        for(int i=0;i<n;i++){
            b[i].first = a[i];
            b[i].second = getColumn(a[i], key);
        }
        if(ordering=="numeric"){
            sort(b,b+n, compareNumeric);
        }else{
            sort(b,b+n, compareLexicographically);
        }

        if(reversal=="false"){
            for(int i=0;i<n;i++) cout<<b[i].first<<endl;
        }else{
            for(int i=n-1;i>=0;i--) cout<<b[i].first<<endl;
        }
    }
    ```