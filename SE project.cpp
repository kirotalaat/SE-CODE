
//

#include <iostream>
#include <vector>
using namespace std;

#include<iostream>
#include<fstream>
#include<string.h>
using namespace std;

class user
{
private:
    int id;
    string name;
    int phone;

public:
    user(int id, string name, int phone) {
        this->id = id;
        this->name = name;
        this->phone = phone;

    }
    int getId() {
        return id;
    }

    string getName() {
        return name;
    }
    int getphone() {
        return phone;
    }
    void setName(string name) {
        this->name = name;
    }
    void setid(int id) {
        this->id = id;
    }
    void setphone(int phone) {
        this->phone = phone;
    }




};

class Admin : public user {
private:
    int id;
    string email;


};

class storeowner : public user {

};

class Register {
public:
    string username, password;
};

class Login {
public:
    string inpUsername, inpPassword;
};





class Product {
public:
    virtual void addproduct() { };
};
//----------------------------------
class AdminProduct : public Product {

public:
    int no;
    string arr[4][5];
    bool check_number(string str) {
        for (int i = 0; i < str.length(); i++)
            if (isdigit(str[i]) == false)
                return false;
        return true;
    }


    void addproduct() override {
        string Pname;
        string Pcat;
        string Bname;
        string Pquantity;
        string price;
        cout << "admin logged in" << endl;
        cout << "how many products will you add?" << endl;
        cin >> no;
        string Products[1000][5];
        for (int i = 0; i < no; i++) {
            cout << "-----------------------" << endl;
            cout << "please enter brand name" << endl;
            cin >> Bname;
            if (check_number(Bname)) {
                cout << "---->failed to add product" << endl;
                cout << "-----------------------" << endl;
                cout << "---->please enter a number" << endl;
                cout << "-----------------------" << endl;
                addproduct();

            }
            else {
                Products[i][0] = Bname;
            }
            cout << "please enter product name" << endl;
            cin >> Pname;
            if (check_number(Pname)) {
                cout << "---->failed to add product" << endl;
                cout << "-----------------------" << endl;
                cout << "---->please enter a number" << endl;
                cout << "-----------------------" << endl;
                addproduct();

            }
            else {
                Products[i][1] = Pname;
            }
            cout << "please enter product category" << endl;
            cin >> Pcat;
            if (check_number(Pcat)) {
                cout << "---->failed to add product" << endl;
                cout << "-----------------------" << endl;
                cout << "---->please enter a number" << endl;
                cout << "-----------------------" << endl;
                addproduct();

            }
            else {
                Products[i][2] = Pcat;
            }

            cout << "please enter product price" << endl;
            cin >> price;
            if (check_number(price)) {
                Products[i][3] = price;
            }
            else {
                cout << "---->failed to add product" << endl;
                cout << "-----------------------" << endl;
                cout << "---->please enter a number" << endl;
                cout << "-----------------------" << endl;
                addproduct();

            }
            cout << "please enter product quantity" << endl;
            cin >> Pquantity;
            if (check_number(Pquantity)) {
                Products[i][4] = Pquantity;
            }
            else {
                cout << "---->failed to add product" << endl;
                cout << "-----------------------" << endl;
                cout << "---->please enter a number" << endl;
                cout << "-----------------------" << endl;
                addproduct();

            }
        }
        for (int i = 0; i < no; i++) {
            cout << "-----------------------" << endl;
            cout << i + 1 << " product added succeflly" << endl;
            cout << "Brand name:" << Products[i][0] << endl;
            cout << "product name:" << Products[i][1] << endl;
            cout << "Category:" << Products[i][2] << endl;
            cout << "price:" << Products[i][3] << endl;
            cout << "Quantity:" << Products[i][4] << endl;

            cout << "-----------------------" << endl;
        }

        cout << "thanks for adding products" << endl;
        cout << "-------------------------------" << endl;
        for (int i = 0; i < no; i++) {
            for (int j = 0; j < 5; j++) {
                arr[i][j] = Products[i][j];
            }

        }
        cout << "Brand" << "    " << "Product" << "    " << "Category" << "    " << "price" << "    " << "quantity" << endl;
        for (int i = 0; i < no; i++) {
            for (int j = 0; j < 5; j++) {
                cout << arr[i][j] << "    ";

            }
            cout << endl;

        }
    }


};

//---------------------------------------------//

class CustomerSearch : public AdminProduct {
public:
    AdminProduct a;

    void exploreproducts() {
        for (int i = 0; i < 2; i++) {
            for (int j = 0; j < 5; j++) {
                cout << a.arr[i][j] << "    ";

            }
            cout << endl;

        }
    }


};

class Storeowner : public Product
{
private:
    string Oname;
    string Oemail;

public:
    bool check_number(string str) {
        for (int i = 0; i < str.length(); i++)
            if (isdigit(str[i]) == false)
                return false;
        return true;
    }

    void addproduct() override {
        string storename;
        string storeid;
        int no;
        string Pname;
        string Pcat;
        string Bname;
        string Pquantity;
        string price;
        cout << "Enter store name:" << endl;
        cin >> storename;
        cout << "Enter storeId:" << endl;
        cin >> storeid;
        cout << "how many products will you add?" << endl;
        cin >> no;
        string Products[100][5];
        for (int i = 0; i < no; i++) {
            cout << "-----------------------" << endl;
            cout << "please enter brand name" << endl;
            cin >> Bname;
            if (check_number(Bname)) {
                cout << "---->failed to add product" << endl;
                cout << "-----------------------" << endl;
                cout << "---->please enter a number" << endl;
                cout << "-----------------------" << endl;
                addproduct();

            }
            else {
                Products[i][0] = Bname;
            }
            cout << "please enter product name" << endl;
            cin >> Pname;
            if (check_number(Pname)) {
                cout << "---->failed to add product" << endl;
                cout << "-----------------------" << endl;
                cout << "---->please enter a number" << endl;
                cout << "-----------------------" << endl;
                addproduct();

            }
            else {
                Products[i][1] = Pname;
            }
            cout << "please enter product category" << endl;
            cin >> Pcat;
            if (check_number(Pcat)) {
                cout << "---->failed to add product" << endl;
                cout << "-----------------------" << endl;
                cout << "---->please enter a number" << endl;
                cout << "-----------------------" << endl;
                addproduct();

            }
            else {
                Products[i][2] = Pcat;
            }

            cout << "please enter product price" << endl;
            cin >> price;
            if (check_number(price)) {
                Products[i][3] = price;
            }
            else {
                cout << "---->failed to add product" << endl;
                cout << "-----------------------" << endl;
                cout << "---->please enter a number" << endl;
                cout << "-----------------------" << endl;
                addproduct();

            }
            cout << "please enter product quantity" << endl;
            cin >> Pquantity;
            if (check_number(Pquantity)) {
                Products[i][4] = Pquantity;
            }
            else {
                cout << "---->failed to add product" << endl;
                cout << "-----------------------" << endl;
                cout << "---->please enter a number" << endl;
                cout << "-----------------------" << endl;
                addproduct();

            }
        }
        for (int i = 0; i < no; i++) {
            cout << "-----------------------" << endl;
            cout << i + 1 << " product added succeflly" << endl;
            cout << "Brand name:" << Products[i][0] << endl;
            cout << "product name:" << Products[i][1] << endl;
            cout << "Category:" << Products[i][2] << endl;
            cout << "price:" << Products[i][3] << endl;
            cout << "Quantity:" << Products[i][4] << endl;

            cout << "-----------------------" << endl;
        }

        cout << "thanks for adding products" << endl;
    }
};

//---------------------------------------------//

class Store
{
private:
    string Address;
    string StoreName;
    int storeId;
    string type;

public:
    void setStoreName(string sn) {
        StoreName = sn;
    }

    void setAddress(string a) {
        Address = a;
    }

    void setStoreId(int i) {
        storeId = i;
    }

    void setType(string t) {
        type = t;
    }

    string getStoreName() {
        return StoreName;
    }

    string getAdress() {
        return Address;
    }

    string getType() {
        return type;
    }

    int getStoreId() {
        return storeId;

    }
};
//--------------------------------//
class OnlineStore : public Store
{
private:
    string products;
    string website;

public:
    void BuyProdcuts();
};
//---------------------------------//
class NormalStore : public Store
{
private:
    string storename;
    string address;
public:
    void SupplyProducts();
};
//-----------------------------------------------------------------------//

class Statistics {

private:

    int Events;
    string Feedback;
    string MostorderBrands;
    string MostorderProd;
    int Soldproducts;

public:


    string MostOrderBrands();
    string Mostorderproducts();

};
//----------------------------//

class Payment {

private:

    int CardNumber;
    float Price;
    string type;

public:


    void decline();
    void MakePay();

};
//-------------------------------------//
int main()
{
    // Register
    Register newUser;

    cout << "Welcome, please register ";

    cout << "\nEnter your desired username: ";
    cin >> newUser.username;

    cout << "\nEnter your desired password: ";
    cin >> newUser.password;

    cout << "\nSuccessfully Registered your account, Please login below.";

    // login

    Login newLogin;

    cout << "\nUsername: ";
    cin >> newLogin.inpUsername;

    cout << "\nPassword: ";
    cin >> newLogin.inpPassword;

    if (newLogin.inpUsername == newUser.username && newLogin.inpPassword == newUser.password) {
        cout << "\nSuccessfully logged in, loading your dashboard...";
    }
    else {
        cout << "Login Failed Please try again later!";
    }
        AdminProduct a;
        a.addproduct();
        CustomerSearch e;
        e.exploreproducts();

        Storeowner s;
        s.addproduct();
        return 0;
    }
