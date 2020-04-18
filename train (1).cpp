#include "train.h"

#include <iostream>

using namespace std;

Train::Train(int Train_id,int value, int year ) : Vehicle(Train_id), Asset(value,year) // constructor calling the base

{
	NumberOfLocomotives = 2; 
}

void Train::setLocomotiveNumber(int n) // setting loco. number
{
  NumberOfLocomotives  = n;
}
int Train::getLocomotiveNumber(){      //getting loco number
	return NumberOfLocomotives;
}
void Train::print_details() // overriding this method from Vehicle class
{
  cout << "\nTrain number " << get_vehicle_id();
  cout << "\nLocomotive number: " << NumberOfLocomotives << "\n";
  cout << "Asset Value: " << getValue()*0.85 << "\n";
  cout << "Year Of: " << getYear()<< "\n";
  if (get_v_registered())
    cout << "This train has been registered\n";
  else 
  	cout << "This train has not been registered\n";
	
}
void Train::depAsset(){
  float x;
  x = getValue()*0.85;
    setValue(x);
}
