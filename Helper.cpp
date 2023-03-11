#include "Helper.h"
#include <string>

Helper::Helper() {}

std::string Helper::get_matrix_name() {
    std::string temp_name;
    std::cout << "Please enter the matrix name: ";
    std::cin >> temp_name;
    return temp_name;
}
int Helper::get_1_row() {
    int temp_val;
    std::cout << "Enter the row number in the first matrix: ";
    std::cin >> temp_val;
    return temp_val;
}
int Helper::get_2_row() {
    int temp_val;
    std::cout << "Enter the row number in the second matrix: ";
    std::cin >> temp_val;
    return temp_val;
}
int Helper::get_1_column() {
    int temp_val;
    std::cout << "Enter the column number in the first matrix: ";
    std::cin >> temp_val;
    return temp_val;
}
int Helper::get_2_column() {
    int temp_val;
    std::cout << "Enter the column number in the second matrix: ";
    std::cin >> temp_val;
    return temp_val;
}

std::vector<int> Helper::get_matrix_values_vec(int row, int column) {
    std::vector<int> temp_vec;
    int temp_vec_value;
    for(int i=1; i <= row; i++) {
        for(int j=1; j <= column; j++) {
            std::cout << "Please enter the entry " << i << j << " : ";
            std::cin >> temp_vec_value;
            temp_vec.push_back(temp_vec_value);
        }
    }
    return temp_vec;
}

bool Helper::matrix_multiply_check(Matrix matrix_to_check_1, Matrix matrix_to_check_2) {
    if(matrix_to_check_1.get_column() == matrix_to_check_2.get_row()) {
        return true;
    }
    else { return false; }
}

int Helper::get_numeric_of_entry(Matrix matrix, int row_num, int column_num) {
    int numeric_value;
    int vec_place;

    vec_place = column_num + ((row_num - 1) * matrix.get_column());
    numeric_value = matrix.get_matrix_values().at(vec_place - 1);

    return numeric_value;
}

Matrix Helper::multiplicate_matrices(Matrix matrix_1, Matrix matrix_2) {
    std::vector<int> new_vec;
    bool matrices_check;
    int temp_1, temp_2;
    int temp_value = 0;
    matrices_check = matrix_multiply_check(matrix_1, matrix_2);
    int new_matrix_value_num;
    Matrix new_matrix("Result Matrix", matrix_1.get_row(), matrix_2.get_column(), new_vec);
    new_matrix_value_num = matrix_1.get_row() * matrix_2.get_column();

    if(matrices_check == 0) {
        std::cout << "Matrices cannot be multiplicated." << std::endl;
    }
    else if(matrices_check == 1) {
            for(int i=1; i <= new_matrix.get_row(); i++) {
                for(int j=1; j <= new_matrix.get_column(); j++) {
                    for(int k=1; k <= matrix_1.get_column(); k++) {
                        temp_1 = get_numeric_of_entry(matrix_1, i, k);
                        temp_2 = get_numeric_of_entry(matrix_2, k, j);
                        temp_value = temp_value + (temp_1 * temp_2);
                    }      
                    new_vec.push_back(temp_value);
                    temp_value = 0;
                }
            }

    }

    new_matrix.set_matrix_values(new_vec);
    return new_matrix;
}