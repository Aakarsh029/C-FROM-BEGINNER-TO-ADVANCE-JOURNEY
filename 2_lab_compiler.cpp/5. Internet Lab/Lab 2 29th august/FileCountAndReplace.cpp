#include <bits/stdc++.h>
using namespace std;

int main()
{
int i=0,cpos;
string new_word,filename,str,old;
stringstream text;
fstream file_ob; 
 
 cout<<"Enter your file name:";
 cin>>filename;
cout<<endl<<"Enter the word you want to replace: ";
cin>>old;
cout<<"Enter the new word to replace old one: ";
cin>>new_word;
cout<<"Word is found at: ";

file_ob.open(filename.c_str(), ios::in|ios::out|ios::binary);
text<<file_ob.rdbuf();                     
str=text.str();      

    size_t pos = str.find(old);                   
    while( pos != std::string::npos)            
    {
      if(pos==0)
      cpos=pos+old.size();
      else
      cpos=pos-1;
      if((isspace(str[cpos])||ispunct(str[cpos])) && (isspace(str[pos+old.size()]))||ispunct(str[pos+old.size()]))                               //Checking whether found substring is a word or not
       {
        cout<<pos<<" ";
        str.replace(pos,old.length(),new_word);
        i++;
       }
            pos=str.find(old, pos + old.size()+1);     
        }
    if(i==0)
    cout<<"No position";
cout<<"."<<endl;
cout<<"Total count:"<<i<<" time(s)"<<endl;
if(i>0)
cout<<" *********Your file has been modified**********";
ofstream write_file(filename.c_str(), ios::binary);
    write_file <<str; 
file_ob.clear();
file_ob.close();
return 0;
}