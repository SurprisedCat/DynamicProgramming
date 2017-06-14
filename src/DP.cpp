//============================================================================
// Name        : DP.cpp
// Author      : CX
// Version     :
// Copyright   : Dynamic Programming from Novice to Advanced
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include "beginner.h"
#include "preliminary.h"
#include "intermediate.h"
#include "advanced.h"
#include <stdio.h>
#include <stdlib.h>
using namespace std;

int main() {
//	cout << "Dynamic Programming" << endl; // prints Dynamic Programming
//	cout<<"For Beginner:"<<endl;
//	const int coinsArray[] = {2,5,6};
//	int target = 38;
//	int coinsresult = coins(target, coinsArray,sizeof(coinsArray)/sizeof(size_t));
//	cout<<target<<" need "<<coinsresult<<" coins."<<endl;
//
//	cout<<"For Preliminary:"<<endl;
//	cout<<"Longest Increasing Subsequence:"<<endl;
//	int A[] = {5,3,4,8,6,7,1,2,3,3,4};
//	cout<<lis(A,sizeof(A)/sizeof(A[0]))<<endl;

//	cout<<"Longest Common Subsequence:"<<endl;
//	char *str1 = "abcbdab";
//	char *str2 = "bdcaba";
//	int len1 = strlen(str1);
//	int len2 = strlen(str2);
//	int **b = new int*[len1+1];
//	for(int i=0;i<len1+1;i++)
//		b[i] = new int[len2+1];
//	cout<<"The lcs length is "<<lcs(str1,str2,b)<<".";
//	for(int i=0;i<len1+1;i++)
//		delete[] b[i];
//	delete[] b;

//	cout<<"Longest ZigZag:"<<endl;
//	{
//		int testZigZag1[]= { 1, 7, 4, 9, 2, 5 };
//		int testZigZag2[]= { 1, 17, 5, 10, 13, 15, 10, 5, 16, 8 };
//		int testZigZag3[]= { 44 };
//		int testZigZag4[]= { 1, 2, 3, 4, 5, 6, 7, 8, 9 };
//		int testZigZag5[]= { 70, 55, 13, 2, 99, 2, 80, 80, 80, 80, 100, 19, 7, 5, 5, 5, 1000, 32, 32 };
//		int testZigZag6[]= { 374, 40, 854, 203, 203, 156, 362, 279, 812, 955,
//				600, 947, 978, 46, 100, 953, 670, 862, 568, 188,
//				67, 669, 810, 704, 52, 861, 49, 640, 370, 908,
//				477, 245, 413, 109, 659, 401, 483, 308, 609, 120,
//				249, 22, 176, 279, 23, 22, 617, 462, 459, 244 };
//		cout<<"testZigZag1: "<<longestZigZag(testZigZag1, sizeof(testZigZag1)/sizeof(testZigZag1[0]))<<endl;
//		cout<<"testZigZag2: "<<longestZigZag(testZigZag2, sizeof(testZigZag2)/sizeof(testZigZag2[0]))<<endl;
//		cout<<"testZigZag3: "<<longestZigZag(testZigZag3, sizeof(testZigZag3)/sizeof(testZigZag3[0]))<<endl;
//		cout<<"testZigZag4: "<<longestZigZag(testZigZag4, sizeof(testZigZag4)/sizeof(testZigZag4[0]))<<endl;
//		cout<<"testZigZag5: "<<longestZigZag(testZigZag5, sizeof(testZigZag5)/sizeof(testZigZag5[0]))<<endl;
//		cout<<"testZigZag6: "<<longestZigZag(testZigZag6, sizeof(testZigZag6)/sizeof(testZigZag6[0]))<<endl;
//	}
	cout<<"Bad Neighbors:"<<endl;
	{
		int testBadNeighbour0[] =  { 10, 3, 2, 5, 7, 8 };
		int testBadNeighbour1[] =  { 11, 15 };
		int testBadNeighbour2[] = { 7, 7, 7, 7, 7, 7, 7 };
		int testBadNeighbour3[] = { 1, 2, 3, 4, 5, 1, 2, 3, 4, 5 };
		int testBadNeighbour4[] = { 94, 40, 49, 65, 21, 21, 106, 80, 92, 81, 679, 4, 61,
				  6, 237, 12, 72, 74, 29, 95, 265, 35, 47, 1, 61, 397,
				  52, 72, 37, 51, 1, 81, 45, 435, 7, 36, 57, 86, 81, 72 };
		cout<<"testBadNeighbour0: "<<maxDonations(testBadNeighbour0, sizeof(testBadNeighbour0)/sizeof(testBadNeighbour0[0]))<<endl;
		cout<<"testBadNeighbour1: "<<maxDonations(testBadNeighbour1, sizeof(testBadNeighbour1)/sizeof(testBadNeighbour1[0]))<<endl;
		cout<<"testBadNeighbour2: "<<maxDonations(testBadNeighbour2, sizeof(testBadNeighbour2)/sizeof(testBadNeighbour2[0]))<<endl;
		cout<<"testBadNeighbour3: "<<maxDonations(testBadNeighbour3, sizeof(testBadNeighbour3)/sizeof(testBadNeighbour3[0]))<<endl;
		cout<<"testBadNeighbour4: "<<maxDonations(testBadNeighbour4, sizeof(testBadNeighbour4)/sizeof(testBadNeighbour4[0]))<<endl;
	}
	return 0;
}



