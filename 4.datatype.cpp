#include <iostream>

using namespace std;


int main()
{

    int a; //declaration
    a = 12;  //initialisation

    cout<<"size of int = "<<sizeof(a)<<endl;

    float b;
    b = 24;
    cout<<"size of float= "<<sizeof(b)<<endl;

    char c;
    c = 5;
    cout<<"size of char = "<<sizeof(c)<<endl;

    bool d;
    cout<<"size of bool = "<<sizeof(d)<<endl;

    signed int SI;
    cout<<"size of signed int = "<<sizeof(SI)<<endl;

    unsigned int UI;
    cout<<"size of unsigned int = "<<sizeof(UI)<<endl;

    short int si;
    cout<<"size of short int = "<<sizeof(si)<<endl;

    long  LI=1;
    /* LI = 1; */
    cout<<"size of long int = "<<sizeof(1L)<<endl;
    
    return 0;
}