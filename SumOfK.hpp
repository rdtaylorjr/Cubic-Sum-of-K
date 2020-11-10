/**
 Exercise 1 Extended
 CSC 255 Objects and Algorithms (Fall 2020)
 Oakton Community College
 Professor: Kamilla Murashkina

 @file SumOfK.hpp
 @author Russell Taylor
 @date 8/24/20
*/

#ifndef SumOfK_hpp
#define SumOfK_hpp

#include <iostream>
#include <vector>
using namespace std;

class SumOfK {
public:
    /**
     Default constructor
     */
    SumOfK();
    
    /**
     Constructor
     @param file the file number
     */
    SumOfK(int file);
    
    /**
     Reads from input file
     */
    void input();
    
    /**
     Writes to output file
     */
    void output();
    
    /**
     Finds the sum k in the sequence of numbers
     */
    void sum();

private:
    vector<int> nums;
    int file, k;
    string result;
};

#endif /* SumOfK_hpp */
