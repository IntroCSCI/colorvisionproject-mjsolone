#include "color.h"
#include <string>
#include <iostream>
#include <stdio.h>      
#include <stdlib.h>
using std::cout;
using std::endl;
using std::string;
// Constructer 
color::color(){
  TypeColorB = ' ';

}
// Setting the colorblind response to private member variable
void color::setColorBlind(char response){
  TypeColorB = response;
}
// Changing the colors of the chosen vectors
void color::changeColor(){
if(TypeColorB == 'P' || TypeColorB == 'p')
  {
    rgbUno[0]=110;
    rgbUno[1]=154;
    rgbUno[2]=229;
    
  }else if(TypeColorB == 'C' || TypeColorB == 'c')
  {
    rgbUno[0]=110;
    rgbUno[1]=110;
    rgbUno[2]=110;
  } else if(TypeColorB == 'T' || TypeColorB == 't')
  {
    rgbUno[0]=166;
    rgbUno[1]=141;
    rgbUno[2]=111;
  } else if(TypeColorB == 'D' || TypeColorB == 'd')
  {
    rgbUno[0]=122;
    rgbUno[1]=168;
    rgbUno[2]=108;
  }
  else 
  {
    
  }
}
//Setting values for colors within the class
void color::setColorOne(vector<int> rgbOne){
rgbUno = rgbOne;
}
void color::setColorTwo(vector <int> rgbTwo){
  rgbDos = rgbTwo;
}