#ifndef Train_h
#define Train_h

#include "Vehicle.h"
#include "Asset.h"

class Train : public Vehicle,public Asset{

private:
	int NumberOfLocomotives; //new data, not in V class

public:
	Train (int Train_ID, int value, int year );
	void setLocomotiveNumber(int n); // method to  method to set the number of locomotives of a Train object
	int getLocomotiveNumber(); // method to  gethod to set the number of locomotives of a Train object
	void print_details();
	void depAsset();

};

#endif
