#include<iostream>
#include<string>
using namespace std;
int main(){
    string name = "Tegh";
    //Size
    cout<<"Size of "<<name<<" is"<<name.size()<<endl;
    //swap
    string name2="Singh";
    cout<<"Before Swapping"<<endl;
    cout<<"Name1:"<<name<<"Name2:"<<name2<<endl;
    swap(name,name2);
    cout<<"After Swapping"<<endl;
    cout<<"Name1:"<<name<<"Name2:"<<name2<<endl;
    //empty()
    string name3="";
    cout<<"Name3="<<name3.empty()<<endl;
    cout<<"Name1="<<name.empty()<<endl;
    return 0;
}