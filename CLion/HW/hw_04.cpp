//
// Created by Rafael Szuminski on 10/3/19.
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

/*
 * Matrix HW
 * //a row
 * //b col
 */

int mtrix() {
    int matrix_a[2][2] = {{3,1}, {4,5}};
    int matrix_b[2][2] = {{7,9}, {10,3}};

    int matrix_sum[2][2];
    int matrix_sub[2][2];
    int matrix_mul[2][2];

    for (int i = 0; i < 2; i++){
        for (int j = 0; j < 2; j++){
            matrix_sum[i][j] = matrix_a[i][j] + matrix_b[i][j];
        }
    }

    for (int i = 0; i < 2; i++){
        for (int j = 0; j < 2; j++){
            cout << "Matrix Sum: ";
            cout << "matrix_sum[" << i
                 << "][" << j << "]: ";
            cout << matrix_sum[i][j]<<endl;
        }
    }

    cout << endl;

    for (int i = 0; i < 2; i++){
        for (int j = 0; j < 2; j++){
            matrix_sub[i][j] = matrix_a[i][j] - matrix_b[i][j];
        }
    }

    for (int i = 0; i < 2; i++){
        for (int j = 0; j < 2; j++){
            cout << "Matrix Sub: ";
            cout << "matrix_Sub[" << i
                 << "][" << j << "]: ";
            cout << matrix_sub[i][j]<<endl;
        }
    }

    cout << endl;

    for (int i = 0; i < 2; i++){
        for (int j = 0; j < 2; j++){
            matrix_mul[i][j] = 0;
            for (int k = 0; k < 2; k++)
                matrix_mul[i][j] += matrix_a[i][k] * matrix_b[k][j];
        }
    }

    for (int j = 0; j < 2; j++){
        for (int k = 0; k < 2; k++){
            cout << "Matrix Mul: ";
            cout << "matrix_Mul[" << j
                 << "][" << k << "]: ";
            cout << matrix_mul[j][k]<<endl;
        }
    }

}

