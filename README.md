# Changing color combinations based on type of Color blindness.

## Description

My program, essentially, takes the user input on which type of color blindness they have and then the program will change the colors of said website into colors that are easier to be seen by each respective group.
# v0.2 Updates
In addition to the original use of this algorithim I have added a few updates to fix the funtionality. For example putting code chunks into functionsd and adding the use and storage of vectors.
#v1.0 Updates
In this update I cleaned up the program by adding the class 'color' which stores the type of colorblindness and the two colors that changed.
## Developer

Matthew Solone

## Example

To run the program, give the following commands:

```
// main.cpp

#include "color.h"
#include <iostream>
#include <fstream>
#include <vector>
#include <string>
#include <stdio.h>      
#include <stdlib.h>

using namespace std;
char popUpMenu();


int main()
{
  // Declare all local variables
  vector <int> rgbOne,rgbTwo; 
  char response, typeofC;
  fstream reader,readerTwo;
  color rgbAlpha;

// Read in color combos
  reader.open("rgbFromHtml.csv",ios:: in );
  readerTwo.open("rgbFromHtml2.csv",ios:: in );
  if(reader.is_open()){
    double line;
    while(reader >> line){
      rgbOne.push_back(line);
    }
  }
  reader.close();
  if(readerTwo.is_open()) {
    double linear;
    while(readerTwo >> linear){
      rgbTwo.push_back(linear);
    }
  }

  // Asks user whether or not they are colorblind
  response = popUpMenu();
  
  if(response =='y'){
// Set which color blind
    rgbAlpha.setColorBlind();
// Setting colors
    rgbAlpha.setColors(rgbOne,rgbTwo);
// Changing colors
    rgbAlpha.changeColors();

    cout << "Changes have been made to the site for easier viewing, enjoy!\n";
  }else
  {
    cout<<"Welcome to the site!\n";
    return 0;
  }

  return 0;
}

char popUpMenu(){
  char response;
  cout << "Are you someone with color blindness. ? (y or n) \n";
  cin >> response;
  return response;
}

//color.h

#ifndef COLOR_H
#define COLOR_H
#include <string>
#include <vector>
#include <iostream>
#include <stdio.h>     
#include <stdlib.h>
using std::cout;
using std::string;
using std::vector;

class color{
  private:
  char TypeColorB;
  vector <int> rgbUno;
  vector <int> rgbDos;
  public:
  color();
  //void setColorBlind(char);
  void setColorBlind();
  void setColors(vector<int>,vector<int>);
  
  void changeColors();

};

#endif 

//color.cpp

#include "color.h"
#include <string>
#include <iostream>
#include <stdio.h>      
#include <stdlib.h>
using std::cout;
using std::cin;
using std::endl;
using std::string;
// Constructer 
color::color(){
TypeColorB = ' ';
 
}
void color::setColorBlind(){
  char response;
  cout<< "Protanopia(P)\nDeuteranopia(D)\nTritanopia(T)\nComplete (C)"<<endl;
  cout << "Please choose your color blindness from the list above.\n";
  cin >> response;
  TypeColorB = response;
}
//Setting values for colors within the class
void color::setColors(vector <int> rgbEx,vector <int> rgbYx){
rgbUno = rgbEx;
rgbDos = rgbYx;
}
// Changing the colors of the chosen vectors
void color::changeColors(){
if(TypeColorB == 'P' || TypeColorB == 'p')
  {
    rgbUno[0]=110;
    rgbUno[1]=154;
    rgbUno[2]=229;
    rgbDos[0]=247;
    rgbDos[1]=203;
    rgbDos[2]=202;
  }else if(TypeColorB == 'C' || TypeColorB == 'c')
  {
    rgbUno[0]=110;
    rgbUno[1]=110;
    rgbUno[2]=110;
    rgbDos[0]=214;
    rgbDos[1]=214;
    rgbDos[2]=214;
  } else if(TypeColorB == 'T' || TypeColorB == 't')
  {
    rgbUno[0]=166;
    rgbUno[1]=141;
    rgbUno[2]=111;
    rgbDos[0]=229;
    rgbDos[1]=200;
    rgbDos[2]=79;
  } else if(TypeColorB == 'D' || TypeColorB == 'd')
  {
    rgbUno[0]=122;
    rgbUno[1]=168;
    rgbUno[2]=108;
    rgbDos[0]=181;
    rgbDos[1]=155;
    rgbDos[2]=249;
  }
  else 
  {
    
  }
}



```

Here is an example of the program running:

```
Are you someone with color blindness. ? (y or n) 
y
Protanopia(P)
Deuteranopia(D)
Tritanopia(T)
Complete (C)
Please choose your color blindness from the list Above.
D
Changes have been made to the site for easier viewing, enjoy!
//Or if user inputs n/N 
Are you someone with color blindness. ? (y or n) 
n
Welcome to the site!
```

## C++ Guide

### Variables and Data Types

I used many variables in this program. The first variable that I established was the 'int' variables. I had 6 'int' variables each held a number that would be combined into a color combination so that the site would be easy to see. The next variable I established was 'string' variables. The "typeofC" variable was user inputted to see which type of color blindness the user had and this changed the color combinations. Then I established "line" which was for pulling the types of colorblindness out of my .txt file. Then I had s 'char' which was for answers the prompt "Are you someone with color blindness. ? (y or n)". Finally, I had the 'fstream' variable which was for opening and closing my files. I also now included two vectors that would store example RGB values from the Amazon .html.

### Input and Output

This program relies heavily on the user input and the correct output of the program. I first prompted the user to see if they had colorblindness. If answered "y" then we moved on asking for user input on which type of colorblindness they had. If answered "n" the user was directed to the site. 

### Decisions

This code I have constructed consists of mostly decision functions. The first decision was if answered "y" the program moved onto the list of colorblindness, 'else' the program directed the user to the site. Then the next decision functions were for the type of colorblindness this went through if the user chooses a certain type of colorblindness then they would get a different color combination.

### Iteration

I had two interation in my program. I used a 'while' loop to get the contents of the .txt files into their respective vectors so that they each had values.

### File Input and Output

I used 'fstream' to import two .txt files which held the different RGB values that were pulled from the html.
### Arrays/Vectors
I used vectors to hold the example RGB values that I picked out the .html from Amazon's homepage. Each vector held 3 values, RGB respectively. From this, the program can change each value in the vector to suit the color blindness selected.
### Functions
I used a total of 5 functions throughout my program. The first was labeled 'popUpMenu' which prompted the user to whether or not they had a type of colorblindness. The next was 'answerSelection', this prompted the user to pick from a list of colorblindness types. This went hand in hand with the function 'colorBlindType' this gave the list of different colorblindness. Then were the functions 'changeRgbVectorOne' and 'changeRgbVectorTwo'. These functions were the ones that change the values within the vectors.
### Classes
I utilized classes by creating the class called 'color'. Within the class I had three private variables, two that held color and one that held the type of colorblindness. The functions withtin the class had the following uses: to set the type of colorblindness, set the colors to the private vectors, and finally change the colors within those vectors.