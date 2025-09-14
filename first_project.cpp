//***************** SIMPLE CALCULATOR *****************

#include <iostream>
using namespace std;
int main() {
    int choice;
    double num1,num2;
    cout<<"******Simple Calculator*****"<<endl;
    cout<<"Addition(+)"<<endl;
    cout<<"Substraction(-)"<<endl;
    cout<<"Multiplication(*)"<<endl;
    cout<<"Division(/)"<<endl;

    cout<<"Enter first number:";
    cin>>num1;
    cout<<"Enter second number:";
    cin>>num2;
    cout<<"Enter any of the four choices:";
    cin>>choice;
    switch(choice){
        case 1:
        cout<<"Result is   "<<num1+num2;
        break;
        case 2:
        cout<<"Result is   "<<num1-num2;
        break;
        case 3:
        cout<<"Result is   "<<num1*num2;
        break;
        case 4:
        if(num2 != 0)
        cout<<"Result is   "<<num1/num2;
        else
        cout<<"Error..";
        break;
        default:
        cout<<"Invalid  operation";
}
return 0;
}
    