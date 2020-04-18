#include "ft.h"
#include "train.h" 

#include <iostream>

using namespace std;
freightTrain::freightTrain(int freightTrain_ID , int value , int year): Train(freightTrain_ID,value, year)

{
  wagonNumber = 20;

}
void freightTrain::setWagonNumber(int n) // setting wagon number
{
  wagonNumber = n;
}

int freightTrain::operator + (freightTrain & x) // verload the addition operator for your Freight Train class,
{
  int w = x.wagonNumber + wagonNumber;
  return w;

}
void freightTrain::depAssets () 
{
  int w = getValue()*0.92;
  setValue(w);
  

}
void freightTrain::print_details() // override the print_details() method inherited by your Freight Train class.
{
  cout << "\nFreight Train ID : " << get_vehicle_id() << endl;
  
  cout << "Asset Value: " << getValue()*0.85 << "\n";
  cout << "Year: " << getYear()<< "\n";
  if (get_v_registered())
    cout << "This train has been registered\n";
  else
    cout << "This train has not been registered\n";
}