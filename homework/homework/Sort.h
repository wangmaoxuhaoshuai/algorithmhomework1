// 入门提示: 
//   1. 使用解决方案资源管理器窗口添加/管理文件
//   2. 使用团队资源管理器窗口连接到源代码管理
//   3. 使用输出窗口查看生成输出和其他消息
//   4. 使用错误列表窗口查看错误
//   5. 转到“项目”>“添加新项”以创建新的代码文件，或转到“项目”>“添加现有项”以将现有代码文件添加到项目
//   6. 将来，若要再次打开此项目，请转到“文件”>“打开”>“项目”并选择 .sln 文件

#ifndef SORT_H
#define SORT_H

// TODO: 添加要在此处预编译的标头

//计数排序
void SortByCount(int* list, int N, int count_list[][2], int *res_list);

//比较计数排序
void SortByCompareCount(int* list, int N, int count_list[], int* res_list);

//分布计数排序
void SortByDistributeCount(int* list, int N, int count_list[], int N2, int* res_list);

//直接插入排序
void StraInsertSort(int* list, int N);

//链表排序
void SortByList(int* list, int N, int* res_list, Node* node_list[]);
void InsertNode(Node* q, Node* p, int i, Node* node_list[], int* list);//插入节点
bool CanBeInsert(Node* q, Node* p, int i, int* list, Node* head);//判断能否插入节点

//折半插入排序
void BinaryInsertSort(int* list, int N);

//希尔排序
void ShellSort(int* list, int N);

#endif //PCH_H