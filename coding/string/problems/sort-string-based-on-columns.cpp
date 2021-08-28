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