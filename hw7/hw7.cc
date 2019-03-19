// Nathan Steadman
// Ohio University
// CS 3560 Hw7
// 2019 March 4

#include <iostream>
#include <cstdarg>
#include <cmath>
#include "hw7.h"
using namespace std;

double stddev(int n, ...){
    va_list args;
    va_start(args, n);  // Receiving how many arguments there will be
    int nums[n];
    int sum = 0;
    for (int i = 0; i < n; i++) {
    	int in = va_arg(args, int);
      nums[i] = in;  // Putting the numbers into the array
      sum += in;
    }

    double mean = sum / n;
  	double stddev = 0;

  	for (size_t i = 0; i < n; ++i) {
  		stddev = stddev + (nums[i] - mean) * (nums[i] - mean);
  	}

  	stddev /= n;

  	if (stddev == 0)
  		std::cout << "Sigma is zero." << std::endl;

  	return sqrt(stddev);

    va_end(args);
}

int main()
{
    cout << "The standard deviation is: " << stddev(4, 1, 2, 3, 4) << endl;
}
