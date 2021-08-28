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