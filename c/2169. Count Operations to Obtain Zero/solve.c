#include <stdio.h>

int obtains_zero(int x,int y){
	int count = 0;
	if (x==0 || x==0){
		return 0;
	}
	while (x&&y){
		if (x-y==0){
			count+=1;
			break;
		}
		if (x>=y){
			x = x-y;
			count++;
		} else{
			y = y-x;
			count++;
		}
	} return count;
}

int main(){
printf("%d\n",obtains_zero(1333337,200));
}
