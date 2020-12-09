#include <iostream>
#include <fstream>
#include <vector>
#include <string>
#include <stdio.h>      
#include <stdlib.h>

using namespace std;
char popUpMenu();
void answerSelection();
char colorBlindType();
vector<int> changeRgbVectorOne(vector <int> &,char);
vector <int> changeRgbVectorTwo(vector <int> &,char);

int main()
{
  vector <int> rgbOne,rgbTwo; 
  double line;
  char response, typeofC;
  fstream reader,readerTwo;

  reader.open("rgbFromHtml.txt",ios:: in );
  readerTwo.open("rgbFromHtml2.txt",ios:: in );
  if(reader.is_open()){
    while(readerTwo >> line){
      rgbOne.push_back(line);
    }
  }
  reader.close();
  if(readerTwo.is_open()) {
    while(readerTwo >> line){
      rgbTwo.push_back(line);
    }
  }
  response = popUpMenu();

  if(response =='y'){
    answerSelection();
    typeofC = colorBlindType();
    rgbOne = changeRgbVectorOne(rgbOne,typeofC); 
    rgbTwo = changeRgbVectorTwo(rgbTwo,typeofC);
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
void answerSelection(){
  cout<< "Protanopia(P)\nDeuteranopia(D)\nTritanopia(T)\nComplete (C)"<<endl;
}
char colorBlindType(){
  char type;
cout << "Please choose your color blindness from the list Above.\n";
  cin >> type;
  return type;
}
vector <int> changeRgbVectorOne(vector <int> &rgbOne,char typeofC){
if(typeofC == 'P' || typeofC == 'p')
  {
    rgbOne[0]=110;
    rgbOne[1]=154;
    rgbOne[2]=229;
    
  }else if(typeofC == 'C' || typeofC == 'c')
  {
    rgbOne[0]=110;
    rgbOne[1]=110;
    rgbOne[2]=110;
  } else if(typeofC == 'T' || typeofC == 't')
  {
    rgbOne[0]=166;
    rgbOne[1]=141;
    rgbOne[2]=111;
  } else if(typeofC == 'D' || typeofC == 'd')
  {
    rgbOne[0]=122;
    rgbOne[1]=168;
    rgbOne[2]=108;
  }
  else 
  {
    
  }
  return rgbOne;
  }
  vector <int> changeRgbVectorTwo(vector <int> &rgbTwo,char typeofC){
    if(typeofC == 'P' || typeofC == 'p')
  {
    rgbTwo[0]=247;
    rgbTwo[1]=203;
    rgbTwo[2]=202;
    
  }else if(typeofC == 'C' || typeofC == 'c')
  {
    rgbTwo[0]=214;
    rgbTwo[1]=214;
    rgbTwo[2]=214;
  } else if(typeofC == 'T' || typeofC == 't')
  {
    rgbTwo[0]=229;
    rgbTwo[1]=200;
    rgbTwo[2]=79;
  } else if(typeofC == 'D' || typeofC == 'd')
  {
    rgbTwo[0]=181;
    rgbTwo[1]=155;
    rgbTwo[2]=249;
  }
  else 
  {
    
  }
  return rgbTwo;
  }