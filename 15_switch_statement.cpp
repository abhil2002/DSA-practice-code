#include <iostream>

using namespace std;

int main()
{
    char button;
    cin>>button;

    switch(button)
    {
        case 'a':
        cout<<"Namaste"<<endl;
        break;

        case 'b':
        cout<<"Hello"<<endl;
        break;

        case 'c':
        cout<<"Salute"<<endl;
        break;

        case 'd':
        cout<<"hola"<<endl;
        break;

        case 'e':
        cout<<"Hey"<<endl;
        break;

        default:
        cout<<"Im still learnin moore"<<endl;
        break;
    }

    return 0;

}