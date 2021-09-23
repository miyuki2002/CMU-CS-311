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
	char x[100];
	gets(x);
	int b[100]={0};
	for(int i=0;i<cnt;i++){
		if(strlen(a[i])==strlen(x)){
			int dem=0;
			for(int j=0;j<strlen(x);j++){
				if(a[i][j]==x[j]){
					dem++;
				}
			}
			if(dem==strlen(x)) b[i]=1;
		}
	}
	for(int i=0;i<cnt;i++){
		if(b[i]==0) printf("%s ",a[i]);
	}
	return 0;
}

