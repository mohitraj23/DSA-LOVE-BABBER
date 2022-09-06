#include<bits/stdc++.h>
using namespace std;

//encapsulation
class Human{
    //Data member or properties
    private:
    int age;
    // int weight;
    // int height;
    
    //Member function or Behaviour
    public:
    int getage()
    {
        int age=19;
        return age;
    }
};
int main()
{
    Human obj;
    cout<<sizeof(obj)<<endl;
    
    Human *objp = new Human();
    cout<<sizeof(objp)<<endl;
    cout<<objp->getage()<<endl;
    
    // cout<<obj.getage()<<endl;
    return 0;
}







//inheritance

class Human{
    //Data member or properties
    public:
    
    int age;
    // int weight;
    // int height;
    
    //Member function or Behaviour
    public:
    int getage()
    {
        int age=19;
        return age;
    }
};

class female:public Human
{
    //derived class
};
int main()
{
    // Human obj;
    // cout<<sizeof(obj)<<endl;
    
    // Human *objp = new Human();
    // cout<<sizeof(objp)<<endl;
    // cout<<objp->getage()<<endl;
    
    // cout<<obj.getage()<<endl;
    
    female p;
    cout<<p.getage();
    return 0;
}



//single level inheritance
class father
{
    public:
    int age;
    string name;

    public:
    int getage()
    {
        age= 19;
        return age;
    }

};

class Madhu: public father
{

};

class Mohit: public father
{
    
};


int main()
{
    Mohit obj;
    cout<<obj.getage();

    


}
