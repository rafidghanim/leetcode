#include <string.h>
#include <stdlib.h>
#include <stdio.h>
int lengthOfLastWord(char* s) {
    char *temp = NULL;
    temp  = malloc(sizeof(char));
    for (int i = 0;i<strlen(s);i++){
        if (strcmp(*(s+i)," ")==0){
            return 0;
        }
    }
    return 1;
}


int main(){
	printf("%d ",lengthOfLastWord("hacker"));
}
