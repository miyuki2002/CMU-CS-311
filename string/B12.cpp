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
	char x[100],y[100];
	int max=0,min=1e9;
	for(int i=0;i<cnt;i++){
		if(strlen(a[i])>=max){
			max=strlen(a[i]);
			strcpy(x,a[i]);
		}
		if(strlen(a[i])<=min){
			min=strlen(a[i]);
			strcpy(y,a[i]);
		}
	}
	printf("%s %s",x,y);
	return 0;
}

