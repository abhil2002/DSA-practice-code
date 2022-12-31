#include <iostream>

using namespace std;

int main(){

    char button;
    cout<<"Input a character = ";
    cin>>button;

    if (button == 'A')
    {
        cout<<"Hello"<<endl;
    }
    else if(button == 'B')
    {
        cout<<"Namaste"<<endl;
    }
    else if (button == 'C')
    {
        cout<<"Salut"<<endl;
    }
    else if (button == 'D')
    {
        cout<<"Hola"<<endl;
    }
    else if (button == 'E')
    {
        cout<<"Hey"<<endl;
    }
    else{
        cout<<"Iam still learning more"<<endl;
    
    }
    return 0;
}

