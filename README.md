# multipleInheritanceCpp
comp20080 Assignment 8 (due by 23:59, Friday 29 November 2019)
In Assignment 7 you wrote a derived class of the Vehicle class from the lecture notes to represent a Train, and a derived class of Train to represent a Freight Train. In this Assignment you have to re-write these classes to also inherit from another class, Asset. This means we now want to view a Train (and therefore a Freight Train) as both a Vehicle and an Asset, as an example of multiple inheritance in C++



The Asset class is declared as follows (this is available in CS Moodle as Asset.h):



class Asset{

private:

  float value;  // current value of this asset

  int year;     // year this asset was acquired

public:

  Asset(float v, int y);  // sets value to v and year to y

  float getValue();       // returns value

  void setValue(float v); // sets value to v

  int getYear();          // returns year

  void depreciateAsset(); // decreases value by 10%

  void print_details();   // prints out value and year

};



As in Assignment 7, you must use the Vehicle class (defined in the lecture notes) as-is, without any changes. The Vehicle header and method implementation files are provided for you in CS Moodle: you must not upload them with your submission. If your submission does not compile and run with the Vehicle files posted in CS Moodle, you will receive 0 for your approach to this Assignment.



1. You first need to provide method implementations for the Asset class, as declared above and in Asset.h



2. Your re-written Train class should be similar to the Train class from Assignment 7, except:

-- overriding the print_details() method now has to take into account that a Train is both a Vehicle and an Asset;

-- the re-written Train constructor has to take into account that a Train is both a Vehicle and an Asset;

-- the depreciateAsset() method should be overridden to decrease the value of a Train by 15%



3. And your re-written Freight Train class should be similar to the Freight Train class from Assignment 7, except:

-- overriding the print_details() method now has to take into account that a Freight Train is both a Vehicle and an Asset;

-- the re-written Freight Train constructor has to take into account that a Freight Train is both a Vehicle and an Asset;

-- the depreciateAsset() method should be overridden to decrease the value of a Freight Train by 8%



4. Write another C++ program which tests your re-written Train and Freight Train classes, as follows:

-- Declare one Train object and two Freight Train objects, whose initial values are given in the textfile comp20080-autumn2019-Asst8-data.txt also posted in CS Moodle. The Train object ID, initial value, and year of acquisition are on the first 3 lines of this textfile, in this order, one per line; the Freight Train object IDs, initial values, and years of acquisition are on the 4th – 6th and 7th – 9th lines of this textfile, in this order, one per line.

-- Print to the screen the details of all three objects immediately after they have been declared.

-- Then, register all three objects.

-- Set the number of locomotives of the three objects according to the 10th line of the textfile comp20080-autumn2019-Asst8-data.txt (Train object) and the 11th and 12th lines of this textfile (Freight Train objects).

-- Set the number of wagons of the Freight Train objects according to the 13th and 14th lines of the textfile comp20080-autumn2019-Asst8-data.txt.

-- Next, depreciate the values of all three objects.

-- Then print to the screen the details of all three objects.

-- Finally, write to a new textfile comp20080-autumn2019-Asst8-output.txt the result of adding the two Freight Train objects.



When you have completed this program, submit it through the comp20080 Moodle page. Note: only submit your source files (the .cpp/.h files) and, if you like, the output of your program in a text file. DO NOT SUBMIT YOUR EXECUTABLE PROGRAM OR OTHER CODE::BLOCKS FILES.

Even if you have not completed the program by the submission deadline, submit whatever you have done. IT WILL NOT BE POSSIBLE TO SUBMIT YOUR WORK ONCE THE DEADLINE HAS PASSED.
