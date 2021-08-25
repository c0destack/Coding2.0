#include<bits/stdc++.h>
using namespace std;

int main(){
    string s1;
    string s2("hello");
    s2.append(" world");
    cout<<s2<<endl;

string::iterator itr;

for(itr = s2.begin(); itr != s2.end(); itr++){
     cout<<(*itr)<<endl;
}

for(auto c:s2){
    cout<<c<<endl;
}
}