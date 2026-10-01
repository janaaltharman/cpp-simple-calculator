#include <iostream>
using namespace std;

int main(){
float num1,num2;
char oper;
cout<<"Enter your first number: "<<endl;
cin>>num1;
cout<<"Enter an operator (+,-,*,/): "<<endl;
cin>>oper;
cout<<"Enter your second number: "<<endl;
cin>>num2;


switch(oper){
    cout<<"Enter an operator (+,-,*,/);"<<endl;
    cin>>oper;

    case '+':
    cout<<num1+num2<<endl;
    break;

    case '-':
    cout<<num1-num2<<endl;
    break;

    case '*':
    cout<<num1*num2<<endl;
    break;

    case '/':
    cout<<num1/num2<<endl;
    break;
}


    return 0;
}
