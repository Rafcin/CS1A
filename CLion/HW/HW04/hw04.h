//
// Created by Rafael Szuminski on 10/10/19.
//

#ifndef CLION_HW04_H
#define CLION_HW04_H

#endif //CLION_HW04_H

#include <iostream>
#include <iomanip>

using namespace std;

void drawInvertedTriangle(int num_rows, char letter){
    int num_col = (num_rows-1)*2+1;
    for(int i=0; i<num_rows; i++){
        for(int space_loop_counter=0;space_loop_counter<i;space_loop_counter++)
            cout << " ";

        for(int char_loop=i;char_loop<(num_col - i);char_loop++)
            cout << letter;

        cout << "\n";
    }
}

void drawInvertedRightTriangle(int num_rows, char letter){
    int num_col = (num_rows-1)*2+1;
    for(int i=0; i<num_rows; i++){
        for(int space_loop_counter=0;space_loop_counter>i;space_loop_counter++)
            cout << " ";

        for(int char_loop=i;char_loop<(num_col - i);char_loop++)
            cout << letter;

        cout << "\n";
    }
}



void drawTriangle(int n, char letter){
    int n_ = n;
    for(int i=0; i<n;i++){
        for(int j=n_; j>0;j--){
            cout<<" ";
        }
        for(int k=0; k<=i*2;k++){
            cout<<letter;
        }
        n_--;
        cout << "\n";
    }
}

//n-1
void drawRightTriangle(int n, char letter){
    for(int i=0; i<n;i++){
        for(int j=0; j<i;j++){
            cout<<letter;
        }
        cout << "\n";
    }
}

void drawSq(int n, char l){
    for (int row = 1; row <= n; ++row)
    {
        for (int col = 1; col <= n; ++col)
        {
            cout << l <<" ";
        }
        cout << endl;
    }
}

void drawIsoTri(int n, char l){

}

void showOptions(){
    cout << "========[Options Menu]========"<< endl;
    cout << "Select the shape of your choice followed by the size and letter" << endl;
    cout << "1. Triangle" << endl;
    cout << "2. Right Triangle" << endl;
    cout << "3. Upside Down Triangle" << endl;
    cout << "4. Inverted Right Triangle" << endl;
    cout << "5. Draw Square" << endl;
    cout << "6. Draw Iso Triangle" << endl;
    cout << "==============================" << endl;
}

int askSize(){
    int size;
    cout << "Please enter a size..."<<endl;
    cin >> size;
    return size;
}

char askChar(){
    char letter;
    cout << "Please enter a char..."<<endl;
    cin >> letter;
    return letter;
}

void ask(){
    showOptions();
    int option;
    cout << "Enter Shape # and then # size followed by the character."<<endl;
    cin >> option;
    if(option == 1){
        drawTriangle(askSize(),askChar());
    }else if(option == 2){
        drawRightTriangle(askSize(),askChar());
    }else if(option == 3){
        drawInvertedTriangle(askSize(),askChar());
    }else if(option == 4){
        drawInvertedRightTriangle(askSize(),askChar());
    }else if(option == 5){
        drawSq(askSize(), askChar());
    }else if(option == 6){

    }
}