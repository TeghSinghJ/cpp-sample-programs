#include<iostream>
using namespace std;
int main(){
    int a = 10,b = 20;
    //Arithmetic : + , - ,*,/,%,++,--
    cout<<"Sum of "<<a<<" and "<<b<<" is "<<(a+b)<<endl;
    cout<<"Difference of "<<b<<" and "<<a<<" is "<<(b-a)<<endl;
    cout<<"Product of "<<a<<" and "<<b<<" is "<<(a*b)<<endl;
    cout<<"Division of "<<b<<" and "<<a<<" is "<<(b/a)<<endl;
    cout<<"Modulo of "<<a<<" and "<<b<<" is "<<(a%b)<<endl;
    cout<<"Increment of "<<a<<" is "<<(++a)<<endl;
    cout<<"Decrement of "<<b<<" is "<<(--b)<<endl;
    //Logical operators->&& || !
    int c= 30;
    cout<<((a>b) && (a>c))<<endl;//0
    cout<<((a>b) || (a>c))<<endl;//0
    cout<<!(a>b)<<endl;//1
    //Comparision Operators -> >, >= ,< ,<= ,==,!=
    c=11;
    cout<<(a>b)<<endl;//0
    cout<<(a>=b)<<endl;//0
    cout<<(a<b)<<endl;//1
    cout<<(a<=b)<<endl;//1
    cout<<(a==c)<<endl;
}