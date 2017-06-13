/*
 * beginner.cpp
 *
 *  Created on: 2017年6月12日
 *      Author: lelouch
 */
#include "beginner.h"

int coins(int target, const int *coins,int coinsTypes)
{
	int result[target+1];//This array contains the result from 1 to target
	for(int i=0;i<=target;i++)//Initiate the result array.
	{
		if(i==0) result[i]=0;//0 needs 0 coin.
		else
			result[i] = std::numeric_limits<int>::max();//std::numeric_limits<int>::max() is the upper bound of int.
	}
	for(int i=1;i<=target;i++)//Dynamic Programming. The subproblem is from 1. 1,2,3,4,...,target number.
	{
		int target_i = 0;//mediate variable
		for(int j = 0;j<coinsTypes;j++)//check each type of coins
		{
			if(i<coins[j])//if the target number is less than the denomination of the coin, the result does not exist. So we set is to INF.
				target_i = std::numeric_limits<int>::max();
			else if(i == coins[j])//target number equals the denomination. It requires only 1 coin.
				target_i = 1;
			else//Bellman equation.  result[i] = minimal(result[i-coins[j]])+1(0<=j<coinsType)
				target_i = result[i-coins[j]]==std::numeric_limits<int>::max()?std::numeric_limits<int>::max():result[i-coins[j]]+1;
			if(target_i < result[i])
				result[i] = target_i;
		}
//  //    Following lines can be used to show detailed result.
//		if(result[i] == std::numeric_limits<int>::max())
//			std::cout<<i<<" Result does not exists."<<std::endl;
//		else
//			std::cout<<i<<" need coins "<<result[i]<<std::endl;
	}
	return result[target];
}
