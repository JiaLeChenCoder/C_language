#include<stdio.h>
void shellSort(int arr[], int n)
{
    for (int gap = n / 2; gap > 0; gap /= 2)
    {
        for (int i = gap; i < n; i += 1)
        {
            int temp = arr[i];
            int j;
            for (j = i; j >= gap && arr[j - gap] > temp; j -= gap)
                arr[j] = arr[j - gap];
            arr[j] = temp;
        }
    }
}
int main()
{
      int arr[10] = { 1,5,4,6,3,2,9,8,7 };
      shellSort(arr, 10);
      for (int i = 0; i < 10; i++)
      {
            printf("%d ", arr[i]);
      }
      return 0;
}