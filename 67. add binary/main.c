#include <stdio.h>
#include <string.h>
#include <math.h>

void addBinary(char* a, char* b) {
    int len_a = strlen(a);
    int len_b = strlen(b);
    int dec_a = 0;
    int dec_b = 0;
    char *biner = NULL;
    for (int i =0;i<len_a;i++){
        if (*(a+i)=='1'){
	    len_a--;
            dec_a += pow(2,len_a);
        }
    }
    for (int i =0;i<len_b;i++){
        if (*(b+i)=='1'){
            dec_b += pow(2,len_b-1);
        } len_b--;
    }
    printf("%d ",dec_a);
}
int main(){
	char x[] = "11";
	char y[] = "1";
	addBinary(x,y);
}
