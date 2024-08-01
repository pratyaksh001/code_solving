#include<iostream>
using namespace std;

class myclass{
public:
void method(){
cout<<"this method is inside the class container"<<endl;
}
void function();
};
void myclass::function(){
cout<<"this method is outside the class container"<<endl;
}
int main(){
myclass ob1;
ob1.method();
ob1.function();
return 0;
}
