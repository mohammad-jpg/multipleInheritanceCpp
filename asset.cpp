#include <iostream>
#include "Asset.h"
using namespace std;
void Asset::print_details(){
    
    cout<<"Value : "<<value<<" year : "<<year;

}

void Asset::depreciateAsset(){
    
    value = getValue()*0.9;
    
}
Asset::Asset(float v, int y){
    
    value = v;
    year = y;
    
}
int Asset::getYear(){
    
    return year;
}

float  Asset::getValue(){
    return value;
    
}
void Asset::setValue(float v){
 
    value = v;
}