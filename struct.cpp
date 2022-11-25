//named structures 
#include <iostream>
#include <string.h>
using namespace std ;


//Declare a structure named "car"
struct car {

string brand;
string model;
int year;



};

int main ()
{
    //create a car structure and store it myCar1;
    car myCar1;
    myCar1.brand ="BMW";
    myCar1.model ="X5";
    myCar1.year =1999;

    //Create a car structure and store it in myCar1;
    car myCar2;
  myCar2.brand ="Ford";
    myCar2.model ="Mustang";
    myCar2.year =1969;

    //print the structure members
    cout << myCar1.brand << " "<< myCar1.model << " "<< myCar1.year <<endl;
 cout << myCar2.brand << " "<< myCar2.model << " "<< myCar2.year <<endl;

 return 0;
}




















