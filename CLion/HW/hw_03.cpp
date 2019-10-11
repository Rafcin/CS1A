//
// Created by Rafael Szuminski on 10/1/19.
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

int splitNum() {

    int number;
    int sum = 0;
    int singDgt;
    int temp;

    cin >> number;

    while (number > 0){
        temp = (temp * 10) + number%10;
        number = number/10;
    }
    number = temp;
    while(number > 0){
        singDgt = number % 10;
        sum = sum + singDgt;
        number /= 10;
        cout << singDgt << " ";
    }

    cout << "\n";
    cout << sum;

    return 0;
}

