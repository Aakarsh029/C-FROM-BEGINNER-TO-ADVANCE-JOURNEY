#include<iostream>
#include<fstream>
#include<string>
#include<stdio.h>
using namespace std;
int main()
{
ifstream fin("data.txt");           //opening text file
int count=0;
string word,key;

cout<<"Enter a word to count:";
getline(cin,key);                           // taking imput of the word

while(fin)
{
  fin>>word;                       //extracting words from the file and storing in ch
  if((word.compare(key))==0)
   count++;
}
cout<<"Occurrence="<<count<<endl;
fin.close(); //closing file
return 0;

}