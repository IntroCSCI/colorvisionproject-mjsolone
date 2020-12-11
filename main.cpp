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
