#include "login.h"



bool loggedIn()
{
    string username,un;
    char password[32];
    string pw;


    cout<<"\nEnter username: ";
    cin>>username;
    cout<<"\nEnter password: ";
    int i = 0;
    char a;//a Temp char
    for(i=0;;)//infinite loop
    {
        a=getch();//stores char typed in a
        if((a>='a'&&a<='z')||(a>='A'&&a<='Z')||(a>='0'&&a<='9'))
            //check if a is numeric or alphabet
        {
            password[i]=a;//stores a in pass
            ++i;
            cout<<"*";
        }
        if(a=='\b'&&i>=1)//if user typed backspace
            //i should be greater than 1.
        {
            cout<<"\b \b";//rub the character behind the cursor.
            --i;
        }
        if(a=='\r')//if enter is pressed
        {
            password[i]='\0';//null means end of string.
            break;//break the loop
        }
    }

    ifstream read("username.txt");
    getline(read,un);
    getline(read,pw);

    if(un == username && pw==password)
    {
        return true;
    }
    else
    {
        return false;
    }

}


