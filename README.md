# Changing color combinations based on type of Color blindness.

## Description

My program, essentially, takes the user input on which type of color blindness they have and then the program will change the colors of said website into colors that are easier to be seen by each respective group.
# v0.2 Updates
Replace this text with your updated description
## Developer

Matthew Solone

## Example

To run the program, give the following commands:

```
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

```

Here is an example of the program running:

```
Are you someone with color blindness. ? (y or n) 
y
Prot
Deut
Trit
Complete
Please choose your color blindness from the list Above.
Complete
Changes have been made to the site for easier viewing, enjoy!
```

## C++ Guide

### Variables and Data Types

I used many varibales in this program. The first variable that I established was the 'int' variables. I had 6 'int' variables each held a number that would be combined into a color combination so that the site would be easy to see. The next variable I established was 'string' variables. The "typeofC" variable was user inputed to see which type of color blindness the user had and this changed the color combinations. Then I established "line" which was for pulling the types of colorblindness out of my .txt file. Then I had s 'char' which was for answers the prompt "Are you someone with color blindness. ? (y or n)". Finally I had the 'fstream' variable whic was for opening and closing my file.

### Input and Output

This program relies heavily on the user input and the correct output of the program. I first prompted the user to see if they had colorblindness. If answered "y" then we moved onto asking for user input on which type of colorblindness they had. If answered "n" the user was directed to the site. 

### Decisions

This code I have constructed consists of mostly decision functions. The first decision was if answered "y" the program moved onto the list of colorblindness, 'else' the program directed the user ot the site. Then the next decision functions were for the type of colorblindness this went through if the user choose a certain type of colorblindness then they would get a different color combination.

### Iteration

I had one interation in my program. I used a 'while' loop to get the contents of the file labed typesofcolor.txt. These were used to prompt the user to choose which type they had.

### File Input and Output

I used 'fstream' to import one .txt file which held the different types of colorblindness of which the user could choose. 
### Arrays/Vectors
!!!Replace with a summary and examples of how arrays/vectors have been used effectively and appropriately!!!

### Functions
!!!Replace with a summary and examples of how functions have been used effectively and appropriately!!!
