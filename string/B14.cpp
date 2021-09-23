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
	for(int i=0;i<strlen(a[cnt-1]);i++){
		if(a[cnt-1][i]>='A'&&a[cnt-1][i]<='Z') a[cnt-1][i]+=32;
	}
	for(int i=0;i<cnt-1;i++){
		if(a[i][0]>='A'&&a[i][0]<='Z') a[i][0]+=32;
	}
	for(int i=0;i<cnt-1;i++){
		printf("%c",a[i][0]);
	}
	printf("%s",a[cnt-1]);
	printf("@gmail.com");
	return 0;
}

