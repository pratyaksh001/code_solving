// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;
int result,a=50,b=10;
int add(){
    result=a+b;
    return result;
}

int substraction(){
    result=a-b;
    return result;
}

int divide(){
    if(a and b > 0 ){
        result=a/b;
        return result;
    }
    else{
        cout<<"invalid choice"<<endl;
    }
    return 0;
}

int multiply(){
    result= a*b;
    return result;
}


int main() {
cout<<"enter the input operation symbol"<<endl;
char inp;
cin>>inp;
switch(inp){
    case '+':
    cout<<add()<<endl;
    break;
    
    case '-':
    cout<<substraction()<<endl;
    break;
    
    case '/':
    cout<<divide()<<endl;
    break;
    
    case '*':
    cout<<multiply()<<endl;
    break;
    
    default:
    cout<<"invalid choice"<<endl;
}

    return 0;
}
