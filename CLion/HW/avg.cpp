#include <iostream>
#include <iomanip>
#include <vector>

using namespace std;

/*
 * valueArray - a vector so we can dynamically scale up the input and not have to define an array size.
 * The program works by running the avg function and waiting for you to enter as many values as you please until
 * you enter a fail input i.e a char.
 * After that we loop through the vector adding the values and then te return takes the sum and divides by the vector size.
 *
 * -Raf
 */


double avg(){
    vector<double> valueArray;
    double input;
    char esc;
    bool inputLoop;
    double total;
    cout << "Please Enter Input Values:\n";
    while(inputLoop == false){
        cin >> input;
        cin.ignore(1000,'\n');
        if(cin.good()){
            cout << "Value accepted.\n";
            valueArray.push_back(input);
        }else if(cin.fail()){
            cout << "Non Double Value Entered. Exiting input loop.\n";
            for(double val : valueArray){
                total = total+val;
            }

            break;
        }
    }
    cout << "Total: \n";
    return total/valueArray.size();
}