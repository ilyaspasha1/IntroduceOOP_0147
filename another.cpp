#include <iostream>
using namespace std;

class persegipanjang
{
public:
    float panjang;
    float lebar;
    float luas;
    void inputdata()
    {
        cout << "input panjang:";
        cin >> panjang;
        cout << "input lebar:";
        cin >> lebar;
        cout << "input luas:";
        cin >> luas;
    };
    void menghtungluas()
    {
        luas = panjang * lebar;
    };
    void output()
    {
        cout << "luas persegi panjang =" << luas << endl;
    };
};

int main()
{

    persegipanjang per;
    per.inputdata();
    per.menghtungluas();
    per.output();
};