#include <iostream>
#include <vector>
#include <cmath>


//! \brief { Calculates the standard deviation of a set of integers }
//!	\param <int* a> { array of integers }
//!	\param <int n> { number of elements in array a }
//!	\return { returns a double, the standard deviation of the set }


double deviation( int* a, int n ) {
	double sum = 0;

	for (size_t i = 0; i < n; ++i) {
		sum += a[i];
	}

	double mean = sum / n;
	double stddev = 0;

	for (size_t i = 0; i < n; ++i) {
		stddev = stddev + (a[i] - mean) * (a[i] - mean);
	}

	stddev /= n;

	if (stddev == 0)
		std::cout << "Sigma is zero." << std::endl;

	return sqrt(stddev);
}
