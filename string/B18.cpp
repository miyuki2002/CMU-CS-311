#include<stdio.h>
#include<math.h>
#include<string.h>

int main(){
	char c[100];
	gets(c);
	for(int i=0;i<strlen(c);i++){
		if(c[i]>='A'&&c[i]<='Z') c[i]+=32;
	}
	char a[100][100];
	int cnt=0;
	char *token=strtok(c," ");
	while(token!=NULL){
		strcpy(a[cnt],token);
		cnt++;
		token=strtok(NULL," ");
	}
	int max=0;
	char x[100];
	for(int i=0;i<cnt-1;i++){
		int dem2=1;
		for(int j=i+1;j<cnt;j++){
			if(strlen(a[i])==strlen(a[j])){
				int dem=0;
				for(int k=0;k<strlen(a[i]);k++){
					if(a[i][k]==a[j][k]) dem++;
				}
				if(dem==strlen(a[i])) dem2++;
			}
		}
		if(dem2>max){
			max=dem2;
			strcpy(x,a[i]);
		}
	}
	printf("%s %d",x,max);
	return 0;
}

