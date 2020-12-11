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