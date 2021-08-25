# Introduction

- String is a class which holds the character data.
- It contains constructor, destructor, and function. Which can used to perform CRUD operations. For more details [refer](https://www.cplusplus.com/reference/string/string/)

## Traverse

It uses iterator and for each loops to traverse the string
??? info "view the code"
    ```c++
    string::iterator itr;
    for(itr = s2.begin(); itr != s2.end(); itr++){
        cout<<(*itr)<<endl;
    }

    or

    for(auto c:s2){
        cout<<c<<endl;
    }
    ```