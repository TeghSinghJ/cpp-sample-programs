#include<iostream>
using namespace std;

class Vehicle{
    protected:
        int wheels;

    public:
        string brand,color;
        void drive(){   
            cout<<"Car is driving"<<endl;
        }
        int getWheels(){
            return wheels;
        }
        void park(){
            cout<<"Car has parked"<<endl;
        }
};
class Car :public Vehicle{
    
};
int main(){
    Car obj;
    obj.drive();
    obj.park();
    // cout<<obj.getWheels();
    cout<<obj.color<<endl;
    cout<<obj.brand<<endl;
    // cout<<obj.wheels;
} 
