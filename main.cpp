#include <iostream>
#include <iomanip>
#include <vector>
#include <string>
#include "Matrix.cpp"
#include "Helper.cpp"

int main(){

    Helper helper;
    int matrix_1_row, matrix_1_column, matrix_2_row, matrix_2_column;
    std::string matrix_1_name, matrix_2_name;
    std::vector<int> matrix_1_values_vec;
    std::vector<int> matrix_2_values_vec;

    matrix_1_name = helper.get_matrix_name();
    matrix_1_row = helper.get_1_row();
    matrix_1_column = helper.get_1_column();
    matrix_1_values_vec = helper.get_matrix_values_vec(matrix_1_row, matrix_1_column);
    Matrix matrix_1(matrix_1_name, matrix_1_row, matrix_1_column, matrix_1_values_vec);
    matrix_2_name = helper.get_matrix_name();
    matrix_2_row = helper.get_2_row();
    matrix_2_column = helper.get_2_column(); 
    matrix_2_values_vec = helper.get_matrix_values_vec(matrix_2_row, matrix_2_column);
    Matrix matrix_2(matrix_2_name, matrix_2_row, matrix_2_column, matrix_2_values_vec);

    matrix_1.display_matrix();
    matrix_2.display_matrix();

    std::cout << std::endl;

    Matrix result_matrix = helper.multiplicate_matrices(matrix_1, matrix_2);
    result_matrix.display_matrix();



    return 0;
}

