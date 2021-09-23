#include<stdio.h>
#include<math.h>
#include<string.h>
int main(){
	char c[100];
	gets(c);
	char *token=strtok(c," ");
	char a[100][100];
	int cnt=0;
	while(token!=NULL){
		strcpy(a[cnt],token);
		cnt++;
		token=strtok(NULL," ");
	}
	for(int i=cnt-1;i>=0;i--){
		for(int j=strlen(a[i])-1;j>=0;j--){
			printf("%c ",a[i][j]);
		}
	}
	return 0;
}

