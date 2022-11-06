
#include "main.h"
#include "database.h"
#include "billing.h"
void page1()
{
  char ch;
  cart c;
  do
    {
	  system("CLS");
	  cout<<"\n\n\n\tMAIN MENU";
	  cout<<"\n\n\t01. CUSTOMER";
	  cout<<"\n\n\t02. ADMIN";
	  cout<<"\n\n\t03. EXIT";
	  cout<<"\n\n\tPlease Select Your Option (1-3) ";
	  cin>>ch;

	  switch(ch)
	  {
		 case '1':
               system("CLS");
               c.buy();

			   break;
		  case '2':
		        admin_menu();
			    break;
		  case '3':
		        exit(0);
		  default :
		      cout<<"INVALID ENTRY";
	}
    }while(ch!='3');

}
