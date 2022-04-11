#include<stdio.h>

void jprint(int x ){
	printf("%d\n", x);
}

void main(){
	
	int n = 10; //users input 1 time
	int i; // 1 time
	int r = 2; // 1 time
	
 	// i 1 -> 10
	for(i = 1; i<=n; i = i*2){ // 1, 2, 4, 8 
	n  = n/2
		jprint(i*r); // 1->10 * 2 => 2 -> 20 // n times  -> log(n)
		
//		for(i = 1; i<=m; i++){ //
//					//   n* m -> n*2
//		}
	
	}
	
}


// 1 + 1+ 1 + n => n => O(n)


// n + n*2 + logN => n*2 -> O(n*2)


// n + nlogn => nLogN -> O(nlogn)


// small to greates -> o(1) -> o(logn) -> sqrt(n) -> o(n) -> nlogn -> sqrt(n) -> n*2 -> n*3 -> n*4


