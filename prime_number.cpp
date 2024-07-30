//prime number
#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    int count=0;
    if(n<=0){
        cout<<"invalid number"<<endl;
    }
    else if(n==1){
        cout<<"entered number is prime number"<<endl;
    }
    else{
        for(int i=2;i<=n;i++){
            if(n%i==0){
                count++;
            }
            }
            if(count>1){
                cout<<"entered number is not prime number"<<endl;
            }
            else{
                cout<<"entered number is prime number"<<endl;
            }
    }
    return 0;
}
