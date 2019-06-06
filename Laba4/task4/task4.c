#include <stdio.h>
#include <conio.h>
#include <time.h>
void sort(int *arr, int n) {		//Сортировка Шелла
	int j, step, tmp;
	for (step = n / 2; step > 0; step /= 2) {
		for (int i = step; i < n; i++) {
			tmp = arr[i];
			for (j = i; j >= step; j -= step) {
				if (tmp < arr[j - step]) {
					arr[j] = arr[j - step];
				}
				else {
					break;
				}
			}
			arr[j] = tmp;
		}
	}
}
void main(void) {
	int arr[10];
	srand(time(NULL));
	for (int i = 0; i < 10; i++) {
		arr[i] = rand() % 100;
	}
	printf("Array before sorting: ");
	for (int i = 0; i < 10; i++) {
		printf("%d ", arr[i]);
	}
	sort(arr, 10);
	printf("\nArray after sorting: ");
	for (int i = 0; i < 10; i++) {
		printf("%d ", arr[i]);
	}
	printf("\n");
	system("pause");
}