#include<iostream>

#include "header_3.h"

using namespace std;

int
main ()
{
    // declaring map container stateDataMap
    // key is our state name, and value is the capital name
    map < string, string > stateDataMap;
    
    // adding values to the map container declared
    stateDataMap["Nebraska"] = "Lincoln";
    stateDataMap["New York"] = "Albany";
    stateDataMap["Ohio"] = "Columbus";
    stateDataMap["California"] = "Sacramento";
    stateDataMap["Massachusetts"] = "Boston";
    stateDataMap["Texas"] = "Austin";
    
    // changing the capital of California to Los Angeles
    stateDataMap["California"] = "Los Angeles";
    
    // taking input of statename from user, and printing the capital name
    cout<<"Enter State Name : ";
    string s;
    getline(cin, s);
    getCapital(s, stateDataMap);
    
    
    return 0;
}
