#include <iostream>
using namespace std;

int main(){
    int age=20;
    int salary=30000;

    if(age>=18){
        if(salary>=25000){
            cout<<"loan approved";
        }
        else{
            cout<<"Not elegible";
        }
    }
    else{
        cout<<"Not eligible";
    }
    return 0;
}