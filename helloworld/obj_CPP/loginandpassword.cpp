#include <iostream>
using namespace std;

class Enter{
    private:
    string login;
    string password;
    public:
    void setLogin(string login1){
        login = login1;
    }
    void setPassword(string password1){
        password = password1;
    }
    string getLogin(){
        return login;
    }
    string getPassword(){
        return password;
    }
};

int main(){
    Enter Person1;
    string login, password;
    cout << "Set login: " << endl;
    cin >> login;
    cout << "Set password: " << endl;
    cin >> password;
    Person1.setLogin(login);
    Person1.setPassword(password);
    cout << "Your account has been created." << endl;
    cout << "Please login:" << endl;
    cout << "Enter your login:" << endl;
    cin >> login;
    cout << "Enter your password:" << endl;
    cin >> password;
    if(Person1.getLogin()== login){
        if(Person1.getPassword()== password){
            cout << "Welcome!" << endl;
        }
        else{
            cout << "Invalid password." << endl;
        }
    }
    else{
        cout << "Invalid login." << endl;
    }
}