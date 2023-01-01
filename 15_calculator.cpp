//Implement a simple calculator
#include <iostream>

using namespace std;


int main(){
    float n1,n2;
    cout<<"Input first numer = ";cin>>n1;
    cout<<"Input second number = ";cin>>n2;

    char op;
    cout<<"Enter a operator( + , - , * , / , % , // ) = ";
    cin>>op;

    switch(op)
    {
        case '+':
        cout<<"Sum of two numbers ="<<n1+n2<<endl; 
        break;
        
        case '-':
        cout<<n1<<"-"<<n2<<" = "<<n1-n2<<endl; 
        break;

        case '*':
        cout<<n1<<"*"<<n2<<" = "<<n1*n2<<endl;
        break;

        case '/':
        cout<<n1<<"/"<<n2<<" = "<<n1/n2<<endl;
        break;

        // We can use %(Modulo) operator only if operand(number) is int type.
        /*case '%':
        cout<<n1<<"%"<<n2<<" = "<<n1%n2<<endl;
        break;*/

        // For floor division we have to use floor() function from cmath library
        /*case '//':
        cout<<n1<<"%"<<n2<<" = "<< n1//n2 <<endl;
        break;*/

        default :
        cout<<"Error! Operator is not correct"<<endl;
    }

return 0;      

}