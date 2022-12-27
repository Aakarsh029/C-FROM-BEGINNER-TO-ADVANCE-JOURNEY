#include <iostream>
#include <fstream>
#include <cstring>
using namespace std;
int main()
{
    ofstream exp1;
    ifstream rd;
    exp1.open("2exp1.txt");
    string para, replace, replacewith;
    while (exp1)
    {
        getline(cin, para);
        if (para == "-1")
        {
            break;
        }
        exp1 << para << endl;
    }
    exp1.close();
    cout << "Enter the word to replace" << endl;
    cin >> replace;
    cout << "Enter the word to replace with" << endl;
    cin >> replacewith;
    rd.open("2exp1.txt");
    exp1.open("2exp2.txt");
    while (rd >> para)
    {
        // cout << para;
        if (para.compare(replace) == 0)
        {
            exp1 << replacewith<<" ";
            // cout << replacewith;
        }
        else
        {
            exp1 << para<<" ";
            // cout << para << endl;
        }
    }
    rd.close();
    exp1.close();
    rd.open("2exp2.txt");
    while (rd)
    {
        getline(rd, para);
        cout << para << endl;
    }
    rd.close();
    remove("2xp1.txt");
    rename("2exp2.txt", "2exp1.txt");
    return 0;
}