#include"sort.h"

void CountSort(int* arr, int size)//��������
{
	int min = arr[0];
	int max = arr[0];
	for (int i = 1; i < size; i++)
	{
		if (arr[i] < min)
		{
			min = arr[i];
		}
		if (arr[i] > max)
		{
			max = arr[i];
		}
	}
	//��������count
	int range = max - min + 1;
	int* count = (int*)malloc(sizeof(int) * range);
	if (count == NULL)
	{
		perror("malloc:fail");
		exit(-1);
	}
	memset(count, 0, sizeof(int) * range);

	//��ʼ����
	for (int i = 0; i < size; i++)
	{
		count[arr[i] - min]++;
	}
	//��д����
	int j = 0;
	for (int i = 0; i < range; i++)
	{
		while (count[i]--)
		{
			arr[j++] = i + min;
		}
	}
}

//�ݹ�ʵ��
void _MergeSort(int* a, int begin, int end, int* tmp)
{
	if (begin == end)
		return;
	int mid = (end + begin) / 2;
	// [begin, mid] [mid+1, end]
	_MergeSort(a, begin, mid, tmp);
	_MergeSort(a, mid + 1, end, tmp);
	// ȡС��β��
	// [begin, mid] [mid+1, end]
	int begin1 = begin, end1 = mid;
	int begin2 = mid + 1, end2 = end;
	int i = begin;
	while (begin1 <= end1 && begin2 <= end2)
	{
		if (a[begin1] <= a[begin2])//������ĵ��ں�ȥ���Ͳ����ȶ�����
		{
			tmp[i++] = a[begin1++];
		}
		else
		{
			tmp[i++] = a[begin2++];
		}
	}

	while (begin1 <= end1)
	{
		tmp[i++] = a[begin1++];
	}

	while (begin2 <= end2)
	{
		tmp[i++] = a[begin2++];
	}

	// ������ԭ���� -- �鲢�Ĳ��־Ϳ����Ĳ��ֻ�ȥ
	memcpy(a + begin, tmp + begin, (end - begin + 1) * sizeof(int));
}

void MergeSort(int* a, int n)
{
	int* tmp = (int*)malloc(sizeof(int) * n);
	if (tmp == NULL)
	{
		perror("malloc fail");
		return;
	}

	_MergeSort(a, 0, n - 1, tmp);

	free(tmp);
	tmp = NULL;
}
//�ǵݹ�
void MergeSortNonR(int* a, int n)
{
	int* tmp = (int*)malloc(sizeof(int) * n);
	int gap = 1;
	while (gap < n)
	{
		int j = 0;
		for (int i = 0; i < n; i += 2 * gap)
		{
			// �ϲ�����
			int begin1 = i, end1 = i + gap - 1;
			int begin2 = i + gap, end2 = i + 2 * gap - 1;
			if (end1 >= n || begin2 >= n)
			{
				break;
			}
			// ����������
			if (end2 >= n)
			{
				end2 = n - 1;
			}
			while (begin1 <= end1 && begin2 <= end2)
			{
				if (a[begin1] <= a[begin2])
				{
					tmp[j++] = a[begin1++];
				}
				else
				{
					tmp[j++] = a[begin2++];
				}
			}
			while (begin1 <= end1)
			{
				tmp[j++] = a[begin1++];
			}
			while (begin2 <= end2)
			{
				tmp[j++] = a[begin2++];
			}
			// �鲢һ�飬�����п���
			memcpy(a + i, tmp + i, sizeof(int) * (end2 - i + 1));
		}
		//printf("\n");
		//memcpy(a, tmp, sizeof(int) * n);  �󿽱�
		gap *= 2;
	}
	free(tmp);
}