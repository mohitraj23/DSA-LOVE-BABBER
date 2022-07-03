#include<iostream>
using namespace std;


class Demo {

    public:
    int first;
    int second;
    static int total;

    Demo operator+ (Demo& temp) {
        Demo result;
        result.first = this->first + temp.first;
        result.second = this->second + temp.second;
        return result;
    }

    void operator++ () {
        cout << "Unary operator overloaded" << endl;
    }

};

class Human {
    public:
    int hands;
    int legs;
};

void operator<< (ostream& os, Demo& obj) {
    cout << obj.first << " ";
    cout << obj.second << " " << endl;
}

void operator<< (ostream& os, Human& obj) {
    cout << obj.hands << " ";
    cout << obj.legs << " " << endl;
}

//difinition of static variable 
int Demo::total = 0;


class Base {
    public:
    virtual void speak() {
        cout << "I m in Base class" << endl;
    }
};

class Derived: public Base {
    public:
    void speak() {
        cout << "I m in derived class" << endl;
    }
};



int main() {

    Base* bptr;
    Derived dobj;
    bptr = &dobj;
    bptr->speak();

    // Demo a;
    // Demo b;

    // Demo c = a+b;

    // ++a;

    // Demo obj;
    // cout << obj ;
    // cout << obj.total << endl;
    // cout << Demo::total << endl;


    // Human h;
    // cout << h ;



    return 0;
}