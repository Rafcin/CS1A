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

/*
 * readFile()
 * Takes the input of the file path. The file path must be a txt file containing ints or doubles
 * returns double vector.
 */
vector<double> readFile(string path){
    ifstream f;
    vector<double> a;
    double v;
    f.open(path);
    if(f){
        while(f >> v ){a.push_back(v);}
        f.close();
    }else if(!f){cout << "Unable to read: "<<path<<"\n";}
    return a;
}

double avg(vector<double> inputs){
    double sum;
    for(double val : inputs){
        sum += val;
    }
    return sum/inputs.size();
}

int lab_03_main() {

    vector<double> array;
    fstream outputF;

    int input;
    //I had greater ideas but I decided not to use bool.
    //bool check(int a, int b){return a<b;}
    array = readFile("/Users/rafaelszuminski/CS1A/CLion/ValFile");
    cout << "Enter Vals:\n";
    /*
    while(cin >> input && !cin.fail()){
        array.push_back(input);
    }
     */
    cout << "Exit Input...\n\n";
    //get sorted max elm of array.
    cout << "Max Number is:" << *max_element(array.begin(),array.end())<<"\n";
    //2nd val is the sorted max minus n
    cout << "2nd Num is:" << *max_element(array.begin(),array.end()-1)<<"\n";

    double finalVal = avg(array);
    cout << "Avg is: " << finalVal;
    outputF.open("/Users/rafaelszuminski/CS1A/CLion/Avg");
    outputF << finalVal;
    outputF.close();



    return 0;
}

