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
	for(int i=1;i<cnt;i++){
		for(int j=0;j<strlen(a[i]);j++){
			if(a[i][0]>='a'&&a[i][0]<='z') a[i][0]-=32;
			if(j!=0&& a[i][j]>='A'&&a[i][j]<='Z') a[i][j]+=32;
		}
	}
	for(int i=1;i<cnt;i++){
		printf("%s",a[i]);
		if(i!=cnt-1) printf(" ");
	}
	printf(",");
	for(int i=0;i<strlen(a[0]);i++){
		if(a[0][i]>='a'&&a[0][i]<='z') a[0][i]-=32;
	}
	printf("%s",a[0]);
	return 0;
}

