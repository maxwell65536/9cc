#include <stdio.h>
#include <stdlib.h>

int main(int argc,char **argv){
	if(argc != 2){
		fprintf(stderr,"引数が正しくありませんyo\n");
		return 1;
	}
	printf(".intel_syntax noprefix\n");
	printf(".global main\n");
	printf("main:\n");
	printf("	mov rax, %ld\n", strtol((argv[1]),NULL,10));
	printf("	ret\n");
	return 0;
}