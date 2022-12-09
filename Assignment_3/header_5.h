#include<iostream>

using namespace std;

void getCapital(string statename, map<string, string > stateDataMap)
{
    cout<<"The capital of state "<<statename<<" : "<<stateDataMap[statename]<<endl;
}