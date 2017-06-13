/*
 * preliminary.cpp
 *
 *  Created on: 2017年6月11日
 *      Author: lelouch
 */
//A is the candidate array. n is the length of the array.
#include "preliminary.h"
#include <strings.h>
int lis(int A[], int n)
{
	int result = 1;
	int *length = new int[n];
	for(int i=0;i<n;i++)
	{
		length[i] = 1;
		for(int j=0;j<i;j++)
		{
			if(A[j]<=A[i] && length[i]<length[j]+1)
				length[i] = length[j]+1;
		}
		result = length[i]>result?length[i]:result;
		std::cout<<length[i]<<"--"<<result<<std::endl;
	}
	std::cout<<std::endl;
	delete[] length;
	return result;
}

int lcs(char* A,char* B,int **b)
{
	int lenA = strlen(A);
	int lenB = strlen(B);

	int **c = new int*[lenA+1];//从0算起，共有lenA+1行,
	for(int i=0;i<lenA+1;i++)
		c[i] = new int[lenB+1];//有lenB+1列

	for(int i = 0;i<lenA+1;i++)//初始化第0列
		c[i][0] = 0;
	for(int j=0 ;j<lenB+1;j++)//初始化第0行
		c[0][j] = 0;

	for(int i=1;i<lenA+1;i++)
	{
		for(int j=1;j<lenB+1;j++)
		{
			if(A[i-1] == B[j-1])
			{
				c[i][j] = c[i-1][j-1]+1;
				b[i][j] = 0;//用处是记录公共子序列的搜索方向 0 -->左上
			}
			else if(c[i-1][j]>c[i][j-1])
			{
				c[i][j] = c[i-1][j];
				b[i][j] = 1;//用处是记录公共子序列的搜索方向 1 -->上
			}
			else
			{
				c[i][j] = c[i][j-1];
				b[i][j] = -1;//用处是记录公共子序列的搜索方向-1 -->左
			}
		}
	}
	std::cout<<"The LCS is: ";
	printLCS(b,A,lenA,lenB);
	std::cout<<std::endl;
	int result = c[lenA][lenB];
	for(int i=0;i<lenA+1;i++)
		delete[] c[i];
	delete[] c;

	return result;
}

void printLCS(int **b,char *str1,int i,int j)
{
	if(i==0 || j==0)
		return ;
	if(b[i][j] == 0)
	{
		printLCS(b,str1,i-1,j-1);
		std::cout<<str1[i-1]<<" ";
	}
	else if(b[i][j] == 1)
		printLCS(b,str1,i-1,j);
	else
		printLCS(b,str1,i,j-1);
}

int longestZigZag(int sequence[],int len)
{
	int result = 0;
	int up[len];
	int down[len];
	for(int i=0;i<len;i++)
		up[i]=down[i] = 1;
	for(int i=0;i<len;i++)
	{
		for(int j=0;j<i;j++)
		{
			if(sequence[i]>sequence[j])
			{
				up[i] = (down[j]+1>up[i])?down[j]+1:up[i];
			}
			if(sequence[i]<sequence[j])
			{
				down[i] = (up[j]+1>down[i])?up[j]+1:down[i];
			}
		}
		int max = down[i]>up[i]?down[i]:up[i];
		result = max>result?max:result;
	}
	return result;
}
