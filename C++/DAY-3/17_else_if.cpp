#include <iostream>
using namespace std;
int main(){
    int marks;
    cout<<"Enter marks: "<<endl;
    cin>>marks;

    if(marks>=90){
        cout<<"grade A";

    }
    else if(marks>=80){
        cout << "grade B";

    }
    else if(marks>=70){
        cout<<"grade c";
    }
    else if(marks>60){
        cout<<"grade d";
    }
    else{
        cout<<"Fail";
    }
    return 0;
}