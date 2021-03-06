//作业：
//1）计数排序 2)分布计数排序 3）直接插入 4）链表插入 5）折半插入 6）希尔排序

#include "pch.h"
#include "Sort.h"
#include <iostream>
#define random(x) (rand()%x)
#define N 20 
#include<time.h>
using namespace std;

int main()
{
	//初始化待排序列表

	int initial_list[N];
	srand((int)time(0));
	for (size_t i = 0; i < N; i++)
	{
		initial_list[i] = random(10);
		cout << initial_list[i] << " ";
	}
	cout << endl;

	/* 测试时依次取消注释 */

	/* 比较计数排序 */
	/*int count_list[N] = {0}, res_list[N];
	SortByCompareCount(initial_list, N, count_list, res_list);
	for (int i = 0; i < N; i++)
	{
		cout << res_list[i] << " ";
	}*/
	
	/* 分布计数排序 */
	//int count_list[100] = { 0 }, res_list[N];
	//SortByDistributeCount(initial_list, N, count_list, 100, res_list);
	//for (int i = 0; i < N; i++)
	//{
	//	cout << res_list[i] << " ";
	//}

	/* 直接插入排序 */
	/*StraInsertSort(initial_list, N);
	for (int i = 0; i < N; i++)
	{
		cout << initial_list[i] << " ";
	}*/

	/* 链表排序 */
	//Node* node_list[N];
	//int res_list[N];
	//SortByList(initial_list,N,res_list,node_list);
	//for (int i = 0; i < N; ++i)
	//{
	//	cout << res_list[i] << " ";
	//}

	/* 折半插入排序 */
	/*BinaryInsertSort(initial_list, N);
	for (int i = 0; i < N; i++)
	{
		cout << initial_list[i] << " ";
	}*/

	/* 希尔排序 */
	//ShellSort(initial_list, N);
	//for (int i = 0; i < N; i++)
	//{
	//	cout << initial_list[i] << " ";
	//}

	return 0;
}

