#include<stdio.h>
#include<math.h>
#include<string.h>
char *strtok(char *str,const char* phancach);
int main(){
	char c[100];
	gets(c);
	char *token=strtok(c," ");
	int cnt=0;
	while(token!=NULL){
		cnt++;
		token=strtok(NULL," ");
	}
	printf("%d",cnt);
	return 0;
}

