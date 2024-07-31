#include <iostream>
#include <string>
using namespace std;

class myclass{
public:
int cost;
int power;
string colour;
string carname;
};

int main(){
myclass obj1; //intialize object
obj1.cost=15;
obj1.colour="black";
obj1.carname="audi";
myclass obj2;
obj2.cost=10;
obj2.colour="blue";
obj2.carname="mahindra";
//access class member attribute with object obj1
cout<<obj1.carname<<endl;
cout<<obj1.colour<<"\n";
cout<<obj1.cost<<endl;
cout<<"\n";
//access class member attribute with object obj2
cout<<obj2.carname<<endl;
cout<<obj2.colour<<endl;
cout<<obj2.cost<<endl; 


return 0;
}
