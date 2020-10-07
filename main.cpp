#include <iostream>
#include <fstream>

using namespace std;

int main()
{
  int Red, Green, Blue;
  int Red1, Green1, Blue1;
  string typeofC, line;
  char response;
  fstream reader;

  reader.open("typesofcolor.txt",ios:: in );

  cout << "Are you someone with color blindness. ? (y or n) \n";
  cin >> response;
  if(response =='y'){
    while ( getline (reader,line) )
    {
      cout << line << '\n';
    }
  }else
  {
    cout<<"Welcome to the site!\n";
    return 0;
  }
  cout << "Please choose your color blindness from the list Above.\n";
  cin >> typeofC;
  if(typeofC == "Prot")
  {
    Red = 255;
    Green = 194;
    Blue = 10;
    Red1 = 12;
    Green1 = 123;
    Blue1 = 220;
  }else if(typeofC == "Prot")
  {
    Red = 225;
    Green = 190;
    Blue = 106;
    Red1 = 64;
    Green1 = 176;
    Blue1 = 166;
  } else if(typeofC == "Deut")
  {
    Red = 153;
    Green = 79;
    Blue = 0;
    Red1 = 0;
    Green1 = 108;
    Blue1 = 209;
  } else if(typeofC=="Trit")
  {
    Red = 230;
    Green = 97;
    Blue = 0;
    Red1 = 93;
    Green1 = 58;
    Blue1 = 155;
  }
  else
  {
    Red = 211;
    Green = 211;
    Blue = 211;
    Red1 = 105;
    Green1 = 105;
    Blue1 = 105;
  }
  cout << "Changes have been made to the site for easier viewing, enjoy!\n";

  return 0;
}
