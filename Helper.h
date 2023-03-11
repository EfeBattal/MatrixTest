#ifndef HELPER_H
#define HELPER_H

#include <iostream>
#include <string>
#include "Matrix.h"

#pragma once

class Helper {
public:
    Helper();

    std::string get_matrix_name();
    int get_1_row();
    int get_2_row();
    int get_1_column();
    int get_2_column();

    std::vector<int> get_matrix_values_vec(int row, int column);

    bool matrix_multiply_check(Matrix matrix_to_check_1, Matrix matrix_to_check_2);

    int get_numeric_of_entry(Matrix matrix, int row_num, int column_num);

    Matrix multiplicate_matrices(Matrix matrix_1, Matrix matrix_2);

};

#endif