#include "Sort.h"
#include "pch.h"
#include <iostream>

using namespace std;

//比较计数排序
void SortByCompareCount(int* list, int N, int count_list[], int* res_list)
{
	for (int i = 0; i < N; i++)
	{
		for (int j = i+1; j < N; j++)
		{
			if (j == i) continue;
			if (list[i] >= list[j])
				count_list[i]++;
			else
				count_list[j]++;
		}
	}

	for (int i = 0; i < N; i++)
	{
		res_list[count_list[i]] = list[i];
	}
}

//分布计数排序
void SortByDistributeCount(int* list, int N, int count_list[],int N2,int* res_list)
{
	for (int i = 0; i < N; i++)
	{
		count_list[list[i]]++;
	}

	int sum = 0;
	for (int i = 0; i < N2; i++)
	{
		if (count_list[i] == 0) continue;
		sum = sum + count_list[i];
		count_list[i] = sum;
	}

	for (int i = 0; i < N; i++)
	{
		for (int j = 0; j < N2; j++)
		{
			if (count_list[j] == 0) continue;
			if (list[i] == j)
			{
				res_list[count_list[j] - 1] = list[i];
				count_list[j]--;
			}
		}
	}

}

//直接插入排序
void StraInsertSort(int* list,int N)
{
	for (int i = 0; i < N; i++)
	{
		int min = i;
		for (int j = i + 1; j < N; j++)
		{
			if (list[j] < list[min])
			{
				min = j;
			}
		}
		if (min != i)
		{
			int k = list[i];
			list[i] = list[min];
			list[min] = k;
		}
	}
}

//链表排序
void InsertNode(Node* q, Node* p, int i, Node* node_list[], int* list)
{
	node_list[i] = (Node*)malloc(sizeof(Node));
	node_list[i]->value = list[i];
	node_list[i]->next = q->next;
	q->next = node_list[i];
}

bool CanBeInsert(Node* q, Node* p, int i, int* list, Node* head)
{
	if (p->value == head->value)
		return true;
	if (list[i] <= p->value)
		return true;
	return false;

}

void SortByList(int* list, int N, int* res_list,Node* node_list[])
{
	Node* head = (Node*)malloc(sizeof(Node));
	node_list[0] = (Node*)malloc(sizeof(Node));

	head->value = 101;
	head->next = node_list[0];
	node_list[0]->value = list[0];
	node_list[0]->next = head;

	for (int i = 1; i < N; i++)
	{
		Node* q = head;
		Node* p = head->next;
		while (CanBeInsert(q, p, i, list, head) == false)
		{
			q = p;
			p = q->next;
		}
		InsertNode(q, p, i, node_list, list);
	}

	Node* res = head->next;
	for (int i = 0; i < N; i++)
	{
		res_list[i] = res->value;
		res = res->next;
	}

	

}

//折半插入排序
void BinaryInsertSort(int* list, int N)
{
	if (list[0] > list[1])
	{
		int k = list[0];
		list[0] = list[1];
		list[1] = k;
	}

	for (int i = 2; i < N; i++)
	{
		int q = 0;
		int p = i - 1;
		while (p >= q)
		{
			int m = (p + q) / 2;
			if (list[i] > list[m])
				q = m + 1;
			else
				p = m - 1;
		}
		int k = list[i];
		for (int j = i  - 1; j >= p + 1; j--)
			list[j + 1] = list[j];
		list[p+1] = k;
	}
}

//希尔排序
void ShellSort(int* list, int N)
{
	int d[] = { 5,3,1 };
	for (int i = 0; i < 3; i++) 
	{
		int di = d[i];
		for (int j = 0; j < di; j++) 
		{
			for (int k = j; k < N; k = k + di) 
			{
				int min = k;
				for (int z = k + di; z < N; z = z + di)
				{
					if (list[z] < list[min])
						min = z;
				}
				if (min != k)
				{
					int c = list[k];
					list[k] = list[min];
					list[min] = c;
				}
			}
		}
	}
}




