#include "main.h"
#include "database.h"
#include "billing.h"

void dealer()
{
  char ch;
  do
    {
	  system("CLS");
	  cout<<"\n\n\n\tDEALER MENU";
	  cout<<"\n\n\t01. PRODUCT DISPLAY";
	  cout<<"\n\n\t02. BILLING";
	  cout<<"\n\n\t03. EXIT";
	  cout<<"\n\n\tPlease Select Your Option (1-3) ";
	  cin>>ch;

	  switch(ch)
	  {
		 case '1':
                system("CLS");
               // display();
			    break;
		  case '2':
               // biller();
			    break;
		  case '3':
		        break;
		  default :
		      cout<<"INVALID ENTRY";
	}
    }while(ch!='3');

}


