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
