#include <iostream>
using namespace std;

class Base1{
    int base1;
    public:
        Base1(int i){
            base1 = i;
            cout<<"Base1 constructor is called."<<endl;
        }
        void printbase1(){
            cout<<"Value of base 1 is "<<base1<<endl;
        }
};

class Base2{
    int base2;
    public:
        Base2(int i){
            base2 = i;
            cout<<"Base2 constructor is called."<<endl;            
        }
        void printbase2(){
            cout<<"Value of base 2 is "<<base2<<endl;
        }        
};

class Derived : public Base2 , public Base1{
    int derived;
    public:
        Derived(int a,int b,int c) : Base1(a),Base2(b){
            derived=c;
            cout<<"Derived constructor is called"<<endl;
        }
        void printderived(){
            cout<<"Value of derived is "<<derived<<endl;
        }    
};
int main()
{
    Derived d1(1,2,3);
    d1.printbase1();
    d1.printbase2();
    d1.printderived();

return 0;
}