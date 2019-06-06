#include <stdio.h>

void writeArray(int *arr, int n) {
	for (int i = 0; i <= n; i++) {
		printf("%d ", arr[i]);
	}
}
void main(void) {
	int arr[6] = { 1,2,3,4,5,6 };
	writeArray(arr, 5);
	system("pause");
}