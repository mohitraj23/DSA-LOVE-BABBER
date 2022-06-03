#include<iostream>
#include<math.h>
using namespace std;

int main(){
    cout<<"Placement toh lagni hi hai "<<endl;
    int a=5;
    cout<<"Value of a is "<< a <<endl;

    bool b=0;
    cout<<"Value of b is " << b<<endl;
    cout<<"size of bool is "<<sizeof(b)<<endl;

    float f = 1.23;
    cout<<"Value of f is " <<f <<endl;

    cout<<"the size of float f is " <<sizeof(f)<<endl;

    char ch='t';
    cout<<"vale of ch is "<<ch<<endl;

    float val1=5.0;
    int val2 =3;

    int ans1= val1/val2;
    cout<<ans1<<endl;
    cout<<(5.0/3)<<endl;


    char ch1='a';
    int num5= (int)ch1;
    
    cout<<num5<<endl;



    if(true)
    {
        int n=5;
        cout<<n<<endl;
        if(true){
            int n=6;
            cout<<n<<endl<<endl;
        }
    }

    int num= -137;
        while(num!=0)
        {
            int digit = num% 10;
            cout<< digit<<endl;
            num = num/10;
        }
        cout<<"DONE"<<endl<<endl;

        int num1=6;
        int i =0;
        int ans=0;
        while(num1 !=0)
        {
            int bit = num1 &1;
            cout<<"bit "<<bit<<endl;
            ans=(bit * pow(10,i)) + ans;
            num1 = num1 >>1;
            i++;
        }
        cout<<"Binary no. "<<ans<<endl;

        int num3;
        cout<<"enter"<<endl;
        cin>>num3;
        bool isprime = true;
        int p=2;
        while(p<num3)
        {
            if(num3 %p ==0 )
            {
                isprime = false;
                break;
            }
            p++;
        }

        if(isprime==true)
        cout<<"prime"<<endl;

        else
        cout<<"not prime"<<endl;
}
