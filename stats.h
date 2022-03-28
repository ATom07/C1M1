/******************************************************************************
 * Copyright (C) 2017 by Alex Fosdick - University of Colorado
 *
 * Redistribution, modification or use of this software in source or binary
 * forms is permitted as long as the files maintain this copyright. Users are 
 * permitted to modify this and use it to learn about the field of embedded
 * software. Alex Fosdick and the University of Colorado are not liable for any
 * misuse of this material. 
 *
 *****************************************************************************/
/**
 * @file <Add File Name> 
 * @brief <Add Brief Description Here >
 *
 * <Add Extended Description Here>
 *
 * @author <Add FirsName LastName>
 * @date <Add date >
 *
 */
#ifndef __STATS_H__
#define __STATS_H__

/* Add Your Declarations and Function Comments here */ 

/**
 * @brief Prints statistics like minimum, maximum, mean and median.
 *
 * This function takes an array 'data' of defined size 'size' ,calls the respective functions to calculate mean, median, maximum and minimum and prints out the data.
 *
 * @param data The array defined in the main on which the operation is performed.
 * @param size Size of the array.
 * 
 *
 * @return <None>
 */
void print_statistics(unsigned char * arr, unsigned int size);
 
 
 /**
 * @brief Prints the array defined in main.
 *
 * This function prints an array 'arr' of defined size 'size' and prints the array.
 *
 * @param arr The array defined in the main on which the operation needs to be performed.
 * @param size Size of the array.
 * 
 *
 * @return <None>
 */
void print_array(unsigned char * arr, unsigned int size); 

/**
 * @brief Prints the median of the given data.
 *
 * This function takes an array 'data' of defined size 'size' and prints out the median of the the array.
 *
 * @param arr The array defined in the mainon which the operation needs to be performed.
 * @param size Size of the array.
 * 
 *
 * @return The median of the data.
 */
 unsigned char find_median(unsigned char * data,unsigned int size);


/**
 * @brief Prints the mean of the given data.
 *
 * This function takes an array 'data' of defined size 'size' and prints out the mean of the the array.
 *
 * @param data The array defined in the main on which the operation needs to be performed.
 * @param size Size of the array.
 * 
 *
 * @return The mean of the data.
 */
 unsigned char find_mean(unsigned char * data,unsigned int size);
 
 
 /**
 * @brief Prints the maximum of the given data.
 *
 * This function takes an array 'data' of defined size 'size' and prints out the maximum value of the the array.
 *
 * @param data The array defined in the main on which the operation needs to be performed.
 * @param size Size of the array.
 * 
 *
 * @return The maximum of the data.
 */
 unsigned char find_maximum(unsigned char * data,unsigned int size);
 
 
 /**
 * @brief Prints the minimum of the given data.
 *
 * This function takes an array 'data' of defined size 'size' and prints out the minimum value of the the array.
 *
 * @param data The array defined in the main on which the operation needs to be performed.
 * @param size Size of the array.
 * 
 *
 * @return The minimum of the data.
 */
 unsigned char find_minimum(unsigned char * data,unsigned int size);
 
 /**
 * @brief Prints the sorted array of the array provided to it.
 *
 * This function takes an array 'data' of defined size 'size' and prints out the sorted array in descending order. Index 0 has the largest number and Index (n-1) has the smallest number.
 *
 * @param arr The array defined in the main on which the operation needs to be performed.
 * @param size Size of the array.
 * 
 *
 * @return The sorted array.
 */
 unsigned char * sort_array(unsigned char * arr,unsigned int size);
 
#endif /* __STATS_H__ */
