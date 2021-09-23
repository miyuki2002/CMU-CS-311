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
	int b[100]={0};
	for(int i=0;i<cnt-1;i++){
		for(int j=i+1;j<cnt;j++){
			if(b[i]==0){
				if(strlen(a[i])==strlen(a[j])){
					int dem=0;
					for(int k=0;k<strlen(a[i]);k++){
						if(a[i][k]==a[j][k]){
							dem++;
						}
					}
					if(dem==strlen(a[i])) b[j]=1;
				}
			}
		}
	}
	for(int i=0;i<cnt;i++){
		if(b[i]==0) printf("%s ",a[i]);
	}
	return 0;
}

