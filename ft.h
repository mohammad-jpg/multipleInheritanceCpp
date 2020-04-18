#include "Vehicle.h"
#include "train.h"

class freightTrain : public Train{

private:
	int wagonNumber; //new data, not in V class

public:
	freightTrain (int freightTrain_ID, int value , int year );
	void setWagonNumber(int n); // method to  method to set the number of wagons of an F Train object
	void print_details();
	int operator + (freightTrain &x);
	void depAssets();




};