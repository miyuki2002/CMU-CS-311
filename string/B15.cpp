#include<stdio.h>
#include<math.h>
#include<string.h>
int main(){
	char c[100];
	gets(c);
	char a[100][100];
	int cnt=0;
	char *token=strtok(c," ");
	while(token!=NULL){
		strcpy(a[cnt],token);
		cnt++;
		token=strtok(NULL," ");
	}
	for(int i=0;i<cnt;i++){
		for(int j=0;j<strlen(a[i]);j++){
			printf("%c ",a[i][j]);
		}
	}
	return 0;
}

