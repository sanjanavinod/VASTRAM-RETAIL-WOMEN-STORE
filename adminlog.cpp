
#include "main.h"
#include "database.h"

void admin_menu()
{
  product a;
  int exit=0;
  do
  {

    system("cls");
    char ch2;
    cout<<"\n\n\n\tADMIN MENU";
    cout<<"\n\n\t1.ADD ITEM";
    cout<<"\n\n\t2.UPDATE ITEM STOCK";
    cout<<"\n\n\t3.MODIFY ITEM";
    cout<<"\n\n\t4.DELETE ITEM";
    cout<<"\n\n\t5.DISPLAY ITEM";
    cout<<"\n\n\t6.VIEW REPORTS";
    cout<<"\n\n\t7.EXIT";
    cout<<"\n\n\tEnter Your Choice: ";
    cin>>ch2;

    switch(ch2)
    {
        case '1':
               system("cls");
               choice();
               break;

        case '2':
               update();
               break;

        case '3':
            modify();
            break;

        case '4':
            deletepro();
            break;

        case '5':
            display();
            break;

        case '7':
            exit = 1;
            break;

        default:
            cout<<"\a";
            admin_menu();
       }
}while(exit==0);
}

