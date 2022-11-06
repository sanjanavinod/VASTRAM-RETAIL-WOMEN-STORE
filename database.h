
#ifndef DATABASE_H
#define DATABASE_H


void display();
void choice();
void modify();
void deletepro();
void update();


using namespace std;

class product
{
public:
 int pno;
 char name[50];
 float price,stock;

    virtual void create_product();
	virtual void show_product();


    virtual void write_product()
    {

    }
    virtual void display_products()
    {

    }
    virtual void modify_product()
    {

    }
    virtual void delete_product()
    {

    }
    virtual void update_product()
    {

    }

	 int  retpno()
     {
         return pno;
     }
    virtual ~product()
    {

    }

};

class saree : public product
{
    char wash[40];
    public:
    static void displayrange(int , int );
    void create_product();
    void modify_product();
    void write_product();
    void delete_product();
    void update_product();
    void display_products();
    void display(char*name);
    int display_products_minimal(char*name);
};


class tops : public product
{
char size1[10];
public:

    static void displayrange(int , int );
    void create_product();
    void modify_product();
    void write_product();
    void delete_product();
    void update_product();
    void display_products();
    void display(char*name);
    int display_products_minimal(char*name);


};

class jewel : public product
{
    int age;
public:
    static void displayrange(int , int );
    void create_product();
    void modify_product();
    void write_product();
    void delete_product();
    void update_product();
    void display_products();
    void display(char*name);
    int display_products_minimal(char*name);
};

class foot : public product
{
   char size1[10];
public:
    static void displayrange(int , int );
    void create_product();
    void modify_product();
    void write_product();
    void delete_product();
    void update_product();
    void display_products();
    void display(char*name);
    int display_products_minimal(char*name);
};

class cosmetics : public product
{
    int exp;
public:
    static void displayrange(int , int );
    void create_product();
    void modify_product();
    void write_product();
    void delete_product();
    void update_product();
    void display_products();
    void display(char*name);
    int display_products_minimal(char*name);
};


    void admin_menu();

#endif // DATABASE_H

