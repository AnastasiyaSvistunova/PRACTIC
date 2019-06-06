#include <stdio.h>

void readArray(int *arr, int n) {
	for (int i = 0; i < n; i++) {
		scanf("%d", &arr[i]);
	}
}
void main(void) {
	int arr[6];
	readArray(arr, 6);
	system("pause");
}