//
// Created by Rafael Szuminski on 9/17/19.
//

#include <iostream>
#include <iomanip>
#include <math.h>
#include <cmath>
#include <fstream>
#include <vector>

using namespace std;

#define ESC 27 //Esc key for ASCII

double avgCalc(vector<double> inputs){
    double sum;
    for(double val : inputs){
        sum += val;
    }
    return sum/inputs.size();
}

int run() {

    cout << "---First Pass---\n";
    /*
     * First Run:
     *
     * While we have input and the input is good enter as many values as you want into the
     * vector. Once you want to exit the loop you use CMD-D or enter a non double type into the input to kill the
     * loop.
     *
     * Killing the loop prints the avg of all current entered values.
     */
    double inputNum;
    vector<double> itemArray;
    cout << "Enter Values #1:\n";
    while(cin >> inputNum && cin.good() ){
        itemArray.push_back(inputNum);
        if(cin.fail()){
            break;
        }
    }
    cout << avgCalc(itemArray) << "\n";
    //Lets clear the array so I won't have to define another vector.
    itemArray.clear();



    cout << "---Second Pass---\n";
    /*
     * Second Run:
     *
     * Here we have a while loop that has a count called doomsdayCount!
     * while the counter is less than or equal to 10 the cin input is active and we can enter numbers
     * that are then pushed to the double vector.
     * Then we use avg() and cout the avg of the values.
     */

    int doomsdayCounter = 0;
    cout << "Enter Values #2:\n";
    while(doomsdayCounter <= 10 && cin >> inputNum){
        itemArray.push_back(inputNum);
        doomsdayCounter++;
    }
    cout << avgCalc(itemArray) << "\n";
    //Lets clear the array so I won't have to define another vector.
    itemArray.clear();

}

