#include <stdio.h>

int main(void){
	// 1, 10, 5, 8, 7, 6, 4, 3, 2, 9를 정렬하라 
	
	// 알고리즘은 코드보다 연습장과 생각이 먼저다 
	
	// 1. Selection Sort
	// 가장 작은 것을 선택해서 제일 앞으로 보내면 어떨까?	
	
	int i, j, min, index, temp;
	int array[10] = {1, 10, 5, 8, 7, 6, 4, 3, 2, 9};
	for(i = 0; i < 10; i++){
		min = 9999;	// 모든 원소들보다 큰 아무 숫자
		for(j = i; j < 10; j++){
			if(min > array[j]){
				min = array[j];
				index = j;
			}
		}
		temp = array[i];		// swap
		array[i] = array[index];
		array[index] = temp;
	}
	
	
	// output
	for(int i = 0; i < 10; i++){
		printf("%d ", array[i]);
	}
	
	// 수행시간의 척도 Big O Notation!
	// Selection Sort는 첫자리부터 끝자리까지 비교를 수행하므로
	// 10번 + 9번 + 8번 + 7번 + ... + 1번 비교하게 된다
	// 등차수열인데
	// 등차수열 공식은 N * (N + 1) / 2이다
	// 그러므로 선택 정렬은
	// 10 * (10 + 1) / 2번 수행하고, 간편화하여
	// N * (N + 1) / 2에서 1과 2같은 조무래기는 빼고
	// O(N * N)
	
	// O(N^2) 
	
	// 으로 표현한다 
	
	// 즉, 특정 알고리즘의 수행시간을 가장 간단하게 표기한것이다
	// = 총 연산 횟수 
	
	// 10000개를 계산하려면 1억번 계산해야 하므로 비효율적이다 
	
	
	return 0;
}
