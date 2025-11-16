#include <stdio.h>
#include <string.h>
#include <stdlib.h>
int strStr(char* haystack, char* needle) {
    int len_0 = strlen(haystack);
    int len_1 = strlen(needle);
    char *saved = malloc(len_1);
    int res = -1;
    if (len_1==0) return 0;
    for (int i = 0;i<=len_0;i++){
		if(strncmp(&haystack[i],needle,len_1)==0){
			res = i;
			break;
		}
	}
    return res;
}


int main(){
	char *needle = NULL;
	char *haystack = NULL;
	haystack = "imanotheranonhacker1337entahlah";
	needle = "hacker";
	
	printf("%d ",strStr(haystack,needle));
	
	
	
}
