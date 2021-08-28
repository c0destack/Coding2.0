# Introduction

- Character array stores the characters of fixed size
- It should be terminated by the null character('\0')
- `cout<<name-of-char-array>` prints the array content unlike int array which prints base address of the array. It uses operator overloading in case of char array
- `char a[]={'a','b','c','d'}`: sizeof array is 4. The `cout<<a` will keep printing characters until it find a null character
- `char a[]="abcd"`: sizeof array is 5. The `cout<<a` will print only `abcd` 

## Input
- `cin>>a;`: it reads the input until it recieved `\n` or `\t` character.
- `cin.getline(a,100,'\n')`: it reads the input until it recieved the `\n` chatracter
