// ������ʾ: 
//   1. ʹ�ý��������Դ�������������/�����ļ�
//   2. ʹ���Ŷ���Դ�������������ӵ�Դ�������
//   3. ʹ��������ڲ鿴���������������Ϣ
//   4. ʹ�ô����б��ڲ鿴����
//   5. ת������Ŀ��>���������Դ����µĴ����ļ�����ת������Ŀ��>�����������Խ����д����ļ���ӵ���Ŀ
//   6. ��������Ҫ�ٴδ򿪴���Ŀ����ת�����ļ���>���򿪡�>����Ŀ����ѡ�� .sln �ļ�

#ifndef SORT_H
#define SORT_H

// TODO: ���Ҫ�ڴ˴�Ԥ����ı�ͷ

//��������
void SortByCount(int* list, int N, int count_list[][2], int *res_list);

//�Ƚϼ�������
void SortByCompareCount(int* list, int N, int count_list[], int* res_list);

//�ֲ���������
void SortByDistributeCount(int* list, int N, int count_list[], int N2, int* res_list);

//ֱ�Ӳ�������
void StraInsertSort(int* list, int N);

//��������
void SortByList(int* list, int N, int* res_list, Node* node_list[]);
void InsertNode(Node* q, Node* p, int i, Node* node_list[], int* list);//����ڵ�
bool CanBeInsert(Node* q, Node* p, int i, int* list, Node* head);//�ж��ܷ����ڵ�

//�۰��������
void BinaryInsertSort(int* list, int N);

//ϣ������
void ShellSort(int* list, int N);

#endif //PCH_H