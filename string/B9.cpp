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
	for(int i=0;i<cnt;i++){
		printf("%s\n",a[i]);
	}
	return 0;
}

