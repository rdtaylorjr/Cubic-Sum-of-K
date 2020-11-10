/**
 Exercise 1 Extended
 CSC 255 Objects and Algorithms (Fall 2020)
 Oakton Community College
 Professor: Kamilla Murashkina

 @file main.cpp
 @author Russell Taylor
 @date 8/24/20
 
 Assignment: Sum of K
 "Determine if there are three numbers in a list whose sum equals the given “target” number k.
 The program has to read 5 input files and print the results to 5 corresponding output files.
 All files have to be processed in one program run."
 
 @pre five input files containing a number k and a list of n numbers
 @post five output files stating whether there are three numbers in the list whose sum equals k
*/

#include "SumOfK.hpp"

/**
 Controls operation of the program
 */
int main(int argc, const char * argv[]) {
    int files = 5;

    for (int num = 1; num <= files; num++) {
        SumOfK file(num);
        file.input();
        file.sum();
        file.output();
    }
    return 0;
}
