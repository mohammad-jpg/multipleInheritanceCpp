#include <iostream>
#include <fstream>
#include "ft.h"

using namespace std; 
int main ()
{
	ifstream fx;
	fx.open("comp20080-autumn2019-Asst8-data.txt");
	

	if (!fx)
	{
		cout<<"file has not been found\n";

	}
	int a,b,c,d,e,f,g,h,i,j,k,l,m,n,o,p;

	fx>>a>>b>>c>>d>>e>>f>>g>>h>>i>>j>>k>>l>>m>>n;
	 
       Train t1(a,b,c);
       freightTrain f1(d,e,f);
       freightTrain f2(g,h,i);


       t1.print_details();
       f1.print_details();
       f2.print_details(); // printing deatils


       t1.register_vehicle();
       f1.register_vehicle();
	   f2.register_vehicle(); // registering vehicles

	   t1.setLocomotiveNumber(j);
	   f1.setLocomotiveNumber(k);
	   f2.setLocomotiveNumber(l); // setting locomotive numberts

	   f1.setWagonNumber(m);
	   f2.setWagonNumber(n);  // setting wagon number


	   t1.depAsset();
	   f1.depAssets();
	   f2.depAssets();   // dep assets

	   t1.print_details();
	   f1.print_details();
	   f2.print_details();  // reprintinf detailes


	   int totalw = m+n;
	   float totalv = e+ h;


	   ofstream of;
	   of.open("comp20080-autumn2019-Asst8-data.txt");
	   if(!of)
	   {
	   	cout << "File error";
	   }
	   of << "Total Wagon:"<< totalw << "\n" << "Total Value:" << totalv ;


	   fx.close();
	   of.close();
    
  };




