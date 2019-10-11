//
// Created by Rafael Szuminski on 9/17/19.
//

#include <iostream>
#include <iomanip>
#include <math.h>
#include <cmath>
#include <fstream>
#include <vector>
#include <string>
#include <sstream>

using namespace std;

#define ESC 27 //Esc key for ASCII

double avgCalc(vector<double> inputs){
    double sum;
    for(double val : inputs){
        sum += val;
    }
    return sum/inputs.size();
}


int r() {


    cout << "---First Pass---\n";
    /*
     * First Run:
     *
     * If -1 sent into stream kill the loop do the avrg.
     */
    double inputNumA;
    vector<double> itemArrayA;
    cout << "Enter Values #1:\n";
    while(cin >> inputNumA){
        if(inputNumA == -1){
            break;
        }else{
            itemArrayA.push_back(inputNumA);
        }
    }
    cout << avgCalc(itemArrayA) << "\n";
    //Lets clear the array so I won't have to define another vector.
    itemArrayA.clear();


    cout << "---Second Pass---\n";
    /*
     * Second Run:
     *
     * EOF Method kill if EOF sent.
     */

    cout << "Enter Values #2:\n";
    double inputNumB;
    vector<double> itemArrayB;
    istringstream stream(inputNumB);
    while(cin >> inputNumB){
        if(cin.eof()){
            break;
        }else{
            itemArrayB.push_back(inputNumB);
        }
    }
    cout << avgCalc(itemArrayB) << "\n";
    //Lets clear the array so I won't have to define another vector.
    itemArrayB.clear();

}

