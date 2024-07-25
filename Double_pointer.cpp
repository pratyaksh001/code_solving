#include <iostream>
using namespace std;

int main() {
    
    int* ptr;
    int var=10;
    ptr=&var;
    
    
    // pointer(pt) store the address of another pointer(ptr) and ptr hold the address of variable
    int **pt;
    pt=&ptr;
    
    
    cout<<"the value of the variable "<<var<<endl;
    cout<<"the value which is accessed by the pointer using * " <<*ptr<<endl;
    cout<<"the address of variable store in pointer ptr "<<ptr<<endl;
    cout<<"pointer(pt) store the address of another pointer(ptr) "<<pt<<endl;
    cout<<"pointer(pt)"<<**pt<<endl;

    return 0;
}
