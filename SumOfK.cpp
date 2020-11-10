/**
 Exercise 1 Extended
 CSC 255 Objects and Algorithms (Fall 2020)
 Oakton Community College
 Professor: Kamilla Murashkina

 @file SumOfK.cpp
 @author Russell Taylor
 @date 8/24/20
*/

#include <fstream>
#include "SumOfK.hpp"

/**
 Default constructor
 */
SumOfK::SumOfK() {

}

/**
 Constructor
 @param file the file number
 */
SumOfK::SumOfK(int file) {
    this->file = file;
}

/**
 Reads from input file
 */
void SumOfK::input() {
    ifstream fin("in" + to_string(file) + ".txt");
    string title;
    int n;
    
    fin >> title;
    fin >> k;
    while (fin >> n)
        nums.push_back(n);
    
    fin.close();
}

/**
 Writes to output file
 */
void SumOfK::output() {
    ofstream fout("out" + to_string(file) + ".txt");
    cout << "out" << file << ".txt" << endl;
    
    fout << k << endl;
    cout << k << endl;
    
    for (auto i : nums) {
        fout << i << " ";
        cout << i << " ";
    }
    
    fout << endl << result << endl;
    cout << endl << result << endl << endl;
    
    fout.close();
}

/**
 Finds the sum k in the sequence of numbers
 */
void SumOfK::sum() {
    for (int i = 0; i < nums.size(); i++) {
        for (int j = 0; j < nums.size(); j++) {
            for (int m = 0; m < nums.size(); m++) {
                if (nums[i] + nums[j] + nums[m] == k) {
                    result = "Yes\n" + to_string(nums[i]) + "+" + to_string(nums[j]) + "+" + to_string(nums[m]) + "=" + to_string(k);
                    return;
                }
            }
        }
    }
    result = "No";
}
