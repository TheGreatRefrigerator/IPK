//
// Created by Amandus Butzer on 12/2/2018.
//
#ifndef STATISTICS_HH
#define STATISTICS_HH

#include <vector>

/**
 * Returns the mean value of a double vector
 *
 * @param v - vector to analyse
 * @return - mean value of all vector entries
 */
double mean(const std::vector<double> &v);

/**
 * Calculates the median of a double vector
 *
 * @param v - vector to analyse
 * @return - mean value of the vector
 */
double median(const std::vector<double> &v);

/**
 * Calculates the Kth statistical moment of a double vector
 *
 * @param v - vector to analyse
 * @param k - number of statistical moment
 * @return - Kth statistical moment of all vector entries
 */
double moment(const std::vector<double> &v, int k);

/**
 * Calculates the standard deviation of a double vector
 *
 * @param v - vector to analyse
 * @return - standard deviation of vector
 */
double standard_deviation(const std::vector<double> &v);


#endif //STATISTICS_HH
