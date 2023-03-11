#include "Matrix.h"
#include <iostream>
#include <iomanip>
#include <vector>
#include <string>

// Constructor
Matrix::Matrix(std::string name, int row, int column, std::vector<int> matrix_values)
    : name(name), row(row), column(column), matrix_values(matrix_values) {}
// Getters and Setters
std::string Matrix::get_name() { return name; }
void Matrix::set_name(std::string new_name) { name = new_name; }
int Matrix::get_row() { return row; }
void Matrix::set_row(int new_row) { row = new_row; }
int Matrix::get_column() { return column; }
void Matrix::set_column(int new_column) { column = new_column; }
std::vector<int> Matrix::get_matrix_values() { return matrix_values; }
void Matrix::set_matrix_values(std::vector<int> new_matrix_values) { matrix_values = new_matrix_values; }
// Displayer
bool Matrix::display_matrix() {
    if(this->matrix_values.size() != 0){
        int place_in_vec = 0;
        std::cout << "Displaying " << this->name << std::endl;
        if(row == 1) {
            std::cout << "Γ   ";
            for(int j=0; j < this->matrix_values.size(); j++) {
                std::cout << "     ";
            }
            std::cout << "ꓶ" << std::endl;
            std::cout << "|   ";
            for(int i=0; i < this->column; i++) {
                    std::cout << std::setw(2) << std::left << this->matrix_values.at(place_in_vec) << "   ";
                    place_in_vec++;
            }
            std::cout << "|" << std::endl;
            std::cout << "L   ";
            for(int j=0; j < this->matrix_values.size(); j++) {
                std::cout << "     ";
            }
            std::cout << "⅃" << std::endl;
        }
        if(row != 1) {
            for(int i=1; i <= this->row; i++) {
                if(i == 1) {
                std::cout << "Γ   ";
                }
                if(i == (this->row)) {
                    std::cout << "L   ";
                }
                if((i != 1) && (i != this->row)) {
                    std:: cout << "|   ";
                }
                for(int j=0; j < column; j++) {
                    std::cout << std::setw(3) << std::left << this->matrix_values.at(place_in_vec) << "   ";
                    place_in_vec++;
                }
                if(i == 1) {
                  std::cout << "ꓶ" << std::endl;
                }
               if(i == (this->row)) {
                std::cout << "⅃" << std::endl;
                }
              if((i != 1) && (i != this->row)) {
                 std:: cout << "|" << std::endl;
                }
            }
        }
        return true;
    }
    std::cout << "Could not display " << this->name << std::endl;
    std::cout << "This matrix is null." << std::endl;
    return false;
}

