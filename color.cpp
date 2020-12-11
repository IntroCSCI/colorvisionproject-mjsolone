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

