#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAXBUFFER 64

int main(int argc, char** argv){

	FILE* input = stdin;
	int items = 0;
	char buffer[MAXBUFFER] = "";
	int sum = 0;
	char ns[3] = "";
	short int flag[2];

	do{
		flag[0] = 0;
		flag[0] = 0;
		items = fscanf(stdin, "%s\n", buffer);
		if (items>0){
			int length = strlen[buffer];
			for(int x = 0; x<length; x++){
				if(flag[0]==0 && buffer[x]>='0' && buffer[x]<='9'){
					ns[0] = buffer[x];
					if(flag[1] == 1) break;
				}

				if(flag[1] == 0 && buffer[length - 1 - x] >= '0' && buffer[length - 1 - x] <='9'){
					ns[1] = buffer[length - 1 - x];
					if(flag[0] == 1) break;
					flag[1] = 1;
				}
			}
			sum += atoi(ns);
		       		
		}
	}while(items>0);
	printf("%d\n", sum);
}
