#ifndef MATRIX_H
#define MATRIX_H
#include <iostream>
#include <vector>
#include <string>
#pragma once

class Matrix
{

private:
    std::string name;
    int row;
    int column;
    std::vector<int> matrix_values;
public:
// Constructor and Destructor
    Matrix(std::string name, int row, int column, std::vector<int> matrix_values);
// Getters and Setters
    std::string get_name();
    void set_name(std::string new_name);
    int get_row();
    void set_row(int new_row);
    int get_column();
    void set_column(int new_column);
    std::vector<int> get_matrix_values();
    void set_matrix_values(std::vector<int>new_vec);
// Display Matrix
    bool display_matrix();
    
};

#endif