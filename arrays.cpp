#include<iostream>
using namespace std;
int main(){
    int arr[5] ={1,2,5,20,25};
    for(int i=0;i<5;i++){
        cout<<arr[i]<<" ";
    }
    int matrix[3][3] = {{1,2,5},{2,3,5},{4,5,6}};
    cout<<endl<<matrix[1][1]<<endl;
    for(int r=0;r<3;r++){
        for(int c=0;c<3;c++){
            cout<<matrix[r][c]<<" ";
        }
        cout<<endl;
    }
}