#include <iostream>
using namespace std;

int main(){

    int a,b,choice;
    cout<<"Enter two numbers: \n";
    cin>>a>>b;

    cout<<"1.addition \n";
    cout<<"2.subtraction \n";
    cout<<"3.multiply \n";
    cout<<"4.division \n";

    cout<<"Enter choice: \n";
    cin>>choice;

    switch(choice){
        case 1: 
        cout<<"Answer: "<<a+b;
        break;
        case 2:
        cout<<"Answer:"<<a-b;
        break;
        case 3:
        cout<<"Answer: "<<a*b;
        break;
        case 4:
        cout<<"Answer:"<<a/b;
        break;
        default :
        cout<<"Invalid choice";

    }
    return 0;

}