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

		  do{
					 items = fscanf(stdin, "%s\n", buffer);
					 if (items>0){
								for(int x = 0; x<strlen(buffer); x++){
										  if(buffer[x] >= '0' && buffer[x]<='9'){
													 ns[0] = buffer[x];
													 break;
										  }
								}
								for(int x = strlen(buffer); x>=0; x--){
										  if(buffer[x] >= '0' && buffer[x]<='9'){
													 ns[1] = buffer[x];
													 break;
										  }
								}
								sum += atoi(ns);
								
					 }
		  }while(items>0);
		  printf("%d\n", sum);
}
