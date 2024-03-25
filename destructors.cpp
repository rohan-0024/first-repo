#include <iostream>
using namespace std;

int count = 0;
class gclass
{
public:
    
    gclass()
    {
        count++;
        cout << "This is the time when our constructor is called for obect " << count << endl;
    }

    ~gclass()
    {
        cout << "This is the time when our destructor is called for obect " << count << endl;
        count--;
    }
};

int main(int argc, char const *argv[])
{
    cout << "We are inside our main function.\n";
    cout << "Lets create a object here.\n";
    gclass num1;
    {
        cout << "We are entering this  block.\n";
        cout << "Lets create two more objects. \n";
        gclass num2;
        gclass num3;
        cout << "We are exiting this block.\n";
    }
    cout << "We are back to our main block.\n";
    return 0;
}
