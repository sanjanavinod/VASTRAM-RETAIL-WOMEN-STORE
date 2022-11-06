#include "database.h"
#include "main.h"
#include<iomanip>

void choice()
{
    int exit = 0;
    product *ptr=NULL;
  do
  {

      system("cls");
      char ch2;
      cout<<"\n\n\n\tADD ITEM";
      cout<<"\n\n\t1. SAREES";
      cout<<"\n\n\t2. TOPS";
      cout<<"\n\n\t3. JEWELRY";
      cout<<"\n\n\t4. FOOTWEAR";
      cout<<"\n\n\t5. COSMETICS";
      cout<<"\n\n\t6. EXIT";
      cout<<"\n\n\tWHERE DO YOU WANT TO ADD? (1/2/3/4/5/6): ";
      cin>>ch2;

      switch(ch2)
      {
        case '1':
               system("cls");
               ptr = new saree();

               break;

        case '2':
               system("cls");
               ptr = new tops();
               break;

        case '3':
               system("cls");
               ptr = new jewel();
               break;

        case '4':
               system("cls");
               ptr = new foot();
               break;

        case '5':
               system("cls");
               ptr = new cosmetics();
               break;

        case '6':
            exit=1;
            continue;
      }

      ptr->create_product();
      ptr->write_product();
      ofstream file("log.txt",ios::out | ios::app);
      file << "Added Product \n" ;
      file.close();
      delete ptr;

  }while(exit==0);
}

void display()
{
  int exit = 0;
  product *ptr=NULL;

  do
  {

      system("cls");
      char ch2;
      cout<<"\n\n\n\tDISPLAY ITEMS";
      cout<<"\n\n\t1. SAREES";
      cout<<"\n\n\t2. TOPS";
      cout<<"\n\n\t3. JEWELRY";
      cout<<"\n\n\t4. FOOTWEAR";
      cout<<"\n\n\t5. COSMETICS";
      cout<<"\n\n\t6. EXIT";
      cout<<"\n\n\tWHAT DO YOU WANT TO DISPLAY? (1/2/3/4/5/6): ";
      cin>>ch2;

      switch(ch2)
      {
        case '1':
               system("cls");
               ptr = new saree();

               break;

        case '2':
               system("cls");
               ptr = new tops();
               //update();
               break;

        case '3':
               system("cls");
               ptr = new jewel();
               break;

        case '4':
               system("cls");
               ptr = new foot();
               break;

        case '5':
               system("cls");
               ptr = new cosmetics();
               break;

        case '6':
            exit=1;
            continue;
      }

      ptr->display_products();
      system("pause");
      delete ptr;

  }while(exit==0);
}

void update()
{
    int exit = 0;
    product *ptr=NULL;
    do
    {

      system("cls");
      char ch2;
      cout<<"\n\n\n\tUPDATE ITEM STOCK";
      cout<<"\n\n\t1. SAREES";
      cout<<"\n\n\t2. TOPS";
      cout<<"\n\n\t3. JEWELRY";
      cout<<"\n\n\t4. FOOTWEAR";
      cout<<"\n\n\t5. COSMETICS";
      cout<<"\n\n\t6. EXIT";
      cout<<"\n\n\tWHERE DO YOU WANT TO ADD? (1/2/3/4/5/6): ";
      cin>>ch2;

      switch(ch2)
      {
        case '1':
               system("cls");
               ptr = new saree();

               break;

        case '2':
               system("cls");
               ptr = new tops();
               break;

        case '3':
               system("cls");
               ptr = new jewel();
               break;

        case '4':
               system("cls");
               ptr = new foot();
               break;

        case '5':
               system("cls");
               ptr = new cosmetics();
               break;


        case '6':
            exit=1;
            continue;
      }

      ptr->update_product();
      ofstream file("log.txt",ios::out | ios::app);
      file << "Updated Stock \n" ;
      file.close();

      delete ptr;

  }while(exit==0);

}

void modify()
{
    int exit = 0;
     product *ptr=NULL;
    do
    {

      system("cls");
      char ch2;
      cout<<"\n\n\n\tMODIFY ITEM";
      cout<<"\n\n\t1. SAREES";
      cout<<"\n\n\t2. TOPS";
      cout<<"\n\n\t3. JEWELRY";
      cout<<"\n\n\t4. FOOTWEAR";
      cout<<"\n\n\t5. COSMETICS";
      cout<<"\n\n\t6. EXIT";
      cout<<"\n\n\tWHERE DO YOU WANT TO ADD? (1/2/3/4/5/6): ";
      cin>>ch2;

      switch(ch2)
      {
        case '1':
               system("cls");
               ptr = new saree();

               break;

        case '2':
               system("cls");
               ptr = new tops();
               //update();
               break;

        case '3':
               system("cls");
               ptr = new jewel();
               break;

        case '4':
               system("cls");
               ptr = new foot();
               break;

        case '5':
               system("cls");
               ptr = new cosmetics();
               break;

        case '6':
            exit=1;
            continue;
      }

      ptr->modify_product();
      ofstream file("log.txt",ios::out | ios::app);
      file << "Modify Product \n" ;
      file.close();

      delete ptr;

  }while(exit==0);

}

void deletepro()
{
    int exit = 0;
     product *ptr=NULL;
    do
    {

      system("cls");
      char ch2;
      cout<<"\n\n\n\tDELETE ITEM";
      cout<<"\n\n\t1. SAREES";
      cout<<"\n\n\t2. TOPS";
      cout<<"\n\n\t3. JEWELRY";
      cout<<"\n\n\t4. FOOTWEAR";
      cout<<"\n\n\t5. COSMETICS";
      cout<<"\n\n\t6. EXIT";
      cout<<"\n\n\tWHERE DO YOU WANT TO ADD? (1/2/3/4/5/6): ";
      cin>>ch2;

      switch(ch2)
      {
        case '1':
               system("cls");
               ptr = new saree();

               break;

        case '2':
               system("cls");
               ptr = new tops();
               break;

        case '3':
               system("cls");
               ptr = new jewel();
               break;

        case '4':
               system("cls");
               ptr = new foot();
               break;

        case '5':
               system("cls");
               ptr = new cosmetics();
               break;

        case '6':
            exit=1;
            continue;
      }

      ptr->delete_product();
      ofstream file("log.txt",ios::out | ios::app);
      file << "Deleted Product \n" ;
      file.close();
      delete ptr;

  }while(exit==0);

}

//-------------------------------------------------------PRODUCT-CLASS-START----------------------------------------------------------

void product::create_product()
	{
	 cout<<"\nEnter The Product No:";
	 cin>>pno;
	 cout<<"\n\nEnter The Name of The Product: ";
	 fflush(stdin);
	 gets(name);
	 cout<<"\nEnter The Price of The Product :";
	 cin>>price;
	 cout<<"\nEnter The Product Stock:";
	 cin>>stock;
	 //cout<<"\nEnter The Discount (%) ";
	 //cin>>dis;
	 }

void product::show_product()
	{
	 cout<<"\nThe Product No. of The Product : "<<pno;
	 cout<<"\nThe Name of The Product : "<<name;
	 cout<<"\nThe Price of The Product : "<<price;
	 cout<<"\nThe Product Stock:"<<stock;
	// cout<<"\nDiscount : "<<dis;
	 }

//-------------------------------------------------------PRODUCT-CLASS-END----------------------------------------------------------

//------------------------------------------------------SAREE-START--------------------------------------------------------------------------

void saree::create_product()
{
    product::create_product();
    cout<<"\nEnter The Type of Wash:";
    fflush(stdin);
    gets(wash);
}

void saree::update_product()
{
    fstream fp;
    int no,found=0;
    saree pr;
    system("cls");
    cout<<"\n\n\tTo Update Stock ";
    cout<<"\n\n\tPlease Enter The Product No. of The Product: ";
    cin>>no;
    fp.open("saree.dat",ios::in|ios::out|ios::ate);
    fp.seekg(0,ios::beg);
    while(fp.read((char*)&pr,sizeof(saree)) && found==0)
	   {
	    if(pr.pno==no)
		   {
		       int exit=0;
                do
                  {

                      system("cls");
                      pr.show_product();
                    //cout<<"\nPlease Enter The New Details of Product"<<endl;
                    int new_stock,cho;

                    cout<<"\n\nDo you want to \n\n1.ADD \n\n2.SUBTRACT \n\n3.EXIT  \n\nEnter your choice(1/2/3): ";
                    cin>>cho;
                    switch(cho)
                    {
                        case 1:
                            cout << "\nEnter new STOCK to be added: ";
                            cin >> new_stock;
                            pr.stock+=new_stock;
                            break;
                        case 2:
                            cout << "\nEnter new STOCK to be subtracted: ";
                            cin >> new_stock;
                            pr.stock-=new_stock;
                            break;
                        case 3:
                            exit=1;
                            break;
                        default:
                            cout<<"\nINVALID CHOICE...";
                    }


                    int pos=-1*sizeof(pr);
                    fp.seekp(pos,ios::cur);
                    fp.write((char*)&pr,sizeof(saree));
                    cout<<"\n\n\t Record Updated";
                    found=1;
               }while(exit==0);
               }
	     }
    fp.close();
    if(found==0)
    cout<<"\n\n Record Not Found ";
    getch();
}

void saree::write_product()
   {
    fstream fp;
    fp.open("saree.dat",ios::out|ios::app);

    if(!fp)
    {
        cout<<"Error in creating file!!";
    }
    //pr.create_product();
    fp.write((char*)this,sizeof(saree));
    fp.close();
    cout<<"\n\nThe Product Has Been Created ";
    getch();
   }

void saree::display_products()
{
    system("cls");

    cout <<endl <<  std::setfill( '-' ) << std::setw( 104 ) << '-'
               << std::setfill(' ') << std::endl;
    cout  << "| " << setw(5) << left <<"PNO" << "| " << setw(30) << left << "NAME"
        << "| " << setw(20) << left << "PRICE" << "| " << setw(20) << left << "STOCK" << "|" << setw(20) << left << "TYPE OF WASH" << "|";
    cout << endl << std::setfill( '-' ) << std::setw( 104 )
              << '-' ;

    cout << endl << std::setfill(' ')<< "| " << setw(102) << left <<"COTTON SAREES" << "| ";
    cout << endl <<  std::setfill( '-' ) << std::setw( 104 ) << '-'
               << std::setfill(' ') ;
    displayrange(1001,1100);
    cout << "| " << setw(102) << left <<"KALANKARI SAREES" << "| ";
    cout <<endl <<  std::setfill( '-' ) << std::setw( 104 ) << '-'
               << std::setfill(' ') ;
    displayrange(1101,1200);
    cout << "| " << setw(102) << left <<"KANJEEVARAM SAREES" << "| ";
    cout <<endl <<  std::setfill( '-' ) << std::setw( 104 ) << '-'
               << std::setfill(' ') ;
    displayrange(1201,1300);
    cout << "| " << setw(102) << left <<"SYNTHETIC SAREES" << "| ";
    cout <<endl <<  std::setfill( '-' ) << std::setw( 104 ) << '-'
               << std::setfill(' ') ;
    displayrange(1301,1400);
    cout << "| " << setw(102) << left <<"CHIFFON SAREES" << "| ";
    cout <<endl <<  std::setfill( '-' ) << std::setw( 104 ) << '-'
               << std::setfill(' ') ;
    displayrange(1401,1500);

}

void saree:: displayrange(int a, int b)
{
    ifstream file("saree.dat",ios::in);
    if(!file)
    {
        cout << "The file doesn't exist.";
        return;
    }
    saree c;

    while(true)
    {
        file.read((char*)&c,sizeof(saree));
        if(!file)
            break;
        else
        {
            if(c.pno >=a && c.pno <=b)
            cout << endl << std::setfill(' ') << "| " << setw(5) << left <<c.pno << "| "
            << setw(30) << left << c.name << "| "
            << setw(20) << left << c.price << "| "
            << setw(20) << left << c.stock << "|"
            << setw(20) << left << c.wash<< "|";
        }
    }
    cout <<endl <<  std::setfill( '-' ) << std::setw( 104 ) << '-'<< std::setfill(' ')
               << std::endl;
    file.close();

}

void saree:: display(char*name)
{
    ifstream file("saree.dat",ios::in);
    if(!file)
    {
        cout << "The file doesn't exist.";
        return;
    }
    saree c;
    cout << "| " << setw(81) << "SAREES" << "| ";
    cout <<endl <<  std::setfill( '-' ) << std::setw( 83 ) << '-'<< std::setfill(' ');
    while(true)
    {
        file.read((char*)&c,sizeof(saree));
        if(!file)
            break;
        else
        {
            char name1[20];
            strcpy(name1,c.name);
            if(name!=NULL)
            {if(strstr(name1,name))
            cout << endl << std::setfill(' ') << "| " << setw(5) << left <<c.pno << "| "
            << setw(30) << left << c.name << "| "
            << setw(20) << left << c.price << "| "
            << setw(20) << left << c.stock << "| ";}
            else
                cout << endl << std::setfill(' ') << "| " << setw(5) << left <<c.pno << "| "
            << setw(30) << left << c.name << "| "
            << setw(20) << left << c.price << "| "
            << setw(20) << left << c.stock << "| ";
        }
    }
    cout <<endl <<  std::setfill( '-' ) << std::setw( 83 ) << '-'<< std::setfill(' ')
               << std::endl;
    file.close();

}
int saree::display_products_minimal(char*name)
{
    ifstream file("saree.dat",ios::in);
    saree c;
    int count=0;
    while(true)
    {
        file.read((char*)&c,sizeof(saree));
        if(!file)
            break;
        else
        {
            char name1[20];
            strcpy(name1,c.name);
            if(strstr(name1,name))
            {
                cout << setw(30) << c.name << "SAREE\n";
                count++;
            }
        }
    }
    file.close();
    return count;

}

void saree::modify_product()
{
    fstream fp;
    int no,found=0;
    saree pr;
    system("cls");
    cout<<"\n\n\tTo Modify ";
    cout<<"\n\n\tPlease Enter The Product No. of The Product: ";
    cin>>no;
    fp.open("saree.dat",ios::in|ios::out|ios::ate);
    fp.seekg(0,ios::beg);
    while(fp.read((char*)&pr,sizeof(saree)) && found==0)
	   {
	    if(pr.pno==no)
		   {
                //cout<<"\nPlease Enter The New Details of Product"<<endl;
                int exit=0;
                do
                  {

                      system("cls");
                      pr.show_product();
                      char ch2;
                      cout<<"\n\n\n\tMODIFY ITEMS";
                      cout<<"\n\n\t1.PNO";
                      cout<<"\n\n\t2 NAME";
                      cout<<"\n\n\t3 PRICE";
                      cout<<"\n\n\t4 STOCK";
                      cout<<"\n\n\t5 TYPE OF WASH";
                      cout<<"\n\n\t6.EXIT";
                      cout<<"\n\n\tWHICH DO YOU WANT TO MODIFY? (1/2/3/4/5/6): ";
                      cin>>ch2;

                      switch(ch2)
                      {
                        case '1':

                               cout << "\nEnter new PNO: ";
                               cin >> pr.pno;


                               break;

                        case '2':
                               cout << "\nEnter new NAME: ";
                               fflush(stdin);
                               gets(pr.name);
                               break;

                        case '3':

                               cout << "\nEnter new PRICE: ";
                               cin >> pr.price;


                               break;

                        case '4':

                               cout << "\nEnter new STOCK: ";
                               cin >> pr.stock;


                               break;

                        case '5':

                               cout<<"\nEnter The Type of Wash:";
                               fflush(stdin);
                               gets(pr.wash);


                               break;

                        case '6':
                            exit=1;
                            continue;
                      }

                  }while(exit==0);

                int pos=-1*sizeof(pr);
                fp.seekp(pos,ios::cur);
                fp.write((char*)&pr,sizeof(saree));
                cout<<"\n\n\t Record Updated";
                found=1;
		   }
	     }
    fp.close();
    if(found==0)
    cout<<"\n\n Record Not Found ";
    getch();
}

void saree :: delete_product()
{
    system("cls");
    int no;
    cout<<"\n\n\tTo Delete ";
    cout<<"\n\n\tPlease Enter The Product No. of The Product: ";
    cin>>no;
    ifstream file("saree.dat",ios::in);
    ofstream temp("temp.dat",ios::out);
    saree c;
    while(true)
    {
        file.read((char*)&c,sizeof(saree));
        if(!file)
            break;
        else
            if(c.pno == no)
                continue;
        temp.write((char*)&c,sizeof(saree));

    }
    file.close();
    temp.close();
    remove("saree.dat");
    rename("temp.dat","saree.dat");

}

//------------------------------------------------------SAREE-OVER--------------------------------------------------------------------------

//------------------------------------------------------TOPS-START--------------------------------------------------------------------------

void tops::create_product()
{
    product::create_product();
    cout<<"\nEnter The SIZE:";
    fflush(stdin);
    gets(size1);
}

void tops::update_product()
{
    fstream fp;
    int no,found=0;
    tops pr;
    system("cls");
    cout<<"\n\n\tTo Update Stock ";
    cout<<"\n\n\tPlease Enter The Product No. of The Product: ";
    cin>>no;
    fp.open("tops.dat",ios::in|ios::out|ios::ate);
    fp.seekg(0,ios::beg);
    while(fp.read((char*)&pr,sizeof(tops)) && found==0)
	   {
	    if(pr.pno==no)
		   {
		       int exit=0;
                do
                  {

                      system("cls");
                      pr.show_product();
                    int new_stock,cho;

                    cout<<"\n\nDo you want to \n\n1.ADD \n\n2.SUBTRACT \n\n3.EXIT  \n\nEnter your choice(1/2/3): ";
                    cin>>cho;
                    switch(cho)
                    {
                        case 1:
                            cout << "\nEnter new STOCK to be added: ";
                            cin >> new_stock;
                            pr.stock+=new_stock;
                            break;
                        case 2:
                            cout << "\nEnter new STOCK to be subtracted: ";
                            cin >> new_stock;
                            pr.stock-=new_stock;
                            break;
                        case 3:
                            exit=1;
                            break;
                        default:
                            cout<<"\nINVALID CHOICE...";
                    }


                    int pos=-1*sizeof(pr);
                    fp.seekp(pos,ios::cur);
                    fp.write((char*)&pr,sizeof(tops));
                    cout<<"\n\n\t Record Updated";
                    found=1;
               }while(exit==0);
               }
	     }
    fp.close();
    if(found==0)
    cout<<"\n\n Record Not Found ";
    getch();
}

void tops::write_product()
   {
    fstream fp;
    fp.open("tops.dat",ios::out|ios::app);

    if(!fp)
    {
        cout<<"Error in creating file!!";
    }
    //pr.create_product();
    fp.write((char*)this,sizeof(tops));
    fp.close();
    cout<<"\n\nThe Product Has Been Created ";
    getch();
   }

void tops::display_products()
{
    system("cls");

    cout <<endl <<  std::setfill( '-' ) << std::setw( 104 ) << '-'
               << std::setfill(' ') << std::endl;
    cout  << "| " << setw(5) << left <<"PNO" << "| " << setw(30) << left << "NAME"
        << "| " << setw(20) << left << "PRICE" << "| " << setw(20) << left << "STOCK" << "|" << setw(20) << left << "SIZE" << "|";
    cout << endl << std::setfill( '-' ) << std::setw( 104 )
              << '-' ;

    cout << endl << std::setfill(' ')<< "| " << setw(102) << left <<"KURTI/KURTAS" << "| ";
    cout << endl <<  std::setfill( '-' ) << std::setw( 104 ) << '-'
               << std::setfill(' ') ;
    displayrange(2001,2100);
    cout << "| " << setw(102) << left <<"LOUNGE WEAR" << "| ";
    cout <<endl <<  std::setfill( '-' ) << std::setw( 104 ) << '-'
               << std::setfill(' ') ;
    displayrange(2101,2200);
    cout << "| " << setw(102) << left <<"SHRUGS" << "| ";
    cout <<endl <<  std::setfill( '-' ) << std::setw( 104 ) << '-'
               << std::setfill(' ') ;
    displayrange(2201,2300);
    cout << "| " << setw(102) << left <<"HOODIES" << "| ";
    cout <<endl <<  std::setfill( '-' ) << std::setw( 104 ) << '-'
               << std::setfill(' ') ;
    displayrange(2301,2400);
    cout << "| " << setw(102) << left <<"CARDIGANS" << "| ";
    cout <<endl <<  std::setfill( '-' ) << std::setw( 104 ) << '-'
               << std::setfill(' ') ;
    displayrange(2401,2500);

}

void tops :: displayrange(int a, int b)
{
    ifstream file("tops.dat",ios::in);
    if(!file)
    {
        cout << "\nThe file doesn't exist.\n";
        return;
    }
    tops c;

    while(true)
    {
        file.read((char*)&c,sizeof(tops));
        if(!file)
            break;
        else
        {
            if(c.pno >=a && c.pno <=b)
            cout << endl << std::setfill(' ') << "| " << setw(5) << left <<c.pno << "| "
            << setw(30) << left << c.name << "| "
            << setw(20) << left << c.price << "| "
            << setw(20) << left << c.stock << "|"
            << setw(20) << left << c.size1 << "|";
        }
    }
    cout <<endl <<  std::setfill( '-' ) << std::setw( 104 ) << '-'<< std::setfill(' ')
               << std::endl;
    file.close();

}
void tops:: display(char*name)
{
    ifstream file("tops.dat",ios::in);
    if(!file)
    {
        cout << "The file doesn't exist.";
        return;
    }
    tops c;
    cout << "| " << setw(81) << "TOPS" << "| ";
    cout <<endl <<  std::setfill( '-' ) << std::setw( 83 ) << '-'<< std::setfill(' ');
    while(true)
    {
        file.read((char*)&c,sizeof(tops));
        if(!file)
            break;
        else
        {
            char name1[20];
            strcpy(name1,c.name);
            if(name!=NULL)
            {if(strstr(name1,name))
            cout << endl << std::setfill(' ') << "| " << setw(5) << left <<c.pno << "| "
            << setw(30) << left << c.name << "| "
            << setw(20) << left << c.price << "| "
            << setw(20) << left << c.stock << "| ";}
            else
                cout << endl << std::setfill(' ') << "| " << setw(5) << left <<c.pno << "| "
            << setw(30) << left << c.name << "| "
            << setw(20) << left << c.price << "| "
            << setw(20) << left << c.stock << "| ";
        }
    }
    cout <<endl <<  std::setfill( '-' ) << std::setw( 83 ) << '-'<< std::setfill(' ')
               << std::endl;
    file.close();

}
int tops::display_products_minimal(char*name)
{
    ifstream file("tops.dat",ios::in);
    tops c;
    int count=0;
    while(true)
    {
        file.read((char*)&c,sizeof(tops));
        if(!file)
            break;
        else
        {
            char name1[20];
            strcpy(name1,c.name);
            if(strstr(name1,name))
            {
                cout << setw(30) << c.name << "TOPS\n";
                count++;
            }
        }
    }
    file.close();
    return count;

}


void tops::modify_product()
{
    fstream fp;
    int no,found=0;
    tops pr;
    system("cls");
    cout<<"\n\n\tTo Modify ";
    cout<<"\n\n\tPlease Enter The Product No. of The Product: ";
    cin>>no;
    fp.open("tops.dat",ios::in|ios::out|ios::ate);
    fp.seekg(0,ios::beg);
    while(fp.read((char*)&pr,sizeof(tops)) && found==0)
	   {
	    if(pr.pno==no)
		   {
                //cout<<"\nPlease Enter The New Details of Product"<<endl;
                int exit=0;
                do
                  {

                      system("cls");
                      pr.show_product();
                      char ch2;
                      cout<<"\n\n\n\tMODIFY ITEMS";
                      cout<<"\n\n\t1.PNO";
                      cout<<"\n\n\t2 NAME";
                      cout<<"\n\n\t3 PRICE";
                      cout<<"\n\n\t4 STOCK";
                      cout<<"\n\n\t5 SIZE";
                      cout<<"\n\n\t6.EXIT";
                      cout<<"\n\n\tWHICH DO YOU WANT TO MODIFY? (1/2/3/4/5/6): ";
                      cin>>ch2;

                      switch(ch2)
                      {
                        case '1':

                               cout << "\nEnter new PNO: ";
                               cin >> pr.pno;


                               break;

                        case '2':
                               cout << "\nEnter new NAME: ";
                               fflush(stdin);
                               gets(pr.name);
                               break;

                        case '3':

                               cout << "\nEnter new PRICE: ";
                               cin >> pr.price;


                               break;

                        case '4':

                               cout << "\nEnter new STOCK: ";
                               cin >> pr.stock;


                               break;

                        case '5':

                               cout<<"\nEnter The new SIZE:";
                               fflush(stdin);
                               gets(size1);

                               break;

                        case '6':
                            exit=1;
                            continue;
                      }

                  }while(exit==0);

                int pos=-1*sizeof(pr);
                fp.seekp(pos,ios::cur);
                fp.write((char*)&pr,sizeof(tops));
                cout<<"\n\n\t Record Updated";
                found=1;
		   }
	     }
    fp.close();
    if(found==0)
    cout<<"\n\n Record Not Found ";
    getch();
}

void tops :: delete_product()
{
    system("cls");
    int no;
    cout<<"\n\n\tTo Delete ";
    cout<<"\n\n\tPlease Enter The Product No. of The Product: ";
    cin>>no;
    ifstream file("tops.dat",ios::in);
    ofstream temp("temp.dat",ios::out);
    tops c;
    while(true)
    {
        file.read((char*)&c,sizeof(tops));
        if(!file)
            break;
        else
            if(c.pno == no)
                continue;
        temp.write((char*)&c,sizeof(tops));

    }
    file.close();
    temp.close();
    remove("tops.dat");
    rename("temp.dat","tops.dat");

}
//-------------------------------------------------------TOPS-OVER-------------------------------------------------------------------------

//------------------------------------------------------JEWEL-START--------------------------------------------------------------------------

void jewel::create_product()
{
    product::create_product();
    cout<<"\nEnter The AGE:";
	 cin>>age;
}

void jewel::update_product()
{
    fstream fp;
    int no,found=0;
    jewel pr;
    system("cls");
    cout<<"\n\n\tTo Update Stock ";
    cout<<"\n\n\tPlease Enter The Product No. of The Product: ";
    cin>>no;
    fp.open("jewel.dat",ios::in|ios::out|ios::ate);
    fp.seekg(0,ios::beg);
    while(fp.read((char*)&pr,sizeof(jewel)) && found==0)
	   {
	    if(pr.pno==no)
		   {
		       int exit=0;
                do
                  {

                      system("cls");
                      pr.show_product();
                    //cout<<"\nPlease Enter The New Details of Product"<<endl;
                    int new_stock,cho;

                    cout<<"\n\nDo you want to \n\n1.ADD \n\n2.SUBTRACT \n\n3.EXIT  \n\nEnter your choice(1/2/3): ";
                    cin>>cho;
                    switch(cho)
                    {
                        case 1:
                            cout << "\nEnter new STOCK to be added: ";
                            cin >> new_stock;
                            pr.stock+=new_stock;
                            break;
                        case 2:
                            cout << "\nEnter new STOCK to be subtracted: ";
                            cin >> new_stock;
                            pr.stock-=new_stock;
                            break;
                        case 3:
                            exit=1;
                            break;
                        default:
                            cout<<"\nINVALID CHOICE...";
                    }


                    int pos=-1*sizeof(pr);
                    fp.seekp(pos,ios::cur);
                    fp.write((char*)&pr,sizeof(jewel));
                    cout<<"\n\n\t Record Updated";
                    found=1;
               }while(exit==0);
               }
	     }
    fp.close();
    if(found==0)
    cout<<"\n\n Record Not Found ";
    getch();
}

void jewel::write_product()
   {
    fstream fp;
    fp.open("jewel.dat",ios::out|ios::app);

    if(!fp)
    {
        cout<<"Error in creating file!!";
    }
    //pr.create_product();
    fp.write((char*)this,sizeof(jewel));
    fp.close();
    cout<<"\n\nThe Product Has Been Created ";
    getch();
   }

void jewel::display_products()
{
    system("cls");

    cout <<endl <<  std::setfill( '-' ) << std::setw( 104 ) << '-'
               << std::setfill(' ') << std::endl;
    cout  << "| " << setw(5) << left <<"PNO" << "| " << setw(30) << left << "NAME"
        << "| " << setw(20) << left << "PRICE" << "| " << setw(20) << left << "STOCK" << "|" << setw(20) << left << "AGE" << "|";
    cout << endl << std::setfill( '-' ) << std::setw( 104 )
              << '-' ;

    cout << endl << std::setfill(' ')<< "| " << setw(102) << left <<"BRACELETS" << "| ";
    cout << endl <<  std::setfill( '-' ) << std::setw( 104 ) << '-'
               << std::setfill(' ') ;
    displayrange(3001,3100);
    cout << "| " << setw(102) << left <<"PENDANTS" << "| ";
    cout <<endl <<  std::setfill( '-' ) << std::setw( 104 ) << '-'
               << std::setfill(' ') ;
    displayrange(3101,3200);
    cout << "| " << setw(102) << left <<"FINGER RINGS" << "| ";
    cout <<endl <<  std::setfill( '-' ) << std::setw( 104 ) << '-'
               << std::setfill(' ') ;
    displayrange(3201,3300);
    cout << "| " << setw(102) << left <<"ANKLETS" << "| ";
    cout <<endl <<  std::setfill( '-' ) << std::setw( 104 ) << '-'
               << std::setfill(' ') ;
    displayrange(3301,3400);
    cout << "| " << setw(102) << left <<"EARRINGS" << "| ";
    cout <<endl <<  std::setfill( '-' ) << std::setw( 104 ) << '-'
               << std::setfill(' ') ;
    displayrange(3401,3500);

}

void jewel :: displayrange(int a, int b)
{
    ifstream file("jewel.dat",ios::in);
    if(!file)
    {
        cout << "The file doesn't exist.";
        return;
    }
    jewel c;

    while(true)
    {
        file.read((char*)&c,sizeof(jewel));
        if(!file)
            break;
        else
        {
            if(c.pno >=a && c.pno <=b)
            cout << endl << std::setfill(' ') << "| " << setw(5) << left <<c.pno << "| "
            << setw(30) << left << c.name << "| "
            << setw(20) << left << c.price << "| "
            << setw(20) << left << c.stock << "|"
            << setw(20) << left << c.age << "|";
        }
    }
    cout <<endl <<  std::setfill( '-' ) << std::setw( 104 ) << '-'<< std::setfill(' ')
               << std::endl;
    file.close();

}
void jewel:: display(char*name)
{
    ifstream file("jewel.dat",ios::in);
    if(!file)
    {
        cout << "The file doesn't exist.";
        return;
    }
    jewel c;
    cout << "| " << setw(81) << "JEWEL" << "| ";
    cout <<endl <<  std::setfill( '-' ) << std::setw( 83 ) << '-'<< std::setfill(' ');
    while(true)
    {
        file.read((char*)&c,sizeof(jewel));
        if(!file)
            break;
        else
        {
            char name1[20];
            strcpy(name1,c.name);
            if(name!=NULL)
            {if(strstr(name1,name))
            cout << endl << std::setfill(' ') << "| " << setw(5) << left <<c.pno << "| "
            << setw(30) << left << c.name << "| "
            << setw(20) << left << c.price << "| "
            << setw(20) << left << c.stock << "| ";}
            else
                cout << endl << std::setfill(' ') << "| " << setw(5) << left <<c.pno << "| "
            << setw(30) << left << c.name << "| "
            << setw(20) << left << c.price << "| "
            << setw(20) << left << c.stock << "| ";
        }
    }
    cout <<endl <<  std::setfill( '-' ) << std::setw( 83 ) << '-'<< std::setfill(' ')
               << std::endl;
    file.close();

}

int jewel::display_products_minimal(char*name)
{
    ifstream file("jewel.dat",ios::in);
    jewel c;
    int count=0;
    while(true)
    {
        file.read((char*)&c,sizeof(jewel));
        if(!file)
            break;
        else
        {
            char name1[20];
            strcpy(name1,c.name);
            if(strstr(name1,name))
            {
                cout << setw(30) << c.name << "JEWEL\n";
                count++;
            }
        }
    }
    file.close();
    return count;

}


void jewel::modify_product()
{
    fstream fp;
    int no,found=0;
    jewel pr;
    system("cls");
    cout<<"\n\n\tTo Modify ";
    cout<<"\n\n\tPlease Enter The Product No. of The Product: ";
    cin>>no;
    fp.open("jewel.dat",ios::in|ios::out|ios::ate);
    fp.seekg(0,ios::beg);
    while(fp.read((char*)&pr,sizeof(jewel)) && found==0)
	   {
	    if(pr.pno==no)
		   {
                //cout<<"\nPlease Enter The New Details of Product"<<endl;
                int exit=0;
                do
                  {

                      system("cls");
                      pr.show_product();
                      char ch2;
                      cout<<"\n\n\n\tMODIFY ITEMS";
                      cout<<"\n\n\t1.PNO";
                      cout<<"\n\n\t2 NAME";
                      cout<<"\n\n\t3 PRICE";
                      cout<<"\n\n\t4 STOCK";
                      cout<<"\n\n\t5 AGE";
                      cout<<"\n\n\t6.EXIT";
                      cout<<"\n\n\tWHICH DO YOU WANT TO MODIFY? (1/2/3/4/5/6): ";
                      cin>>ch2;

                      switch(ch2)
                      {
                        case '1':

                               cout << "\nEnter new PNO: ";
                               cin >> pr.pno;


                               break;

                        case '2':
                               cout << "\nEnter new NAME: ";
                               fflush(stdin);
                               gets(pr.name);
                               break;

                        case '3':

                               cout << "\nEnter new PRICE: ";
                               cin >> pr.price;


                               break;

                        case '4':

                               cout << "\nEnter new STOCK: ";
                               cin >> pr.stock;


                               break;

                        case '5':

                               cout << "\nEnter new AGE: ";
                               cin >> pr.age;


                               break;

                        case '6':
                            exit=1;
                            continue;
                      }

                  }while(exit==0);

                int pos=-1*sizeof(pr);
                fp.seekp(pos,ios::cur);
                fp.write((char*)&pr,sizeof(jewel));
                cout<<"\n\n\t Record Updated";
                found=1;
		   }
	     }
    fp.close();
    if(found==0)
    cout<<"\n\n Record Not Found ";
    getch();
}

void jewel :: delete_product()
{
    system("cls");
    int no;
    cout<<"\n\n\tTo Delete ";
    cout<<"\n\n\tPlease Enter The Product No. of The Product: ";
    cin>>no;
    ifstream file("jewel.dat",ios::in);
    ofstream temp("temp.dat",ios::out);
    jewel c;
    while(true)
    {
        file.read((char*)&c,sizeof(jewel));
        if(!file)
            break;
        else
            if(c.pno == no)
                continue;
        temp.write((char*)&c,sizeof(jewel));

    }
    file.close();
    temp.close();
    remove("jewel.dat");
    rename("temp.dat","jewel.dat");

}

//-------------------------------------------------------JEWEL-OVER-------------------------------------------------------------------------

//------------------------------------------------------FOOT-START--------------------------------------------------------------------------

void foot::create_product()
{
    product::create_product();
    cout<<"\nEnter The SIZE:";
    fflush(stdin);
    gets(size1);
}

void foot::update_product()
{
    fstream fp;
    int no,found=0;
    foot pr;
    system("cls");
    cout<<"\n\n\tTo Update Stock ";
    cout<<"\n\n\tPlease Enter The Product No. of The Product: ";
    cin>>no;
    fp.open("foot.dat",ios::in|ios::out|ios::ate);
    fp.seekg(0,ios::beg);
    while(fp.read((char*)&pr,sizeof(foot)) && found==0)
	   {
	    if(pr.pno==no)
		   {
		       int exit=0;
                do
                  {

                      system("cls");
                      pr.show_product();
                    //cout<<"\nPlease Enter The New Details of Product"<<endl;
                    int new_stock,cho;

                    cout<<"\n\nDo you want to \n\n1.ADD \n\n2.SUBTRACT \n\n3.EXIT  \n\nEnter your choice(1/2/3): ";
                    cin>>cho;
                    switch(cho)
                    {
                        case 1:
                            cout << "\nEnter new STOCK to be added: ";
                            cin >> new_stock;
                            pr.stock+=new_stock;
                            break;
                        case 2:
                            cout << "\nEnter new STOCK to be subtracted: ";
                            cin >> new_stock;
                            pr.stock-=new_stock;
                            break;
                        case 3:
                            exit=1;
                            break;
                        default:
                            cout<<"\nINVALID CHOICE...";
                    }


                    int pos=-1*sizeof(pr);
                    fp.seekp(pos,ios::cur);
                    fp.write((char*)&pr,sizeof(foot));
                    cout<<"\n\n\t Record Updated";
                    found=1;
               }while(exit==0);
               }
	     }
    fp.close();
    if(found==0)
    cout<<"\n\n Record Not Found ";
    getch();
}

void foot::write_product()
   {
    fstream fp;
    fp.open("foot.dat",ios::out|ios::app);

    if(!fp)
    {
        cout<<"Error in creating file!!";
    }
    //pr.create_product();
    fp.write((char*)this,sizeof(foot));
    fp.close();
    cout<<"\n\nThe Product Has Been Created ";
    getch();
   }

void foot::display_products()
{
    system("cls");

    cout <<endl <<  std::setfill( '-' ) << std::setw( 104 ) << '-'
               << std::setfill(' ') << std::endl;
    cout  << "| " << setw(5) << left <<"PNO" << "| " << setw(30) << left << "NAME"
        << "| " << setw(20) << left << "PRICE" << "| " << setw(20) << left << "STOCK" << "|" << setw(20) << left << "SIZE" << "|";
    cout << endl << std::setfill( '-' ) << std::setw( 104 )
              << '-' ;

    cout << endl << std::setfill(' ')<< "| " << setw(102) << left <<"HIGH HEELS" << "| ";
    cout << endl <<  std::setfill( '-' ) << std::setw( 104 ) << '-'
               << std::setfill(' ') ;
    displayrange(4001,4100);
    cout << "| " << setw(102) << left <<"SNEAKERS" << "| ";
    cout <<endl <<  std::setfill( '-' ) << std::setw( 104 ) << '-'
               << std::setfill(' ') ;
    displayrange(4101,4200);
    cout << "| " << setw(102) << left <<"FLIP FLOPS" << "| ";
    cout <<endl <<  std::setfill( '-' ) << std::setw( 104 ) << '-'
               << std::setfill(' ') ;
    displayrange(4201,4300);
    cout << "| " << setw(102) << left <<"SANDLES" << "| ";
    cout <<endl <<  std::setfill( '-' ) << std::setw( 104 ) << '-'
               << std::setfill(' ') ;
    displayrange(4301,4400);
    cout << "| " << setw(102) << left <<"BOOTS" << "| ";
    cout <<endl <<  std::setfill( '-' ) << std::setw( 104 ) << '-'
               << std::setfill(' ') ;
    displayrange(4401,4500);

}

void foot :: displayrange(int a, int b)
{
    ifstream file("foot.dat",ios::in);
    if(!file)
    {
        cout << "The file doesn't exist.";
        return;
    }
    foot c;

    while(true)
    {
        file.read((char*)&c,sizeof(foot));
        if(!file)
            break;
        else
        {
            if(c.pno >=a && c.pno <=b)
            cout << endl << std::setfill(' ') << "| " << setw(5) << left <<c.pno << "| "
            << setw(30) << left << c.name << "| "
            << setw(20) << left << c.price << "| "
            << setw(20) << left << c.stock << "|"
            << setw(20) << left << c.size1 << "|";
        }
    }
    cout <<endl <<  std::setfill( '-' ) << std::setw( 104 ) << '-'<< std::setfill(' ')
               << std::endl;
    file.close();

}
void foot:: display(char*name)
{
    ifstream file("foot.dat",ios::in);
    if(!file)
    {
        cout << "The file doesn't exist.";
        return;
    }
    foot c;
    cout << "| " << setw(81) << "FOOT" << "| ";
    cout <<endl <<  std::setfill( '-' ) << std::setw( 83 ) << '-'<< std::setfill(' ');
    while(true)
    {
        file.read((char*)&c,sizeof(foot));
        if(!file)
            break;
        else
        {
            char name1[20];
            strcpy(name1,c.name);
            if(name!=NULL)
            {if(strstr(name1,name))
            cout << endl << std::setfill(' ') << "| " << setw(5) << left <<c.pno << "| "
            << setw(30) << left << c.name << "| "
            << setw(20) << left << c.price << "| "
            << setw(20) << left << c.stock << "| ";}
            else
                cout << endl << std::setfill(' ') << "| " << setw(5) << left <<c.pno << "| "
            << setw(30) << left << c.name << "| "
            << setw(20) << left << c.price << "| "
            << setw(20) << left << c.stock << "| ";
        }
    }
    cout <<endl <<  std::setfill( '-' ) << std::setw( 83 ) << '-'<< std::setfill(' ')
               << std::endl;
    file.close();

}
int foot::display_products_minimal(char*name)
{
    ifstream file("foot.dat",ios::in);
    foot c;
    int count=0;
    while(true)
    {
        file.read((char*)&c,sizeof(foot));
        if(!file)
            break;
        else
        {
            char name1[20];
            strcpy(name1,c.name);
            if(strstr(name1,name))
            {
                cout << setw(30) << c.name << "FOOT\n";
                count++;
            }
        }
    }
    file.close();
    return count;

}
void foot::modify_product()
{
    fstream fp;
    int no,found=0;
    foot pr;
    system("cls");
    cout<<"\n\n\tTo Modify ";
    cout<<"\n\n\tPlease Enter The Product No. of The Product: ";
    cin>>no;
    fp.open("foot.dat",ios::in|ios::out|ios::ate);
    fp.seekg(0,ios::beg);
    while(fp.read((char*)&pr,sizeof(foot)) && found==0)
	   {
	    if(pr.pno==no)
		   {
                //cout<<"\nPlease Enter The New Details of Product"<<endl;
                int exit=0;
                do
                  {

                      system("cls");
                      pr.show_product();
                      char ch2;
                      cout<<"\n\n\n\tMODIFY ITEMS";
                      cout<<"\n\n\t1.PNO";
                      cout<<"\n\n\t2 NAME";
                      cout<<"\n\n\t3 PRICE";
                      cout<<"\n\n\t4 STOCK";
                      cout<<"\n\n\t5 SIZE";
                      cout<<"\n\n\t6.EXIT";
                      cout<<"\n\n\tWHICH DO YOU WANT TO MODIFY? (1/2/3/4/5/6): ";
                      cin>>ch2;

                      switch(ch2)
                      {
                        case '1':

                               cout << "\nEnter new PNO: ";
                               cin >> pr.pno;


                               break;

                        case '2':
                               cout << "\nEnter new NAME: ";
                               fflush(stdin);
                               gets(pr.name);
                               break;

                        case '3':

                               cout << "\nEnter new PRICE: ";
                               cin >> pr.price;


                               break;

                        case '4':

                               cout << "\nEnter new STOCK: ";
                               cin >> pr.stock;


                               break;

                        case '5':

                               cout<<"\nEnter The SIZE:";
                               fflush(stdin);
                               gets(pr.size1);


                               break;

                        case '6':
                            exit=1;
                            continue;
                      }

                  }while(exit==0);

                int pos=-1*sizeof(pr);
                fp.seekp(pos,ios::cur);
                fp.write((char*)&pr,sizeof(foot));
                cout<<"\n\n\t Record Updated";
                found=1;
		   }
	     }
    fp.close();
    if(found==0)
    cout<<"\n\n Record Not Found ";
    getch();
}

void foot :: delete_product()
{
    system("cls");
    int no;
    cout<<"\n\n\tTo Delete ";
    cout<<"\n\n\tPlease Enter The Product No. of The Product: ";
    cin>>no;
    ifstream file("foot.dat",ios::in);
    ofstream temp("temp.dat",ios::out);
    foot c;
    while(true)
    {
        file.read((char*)&c,sizeof(foot));
        if(!file)
            break;
        else
            if(c.pno == no)
                continue;
        temp.write((char*)&c,sizeof(foot));

    }
    file.close();
    temp.close();
    remove("foot.dat");
    rename("temp.dat","foot.dat");

}

//-------------------------------------------------------FOOT-OVER-----------------------------------------------------------------------------

//------------------------------------------------------COSMETICS-START--------------------------------------------------------------------------

void cosmetics::create_product()
{
    product::create_product();
    cout<<"\nEnter The expiry No of Days:";
	 cin>>exp;
}

void cosmetics::update_product()
{
    fstream fp;
    int no,found=0;
    cosmetics pr;
    system("cls");
    cout<<"\n\n\tTo Update Stock ";
    cout<<"\n\n\tPlease Enter The Product No. of The Product: ";
    cin>>no;
    fp.open("cosmetics.dat",ios::in|ios::out|ios::ate);
    fp.seekg(0,ios::beg);
    while(fp.read((char*)&pr,sizeof(cosmetics)) && found==0)
	   {
	    if(pr.pno==no)
		   {
		       int exit=0;
                do
                  {

                      system("cls");
                      pr.show_product();
                    //cout<<"\nPlease Enter The New Details of Product"<<endl;
                    int new_stock,cho;

                    cout<<"\n\nDo you want to \n\n1.ADD \n\n2.SUBTRACT \n\n3.EXIT  \n\nEnter your choice(1/2/3): ";
                    cin>>cho;
                    switch(cho)
                    {
                        case 1:
                            cout << "\nEnter new STOCK to be added: ";
                            cin >> new_stock;
                            pr.stock+=new_stock;
                            break;
                        case 2:
                            cout << "\nEnter new STOCK to be subtracted: ";
                            cin >> new_stock;
                            pr.stock-=new_stock;
                            break;
                        case 3:
                            exit=1;
                            break;
                        default:
                            cout<<"\nINVALID CHOICE...";
                    }


                    int pos=-1*sizeof(pr);
                    fp.seekp(pos,ios::cur);
                    fp.write((char*)&pr,sizeof(cosmetics));
                    cout<<"\n\n\t Record Updated";
                    found=1;
               }while(exit==0);
               }
	     }
    fp.close();
    if(found==0)
    cout<<"\n\n Record Not Found ";
    getch();
}

void cosmetics::write_product()
   {
    fstream fp;
    fp.open("cosmetics.dat",ios::out|ios::app);

    if(!fp)
    {
        cout<<"Error in creating file!!";
    }
    //pr.create_product();
    fp.write((char*)this,sizeof(cosmetics));
    fp.close();
    cout<<"\n\nThe Product Has Been Created ";
    getch();
   }

void cosmetics::display_products()
{
    system("cls");

    cout <<endl <<  std::setfill( '-' ) << std::setw( 104 ) << '-'
               << std::setfill(' ') << std::endl;
    cout  << "| " << setw(5) << left <<"PNO" << "| " << setw(30) << left << "NAME"
        << "| " << setw(20) << left << "PRICE" << "| " << setw(20) << left << "STOCK" << "|" << setw(20) << left << "EXPIRY/WARANTEE DAYS" << "|";
    cout << endl << std::setfill( '-' ) << std::setw( 104 )
              << '-' ;

    cout << endl << std::setfill(' ')<< "| " << setw(102) << left <<"MAKEUP" << "| ";
    cout << endl <<  std::setfill( '-' ) << std::setw( 104 ) << '-'
               << std::setfill(' ') ;
    displayrange(5001,5100);
    cout << "| " << setw(102) << left <<"SKIN" << "| ";
    cout <<endl <<  std::setfill( '-' ) << std::setw( 104 ) << '-'
               << std::setfill(' ') ;
    displayrange(5101,5200);
    cout << "| " << setw(102) << left <<"HAIR" << "| ";
    cout <<endl <<  std::setfill( '-' ) << std::setw( 104 ) << '-'
               << std::setfill(' ') ;
    displayrange(5201,5300);
    cout << "| " << setw(102) << left <<"NAILS" << "| ";
    cout <<endl <<  std::setfill( '-' ) << std::setw( 104 ) << '-'
               << std::setfill(' ') ;
    displayrange(5301,5400);
    cout << "| " << setw(102) << left <<"APPLIANCES" << "| ";
    cout <<endl <<  std::setfill( '-' ) << std::setw( 104 ) << '-'
               << std::setfill(' ') ;
    displayrange(5401,5500);

}

void cosmetics :: displayrange(int a, int b)
{
    ifstream file("cosmetics.dat",ios::in);
    if(!file)
    {
        cout << "The file doesn't exist.";
        return;
    }
    cosmetics c;

    while(true)
    {
        file.read((char*)&c,sizeof(cosmetics));
        if(!file)
            break;
        else
        {
            if(c.pno >=a && c.pno <=b)
            cout << endl << std::setfill(' ') << "| " << setw(5) << left <<c.pno << "| "
            << setw(30) << left << c.name << "| "
            << setw(20) << left << c.price << "| "
            << setw(20) << left << c.stock << "|"
            << setw(20) << left << c.exp << "|";
        }
    }
    cout <<endl <<  std::setfill( '-' ) << std::setw( 104 ) << '-'<< std::setfill(' ')
               << std::endl;
    file.close();

}
void cosmetics:: display(char*name)
{
    ifstream file("cosmetics.dat",ios::in);
    if(!file)
    {
        cout << "The file doesn't exist.";
        return;
    }
    cosmetics c;
    cout << "| " << setw(81) << "COSMETICS" << "| ";
    cout <<endl <<  std::setfill( '-' ) << std::setw( 83 ) << '-'<< std::setfill(' ');
    while(true)
    {
        file.read((char*)&c,sizeof(cosmetics));
        if(!file)
            break;
        else
        {
            char name1[20];
            strcpy(name1,c.name);
            if(name!=NULL)
            {if(strstr(name1,name))
            cout << endl << std::setfill(' ') << "| " << setw(5) << left <<c.pno << "| "
            << setw(30) << left << c.name << "| "
            << setw(20) << left << c.price << "| "
            << setw(20) << left << c.stock << "| ";}
            else
                cout << endl << std::setfill(' ') << "| " << setw(5) << left <<c.pno << "| "
            << setw(30) << left << c.name << "| "
            << setw(20) << left << c.price << "| "
            << setw(20) << left << c.stock << "| ";
        }
    }
    cout <<endl <<  std::setfill( '-' ) << std::setw( 83 ) << '-'<< std::setfill(' ')
               << std::endl;
    file.close();

}
int cosmetics::display_products_minimal(char*name)
{
    ifstream file("cosmetics.dat",ios::in);
    cosmetics c;
    int count=0;
    while(true)
    {
        file.read((char*)&c,sizeof(cosmetics));
        if(!file)
            break;
        else
        {
            char name1[20];
            strcpy(name1,c.name);
            if(strstr(name1,name))
            {
                cout << setw(30) << c.name << "COSMETICS\n";
                count++;
            }
        }
    }
    file.close();
    return count;

}
void cosmetics::modify_product()
{
    fstream fp;
    int no,found=0;
    cosmetics pr;
    system("cls");
    cout<<"\n\n\tTo Modify ";
    cout<<"\n\n\tPlease Enter The Product No. of The Product: ";
    cin>>no;
    fp.open("cosmetics.dat",ios::in|ios::out|ios::ate);
    fp.seekg(0,ios::beg);
    while(fp.read((char*)&pr,sizeof(cosmetics)) && found==0)
	   {
	    if(pr.pno==no)
		   {
                //cout<<"\nPlease Enter The New Details of Product"<<endl;
                int exit=0;
                do
                  {

                      system("cls");
                      pr.show_product();
                      char ch2;
                      cout<<"\n\n\n\tMODIFY ITEMS";
                      cout<<"\n\n\t1.PNO";
                      cout<<"\n\n\t2 NAME";
                      cout<<"\n\n\t3 PRICE";
                      cout<<"\n\n\t4 STOCK";
                      cout<<"\n\n\t5 EXPIRY/WARANTEE DAYS";
                      cout<<"\n\n\t6.EXIT";
                      cout<<"\n\n\tWHICH DO YOU WANT TO MODIFY? (1/2/3/4/5/6): ";
                      cin>>ch2;

                      switch(ch2)
                      {
                        case '1':

                               cout << "\nEnter new PNO: ";
                               cin >> pr.pno;


                               break;

                        case '2':
                               cout << "\nEnter new NAME: ";
                               fflush(stdin);
                               gets(pr.name);
                               break;

                        case '3':

                               cout << "\nEnter new PRICE: ";
                               cin >> pr.price;


                               break;

                        case '4':

                               cout << "\nEnter new STOCK: ";
                               cin >> pr.stock;


                               break;

                        case '5':

                               cout << "\nEnter new EXPIRY/WARANTEE Days: ";
                               cin >> pr.exp;


                               break;

                        case '6':
                            exit=1;
                            continue;
                      }

                  }while(exit==0);

                int pos=-1*sizeof(pr);
                fp.seekp(pos,ios::cur);
                fp.write((char*)&pr,sizeof(cosmetics));
                cout<<"\n\n\t Record Updated";
                found=1;
		   }
	     }
    fp.close();
    if(found==0)
    cout<<"\n\n Record Not Found ";
    getch();
}

void cosmetics :: delete_product()
{
    system("cls");
    int no;
    cout<<"\n\n\tTo Delete ";
    cout<<"\n\n\tPlease Enter The Product No. of The Product: ";
    cin>>no;
    ifstream file("cosmetics.dat",ios::in);
    ofstream temp("temp.dat",ios::out);
    cosmetics c;
    while(true)
    {
        file.read((char*)&c,sizeof(cosmetics));
        if(!file)
            break;
        else
            if(c.pno == no)
                continue;
        temp.write((char*)&c,sizeof(cosmetics));

    }
    file.close();
    temp.close();
    remove("cosmetics.dat");
    rename("temp.dat","cosmetics.dat");

}

//-------------------------------------------------------COSMETICS-OVER-------------------------------------------------------------------------



