// Online C++ compiler to run C++ program online
#include <iostream>
#include <string>
#include <climits>
using namespace std;


int main() {
    //c style string
    // we create array of character in c and print with loop 
    char str[50]={"pratyaksh"};
    for(int i=0;i<sizeof(str);i++){
    cout<< str[i];
    }
    cout<<endl;
    
    //cpp string
    string st="pratyaksh";
    cout<<st<<endl;
    
    //repeat a character same again and again without looping
    string s(5,'a');
    cout<<s<<endl;
    return 0;
}
