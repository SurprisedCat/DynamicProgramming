/*
 * preliminary.h
 *
 *  Created on: 2017年6月11日
 *      Author: lelouch
 */

#ifndef PRELIMINARY_H_
#define PRELIMINARY_H_
#include <iostream>
int lis(int A[], int n);
int lcs(char* A,char* B,int **b);
void printLCS(int **b,char *str1,int i,int j);


int longestZigZag(int sequence[],int len);

#endif /* PRELIMINARY_H_ */
