
#include "main.h"
#include "database.h"
#include "billing.h"



cart::cart()
{
    numberofitems=0;
    i = new item[50];
    for(int j=0; j < 50; j++)
    {
        strcpy(i->name," ");
        i->prz = 0;
        i->qty = 0;
    }

}
void cart::displaycart()
{
    double total = 0;
         cout <<endl <<  std::setfill( '-' ) << std::setw( 85 ) << '-'
               << std::setfill(' ') << std::endl;
    cout  << "| " << setw(5) << left <<"SNO" << "| " << setw(30) << left << "NAME"
        << "| " << setw(20) << left << "PRICE" << "| " << setw(20) << left << "QTY" << "|"  <<endl<<  std::setfill( '-' )<< std::setw( 85 ) << "-" ;
        cout << std::setfill(' ');
        if(numberofitems == 0)
            cout << "\nNO ITEMS";
        for(int j=0; j < numberofitems; j++)
        {
             cout  <<endl << "| " << setw(5) << left <<j+1 << "| " << setw(30) << left << i[j].name
        << "| " << setw(20) << left << i[j].prz << "| " << setw(20) << left << i[j].qty << "|";
        total+=i[j].prz*i[j].qty;
        }
        cout <<endl << std::setfill( '-' ) << std::setw( 85 )
              << '-' ;
        cout << "\nTOTAL: " << total;
}
void cart::printcart()
{
    double total = 0;
    ofstream bill("bill.txt",ios::out);
         bill <<endl <<  std::setfill( '-' ) << std::setw( 85 ) << '-'
               << std::setfill(' ') << std::endl;
    bill  << "| " << setw(5) << left <<"SNO" << "| " << setw(30) << left << "NAME"
        << "| " << setw(20) << left << "PRICE" << "| " << setw(20) << left << "QTY" << "|"  <<endl<<  std::setfill( '-' )<< std::setw( 85 ) << "-" ;
        bill << std::setfill(' ');
        if(numberofitems == 0)
            bill << "\nNO ITEMS";
        for(int j=0; j < numberofitems; j++)
        {
             bill  <<endl << "| " << setw(5) << left <<j+1 << "| " << setw(30) << left << i[j].name
        << "| " << setw(20) << left << i[j].prz << "| " << setw(20) << left << i[j].qty << "|";
        total+=i[j].prz*i[j].qty;
        }
        bill <<endl << std::setfill( '-' ) << std::setw( 85 )
              << '-' ;
        bill << "\nTOTAL: " << total;
}
void cart::buy()
{
    int exit = 0;
    int ch;


    do
    {
        system("cls");
        displaycart();
        cout << "\n\t\t Buy Menu\n\n";
        cout << "1.Enter id\n";
        cout << "2.Enter name\n";
        cout << "3.Enter category\n";
        cout << "4.Print bill\n";
        cout << "5.Exit\n";
        cout << "Enter your choice:";
        cin >> ch;
        switch(ch)
        {
    case 2:
        {
            if(search_by_name())
                system("pause");
            else
            {
                int ch;
                cout << "\n1.Buy\n";
                cout << "2.Exit\n";
                cout << "Enter your choice:";
                cin >> ch;
                if(ch == 1)
                buy_by_id_driver();
            }
        }
        break;
    case 3:
        {
                system("cls");
                int cha;
                cout <<"\nSelect category\n";
                cout << "1.Saree\n";
                cout << "2.Tops\n";
                cout << "3.Jewelery\n";
                cout << "4.Footwear\n";
                cout << "5.Cosmetics\n";
                cout << "Enter your choice:";
                cin >> cha;
                saree s;
                tops t;
                jewel j;
                foot f;
                cosmetics c;
                system("cls");
                switch(cha)
                {
                    case 1: s.display_products();
                    break;
                    case 2: t.display_products();
                    break;
                    case 3: j.display_products();
                    break;
                    case 4: f.display_products();
                    break;
                    case 5: c.display_products();
                    break;
                }
                int ch;
                cout << "\n1.Buy\n";
                cout << "2.Exit\n";
                cout << "Enter your choice:";
                cin >> ch;
                if(ch == 1)
                buy_by_id_driver();

        }
        break;
        case 1:buy_by_id_driver();

        break;
        case 4:
            printcart();
            cout << "\nPrinted succesfully";
            system("pause");
        break;
        case 5:
            exit =1;
        }
    }while(exit == 0);
}
int cart::search_by_name()
{
    char name[20];
    strcpy(name,"     ");
    int strcount = 0;
    saree s;
    tops t;
    jewel j;
    foot f;
    cosmetics c;
    int scount = 0, tcount =0, jcount = 0, fcount =0, ccount = 0;
    do
    {
        scount = 0, tcount =0, jcount = 0, fcount =0, ccount = 0;
        if(strcount == 0)
            strcpy(name,"     ");
        system("cls");
        cout << "Enter the name:" << name;
        cout << std::setfill(' ');
        cout << endl;
        cout << endl;
        scount+=s.display_products_minimal(name);
        tcount+=t.display_products_minimal(name);
        jcount+=j.display_products_minimal(name);
        fcount+=f.display_products_minimal(name);
        ccount+=c.display_products_minimal(name);
        int ch;
        ch = getch();
        if(ch == 13)
            break;
        else if(ch == '\b')
        {
            if(strcount !=0)
            {name[--strcount] = ' ';
            name[strcount] = '\0';}
            continue;
        }
        name[strcount++] = ch;
        name[strcount] = '\0';
    }while(true);
    system("cls");
    int totalcount = scount + tcount + jcount + fcount + ccount;
    cout <<endl <<  std::setfill( '-' ) << std::setw( 83 ) << '-'
               << std::setfill(' ') << std::endl;
    cout  << "| " << setw(5) << left <<"PNO" << "| " << setw(30) << left << "NAME"
        << "| " << setw(20) << left << "PRICE" << "| " << setw(20) << left << "STOCK" << "| ";
    cout << endl << std::setfill( '-' ) << std::setw( 83 )
              << '-' ;
    cout << std::setfill(' ');
    cout << endl;
    if(totalcount == 0)
    {
        cout << "NO ELEMENTS MATCHED YOUR SEARCH";
        return -1;
    }
    if(scount)
        s.display(name);
    if(tcount)
        t.display(name);
    if(jcount)
        j.display(name);
    if(fcount)
        f.display(name);
    if(ccount)
        c.display(name);
    cout << endl;
    return 0;
}
void cart::buy_by_id_driver()
{
    item it;
    int id;
    cout << "\nEnter id:";
    cin >> id;
    cout << "\nEnter quantity:";
    cin >> it.qty;
    int alpresent = 0;

    it.buy_by_id(id);
    if(it.prz == 0)
    {cout << "\nIt is not a valid item.";
    return;}
    for(int j=0; j < numberofitems; j++)
    {
        if(strcmp(i[j].name,it.name)==0)
        {
            i[j].qty+=it.qty;
            alpresent = 1;
        }

    }
    if(!alpresent)
    {
        i[numberofitems] = it;
        numberofitems++;
    }
    system("pause");
}
void item::buy_by_id(int id)
{
    prz = 0;
    strcpy(name," ");
    fstream file;
    saree s;
    file.open("saree.dat",ios::in|ios::out|ios::ate);
    file.seekg(0,ios::beg);
    while(true)
    {
        file.read((char*)&s,sizeof(saree));
        if(!file)
            break;
        else if(s.pno == id)
        {
            if(qty > s.stock)
            {
                cout << "\nYou can't buy more than " << s.stock << ".\n";
                return;
            }
            strcpy(name,s.name);
            prz = s.price;
            s.stock -= qty;
            file.seekp(-(int)sizeof(saree),ios::cur);
            file.write((char*)&s,sizeof(saree));
            file.close();
            return;
        }

    }
    file.close();

    tops t;
    file.open("tops.dat",ios::in|ios::out|ios::ate);
    file.seekg(0,ios::beg);
    while(true)
    {
        file.read((char*)&t,sizeof(tops));
        if(!file)
            break;
        else if(t.pno == id)
        {
            if(qty > t.stock)
            {
                cout << "\nYou can't buy more than " << t.stock << ".\n";
                return;
            }
            strcpy(name,t.name);
            prz = t.price;
            t.stock -= qty;
            file.seekp(-(int)sizeof(tops),ios::cur);
            file.write((char*)&t,sizeof(tops));
            file.close();
            return;
        }

    }
    file.close();

    jewel j;
    file.open("jewel.dat",ios::in|ios::out|ios::ate);
    file.seekg(0,ios::beg);
    while(true)
    {
        file.read((char*)&j,sizeof(jewel));
        if(!file)
            break;
        else if(j.pno == id)
        {
            if(qty > j.stock)
            {
                cout << "\nYou can't buy more than " << j.stock << ".\n";
                return;
            }
            strcpy(name,j.name);
            prz = j.price;
            j.stock -= qty;
            file.seekp(-(int)sizeof(jewel),ios::cur);
            file.write((char*)&j,sizeof(jewel));
            file.close();
            return;
        }

    }
    file.close();

    foot f;
    file.open("foot.dat",ios::in|ios::out|ios::ate);
    file.seekg(0,ios::beg);
    while(true)
    {
        file.read((char*)&f,sizeof(foot));
        if(!file)
            break;
        else if(f.pno == id)
        {
            if(qty > f.stock)
            {
                cout << "\nYou can't buy more than " << f.stock << ".\n";
                return;
            }
            strcpy(name,f.name);
            prz = f.price;
            f.stock -= qty;
            file.seekp(-(int)sizeof(foot),ios::cur);
            file.write((char*)&s,sizeof(foot));
            file.close();
            return;
        }

    }
    file.close();

    cosmetics c;
    file.open("cosmetics.dat",ios::in|ios::out|ios::ate);
    file.seekg(0,ios::beg);
    while(true)
    {
        file.read((char*)&c,sizeof(cosmetics));
        if(!file)
            break;
        else if(c.pno == id)
        {
            if(qty > c.stock)
            {
                cout << "\nYou can't buy more than " << c.stock << ".\n";
                return;
            }
            strcpy(name,c.name);
            prz = c.price;
            c.stock -= qty;
            file.seekp(-(int)sizeof(cosmetics),ios::cur);
            file.write((char*)&s,sizeof(cosmetics));
            file.close();
            return;
        }

    }
    file.close();
    return;
}

