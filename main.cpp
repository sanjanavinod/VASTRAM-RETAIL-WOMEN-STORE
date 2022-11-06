#include "main.h"
#include "login.h"


int main()
{
    int opt;
    system("CLS");
    cout<<"\n\t\t\t\t<<<<<MANAGEMENT SYSTEM>>>>>"<<endl;
    cout<<"\n\t\t\t---------------------------------------------"<<endl;
    cout<<"\n\n\n\t\t\t\t|1->REGISTER\n\t\t\t\t|2->LOGIN\n\t\t\t\t|3->EXIT";
    cout<<"\n\n\t\t\t\tEnter you choice:";
    cin>>opt;

    if(opt==1)
    {
        string username;
        char password[32];

        cout<<"\nSelect a username:";
        cin>>username;
        cout<<"\nSelect a password:";
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

        ofstream fil;
        fil.open("username.txt");
        fil<<username<<endl<<password;
        fil.close();
        main();
    }

    else if (opt==2)
    {
        bool status=loggedIn();

        if(!status)
        {
            cout<<"\nEither username or password is wrong!"<<endl;
            system("PAUSE");
        }
        else
        {
            cout<<"\nSuccesfully logged in!"<<endl;
            class product;
            page1();
        }
    }
}



