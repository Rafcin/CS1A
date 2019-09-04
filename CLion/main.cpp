#include <iostream>
#include <iomanip>

using namespace std;

double avg(){
    double values;

}

int main() {

    double score1;
    double score2;
    double score3;

    cout << "Enter Input Values:\n";
    cin >> score1 >> score2 >> score3;

    double avg;
    avg = (score1+score2+score3)/3;

    cout << "The Avg is:\n";
    cout << avg;
    return 0;
}