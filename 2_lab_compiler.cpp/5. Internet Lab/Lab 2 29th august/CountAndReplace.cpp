#include <bits/stdc++.h>

using namespace std;

int main()
{
    int i = 0, cpos;
    string new_word, filename, str, old,s;
 


    getline(cin, s);

    cout << endl
         << "Enter the word to replace: ";
    cin >> old;
    cout << "Enter the new word to replace old one: ";
    cin >> new_word;

    str = s;

    size_t pos = str.find(old);
    while (pos != std::string::npos)
    {
        if (pos == 0)
            cpos = pos + old.size();
        else
            cpos = pos - 1;
        if ((isspace(str[cpos]) || ispunct(str[cpos])) && (isspace(str[pos + old.size()])) || ispunct(str[pos + old.size()])) 
        {

            str.replace(pos, old.length(), new_word);
            i++;
        }
        pos = str.find(old, pos + old.size() + 1);
    }

    cout << "Total count:" << i << " time(s)" << endl;
    if (i > 0)
        cout << "Text Replaced" << endl;
        cout<<endl;

    cout << str;
    cout<<endl;
    return 0;
}