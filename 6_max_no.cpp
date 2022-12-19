#include <iostream>

using namespace std;

int main()
{
    int a,b,c;
    cout<<"Enter first number = ";cin>>a;
    cout<<"Enter second number = ";cin>>b;
    cout<<"Enter Third number = ";cin>>c;
    
    if(a>b){
        if (a>c){
            cout<<"Greatest no. is ="<<a;
        }
        else{
            cout<<"Greatest no is = "<<c;
        }
    }
    else{
        if (b>c){
        cout<<"Greatest no is = "<<b;
        }
        else{
            cout<<"Greatest no is = "<<c;
        }    
    }
    return 0;
}


