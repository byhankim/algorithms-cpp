#include <stdio.h>

int main(void){
	// 1, 10, 5, 8, 7, 6, 4, 3, 2, 9를 정렬하라!
	
	// 2. Bubble Sort
	// 옆에 있는 값과 비교해서 더 작은/큰 값을 앞으로 보낸다
	// 정렬 알고리즘 중에서 구현은 가장 쉬우나 가장 비효율적!
	
	// 먼저 손으로 해보는것 잊지말자
	
	int i, j, temp;
	int array[10] = {1, 10, 5, 8, 7, 6, 4, 3, 2, 9};
	for(i = 0; i < 10; i++){
		for(j = 0; j < 9 - i; j++){
			if(array[j] > array[j + 1]){
				temp = array[j];
				array[j] = array[j+1];
				array[j+1] = temp;
			}
		}
	}
	
	
	// bubble sort 시간복잡도
	// 10 + 9 + 8 + 7 + ... + 1
	// 즉 N * (N + 1) / 2
	// O(N^2)
	
	// N이 엄청 큰 숫자라고 가정했을때 +나 /는 의미가 없다고 가정하여
	// +1, /2 얘네는 거른다
	
	// Selection Sort랑 시간복잡도가 똑같은데 실제 수행시간이 더 느린 이유는?
	// " 는 가장 작은걸 마지막에만 교체하는데 
	// " 와 다르게 비교할 때마다 자리를 바꾸기때문에 ( swap부분) 
	
	
	// output
	for(int i = 0; i < 10; i++){
		printf("%d ", array[i]);
	}
	
	
	return 0;
}
