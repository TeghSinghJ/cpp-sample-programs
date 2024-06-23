#include<iostream>
using namespace std;
int main(){
    // data_type variable_name;
    //data_type variable_name = value;
    string name;
    int age;
    string dept;
    float marks;
    char grade;
    cout<<"[*] Enter student name:";
    cin>>name;
    cout<<"[*] Enter student Department:";
    cin>>dept;
    cout<<"[*] Enter student age:";
    cin>>age;
    cout<<"[*] Enter student marks:";
    cin>>marks;
    cout<<"[*] Enter student grade:";
    cin>>grade;
    cout<<"--Student Information--"<<endl;
    cout<<"Name:"<<name<<endl;
    cout<<"Age:"<<age<<endl;
    cout<<"Dept:"<<dept<<endl;
    cout<<"Marks:"<<marks<<endl;
    cout<<"Grade:"<<grade<<endl;
    return 0;
}