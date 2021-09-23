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
		int dem=0;
		for(int j=0;j<strlen(a[i]);j++){
			if(a[i][j]>='A'&&a[i][j]<='Z') dem++;
		}
		if(dem==strlen(a[i])) printf("%s ",a[i]);
	}
	return 0;
}

