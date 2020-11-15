# Changing color combinations based on type of Color blindness.

## Description

My program, essentially, takes the user input on which type of color blindness they have and then the program will change the colors of said website into colors that are easier to be seen by each respective group.
# v0.2 Updates
In addition to the original use of this algorithim I have added a few updates to fix the funtionality. For example putting code chunks into functionsd and adding the use and storage of vectors.
## Developer

Matthew Solone

## Example

To run the program, give the following commands:

```
#include <iostream>
#include <fstream>
#include <vector>
#include <string>

using namespace std;
char popUpMenu();
void answerSelection();
char colorBlindType();
void changeColors(char);
vector <int> changeRgbVectorOne(vector <int> &,char);
vector <int> changeRgbVectorTwo(vector <int> &,char);
int main()
{
  vector <int> rgbOne,rgbTwo; 
  double line;
  char response, typeofC;
  fstream reader,readerTwo;

  reader.open("rgbFromHtml.txt",ios:: in );
  readerTwo.open("rgbFromHtml.txt",ios:: in );
  if(reader.is_open()){
    while(reader >> line){
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