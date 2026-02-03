#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int maxmin(int *x,y){
	int max = x[0];
	int min = x[0];
	for (int i = 0;i<y;i++){
		if (max<x[i]){
			max = x[i];
		} else {
			min = x[i];
		}
	}
	return max,min
}



int minMaxDifference(int x){
	int *p = malloc(100*sizeof(int));
	int count = 0;
	int d = 0;
	while (x >0){
		*(p+count) = x % 10;
		x/=10;
		count++;
		d++;
	}
	for (int i = 0;i<count/2;i++){
		int temp = p[i];
		p[i] = p[count -i-1];
		p[count-i-1] = temp;
	}
	for (int i = 0;i<count;i++){
		printf("%d\n",p[i]);
	}
	int max = p[0];
	int min = p[0];
	for (int i =0;i<count;i++){
		if (max<p[i]){
			max = p[i];
		} else {
			min = p[i];
		}
	}
}

int main(){
	int a = 12345;
	minMaxDifference(a);
}
