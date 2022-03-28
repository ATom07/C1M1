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
 * @author <Ankush Tomar>
 * @date <28 March 2022 >
 *
 */



#include <stdio.h>
#include "stats.h"

/* Size of the Data Set */
#define size (40)

void main() {

  unsigned char test[size] = { 34, 201, 190, 154,   8, 194,   2,   6,
                              114, 88,   45,  76, 123,  87,  25,  23,
                              200, 122, 150, 90,   92,  87, 177, 244,
                              201,   6,  12,  60,   8,   2,   5,  67,
                                7,  87, 250, 230,  99,   3, 100,  90};

  /* Other Variable Declarations Go Here */
  

  /* Statistics and Printing Functions Go Here */
  
  
  print_array(test,size);
  print_statistics(test,size);
  printf("\n");

}

/* Add other Implementation File Code Here */

unsigned char * sort_array(unsigned char * arr, unsigned int SIZE){

	unsigned char temp;
	
	for(int i=0;i<SIZE-1;i++){
	
		for(int j=0;j<SIZE-i-1;j++){
	
			if (arr[j] < arr[j+1]) {
		
				temp = arr[j+1];
				arr[j+1] = arr[j];
				arr[j] = temp;
		
			}
		
		}
	
	}
	
	return arr;

}


unsigned char find_median(unsigned char * data, unsigned int SIZE) {

	unsigned char * sorted_arr;

	sorted_arr = sort_array(data,SIZE);
	
	unsigned char reverse[SIZE];
	unsigned char median;
	
	for(int i=0;i<size;i++){
	
	reverse[SIZE-i] = sorted_arr[i];
	
	}
	
	median = (reverse[SIZE/2] + (reverse[(SIZE/2)+1])) / 2;
	
	return median;


}


unsigned char find_mean(unsigned char * data, unsigned int SIZE) {
	int sum = 0;
	unsigned char mean = 0;
	for(int i=0;i<SIZE;i++){
	sum = sum + data[i];
	}
	mean = sum/SIZE;
	return mean;

}

unsigned char find_maximum(unsigned char * data, unsigned int SIZE) {
	
	unsigned char * sorted_arr;
	unsigned char maximum;

	sorted_arr = sort_array(data,SIZE);
	maximum = sorted_arr[0];
	
	return maximum;

}

unsigned char find_minimum(unsigned char * data, unsigned int SIZE) {

	unsigned char * sorted_arr;
	unsigned char minimum;

	sorted_arr = sort_array(data,SIZE);
	minimum = sorted_arr[SIZE-1];
	
	return minimum;
	
}

void print_array(unsigned char * arr, unsigned int SIZE){
	printf("\nArray : ");
	for(int i=0;i<SIZE;i++)	
		printf("%d ",arr[i]);

}

void print_statistics(unsigned char * arr, unsigned int SIZE){

	unsigned char mean,median,max,min;
	
	mean = find_mean(arr,SIZE);
	printf("\nMean is : %u",mean);
	
	median = find_median(arr,SIZE);
	printf("\nMedian is : %u",median);
	
	max = find_maximum(arr,SIZE);
	printf("\nMaximum is : %u",max);
	
	min = find_minimum(arr,SIZE);
	printf("\nMnimum is : %u",min);
	
}
