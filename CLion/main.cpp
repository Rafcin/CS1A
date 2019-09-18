#include <iostream>
#include <iomanip>
#include <math.h>
#include <cmath>
#include <fstream>
#include <vector>
#include <algorithm>

using namespace std;

int main(){

    int input;
    vector<int> array;
    //I had greater ideas but I decided not to use bool.
    //bool check(int a, int b){return a<b;}
    cout << "Enter Vals:\n";
    while(cin >> input && !cin.fail()){
        array.push_back(input);
    }
    cout << "Exit Input...\n";
    //get sorted max elm of array.
    cout << "Max Number is:" << *max_element(array.begin(),array.end())<<"\n";
    //2nd val is the sorted max minus n
    cout << "2nd Num is:" << *max_element(array.begin(),array.end()-1)<<"\n";
    
    return 0;


}