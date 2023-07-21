#pragma once
#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

void MergeSortNonR(int* a, int n);
void MergeSort(int* a, int n);
void _MergeSort(int* a, int begin, int end, int* tmp);
void CountSort(int* arr, int size);