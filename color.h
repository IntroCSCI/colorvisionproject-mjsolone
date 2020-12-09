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
  void setColorBlind(char);
  void setColorOne(vector<int>);
  void setColorTwo(vector <int>);
  void changeColor();

};

#endif 