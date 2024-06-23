#include<iostream>
using namespace std;
int add(int num1,int num2){
    return num1 + num2;
}
int add(int num1,int num2,int num3){
    return num1+num2+num3;
}
int main(){
    int num1,num2,num3;
    cout<<"[*] Enter three numbers:";
    cin>>num1>>num2>>num3;
    cout<<"Sum of "<<num1<<" and "<<num2<<" is "<<add(num1,num2)<<endl;
    cout<<"Sum of "<<num1<<", "<<num2<<" and "<<num3<<" is "<<add(num1,num2,num3);
    return 0;
}
