#include <iostream> 
using namespace std;

class Number{
    protected:
    int a;
    double b;
    
    public:
    void setNumber(int a1,int b1){
        a = a1;
        b = b1;
    }
    virtual void add(int c)=0;
    virtual void subtract(int c)=0;
    virtual void multiply(int c)=0;
    virtual void divide(int c)=0;
};

class intNumber : public Number{
    public:
    void add(int c){
        cout<< a << " + "<< c << " is " << a+c<< "." <<endl;
    }
    void subtract(int c){
        cout<< a << " - " << c << " is " << a-c << "." << endl;
    }
    void multiply(int c){
        cout<< a << " * " << c << " is " << a*c << "." << endl;
    }
    void divide(int c){
        if (c == 0){
            cout << "Cannot divide by zero." << endl;
        }
        else{
            cout<< a << " / " << c << " is " << a/c << "." << endl;
        }
    }
};

class doubleNumber : public Number{
    public:
    void add(int c){
        cout<< b << " + " << c << " is " << b+c << "." << endl;
    }
    void subtract(int c){
        cout<< b << " - " << c << " is " << b-c << "." << endl;
    }
    void multiply(int c){
        cout<< b << " * " << c << " is " << b*c << "." << endl;
    }
    void divide(int c){
        if (c == 0){
            cout << "Cannot divide by zero." << endl;
        }
        else{
            cout<< b << " / " << c << " is " << b/c << "." << endl;
        }
    }
};

int main (){
    int a1,c;
    double b1;
    char c1;
    bool f=true;
    int n;

    intNumber a;
    doubleNumber b;
    Number *n1=&a;
    Number *n2=&b;

    while (f==true){
        cout << "Enter a number(1-if you want to calculate; 0-if you want to end program)" << endl;
        cin >> n;
        if (n==1){
            cout << "Enter int number: "<< endl;
            cin >> a1;
            cout << "Enter double number: "<< endl;
            cin >> b1;
            cout << "Enter int variable: "<< endl;
            cin >> c;
            cout << "Enter char that defines a mathematical operation: "<< endl;
            cin >> c1;

            n1->setNumber(a1,b1);  
            n2->setNumber(a1,b1);

            cout << "Result:" << endl;
            switch (c1)
            {
            case '+':
                a.add(c);
                b.add(c);
                break;
            case '-':
                a.subtract(c);
                b.subtract(c);
                break;
            case '*':
                a.multiply(c);
                b.multiply(c);
                break;
            case '/':
                a.divide(c);
                b.divide(c);
                break;
            default:
                cout << "Invalid operation."<< endl;
                break;
            }
                }
            else{
                break;
            }
    }
    
}