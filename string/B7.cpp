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
	for(int i=0;i<strlen(a[cnt-1]);i++){
		if(a[cnt-1][i]>='a'&&a[cnt-1][i]<='z'){
			a[cnt-1][i]-=32;
		}
	}
	for(int i=0;i<cnt-1;i++){
		for(int j=0;j<=strlen(a[i]);j++){
			if(a[i][0]>='a'&&a[i][0]<='z') a[i][0]-=32;
			if(j!=0&&a[i][j]>='A'&&a[i][j]<='Z') a[i][j]+=32;
		}
	}
	for(int i=0;i<cnt-1;i++){
		printf("%s",a[i]);
		if(i!=cnt-2) printf(" ");
	}
	printf(",%s",a[cnt-1]);
	return 0;
}

