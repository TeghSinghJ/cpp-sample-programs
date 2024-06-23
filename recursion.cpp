#include<iostream>
using namespace std;
int count = 0;
void func(){
    if(count==5)    return;
    cout<<"Hi -"<<count+1 <<endl;
    count++;
    func();
    return ;
}
int main(){
    func();
    return 0;
}