#include <iostream>
using namespace std;
int main()
{
    int rupees=1330;

    int notes;
    cout<<"Rupees :"<<rupees<<endl;;
    // cin >> rupees;
    int remainder = 0;
    switch (rupees)
    {

    case 1330:
        cout << "Number of notes 100 :"<<(rupees / 100) << endl;
        remainder = rupees % 100;

        cout <<"Number of notes 50 :"<< (remainder / 50) << endl;
        remainder = remainder % 50;

        cout <<"Number of notes 20 :"<< (remainder / 20) << endl;
         remainder = remainder % 20;

        cout <<"Number of notes 1 :"<< (remainder / 1) << endl;
        remainder = remainder % 1;
        break;
    }
}