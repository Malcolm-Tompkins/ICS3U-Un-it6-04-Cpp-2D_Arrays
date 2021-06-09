// Copyright (c) 2021 Malcolm Tompkins All rights reserved
//
// Created by Malcolm Tompkins
// Created on June 9, 2021
// Generates random numbers and finds their average

#include <iostream>
#include <random>
#include <array>
#include <iomanip>

main() {
    int random_number, sum;
    double average, total_sum;
    int counter_columns, counter_rows;
    int rows_and_columns[counter_rows][counter_columns];
    const int rows = 3;
    const int columns = 3;
    int sums[1];
    std::cout << "Below is a 3x3 grid of random numbers\n";
    for (int counter_rows = 0; counter_rows < rows; counter_rows++) {
        for (int counter_columns = 0; counter_columns < columns;
        counter_columns++) {
            std::random_device rseed;
            std::mt19937 rgen(rseed());
            std::uniform_int_distribution<int> idist(1, 50);
            random_number = idist(rgen);
            std::cout << random_number << " ";
            rows_and_columns[counter_rows][counter_columns] = random_number;
            sum = sum + random_number;
            sums[sum] = sum;
        }
        std::cout << "\n";
    }
    std::cout << "The total sum of these numbers is: ";
    total_sum = sums[sum];
    std::cout << total_sum;
    average = total_sum / (rows * columns);
    std::cout << "\nThe average of these numbers is: ";
    std::cout << std::setprecision(4) << average;
    std::cout << "\nDone.";
}
