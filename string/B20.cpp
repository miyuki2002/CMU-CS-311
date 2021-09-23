#include<stdio.h>
#include<math.h>
#include<string.h>
int main(){
	char a[100];
	gets(a);
	char b[100];
	gets(b);
	char x[100][100],y[100][100];
	int cnt1=0,cnt2=0;
	char *token1=strtok(a," ");
	while(token1!=NULL){
		strcpy(x[cnt1],token1);
		cnt1++;
		token1=strtok(NULL," ");
	}
	char *token2=strtok(b," ");
	while(token2!=NULL){
		strcpy(y[cnt2],token2);
		cnt2++;
		token2=strtok(NULL," ");
	}
	int c[100]={0};
	for(int i=0;i<cnt2;i++){
		for(int j=0;j<cnt1;j++){
			if(strlen(y[i])==strlen(x[j])){
				int dem=0;
				for(int k=0;k<strlen(y[i]);k++){
					if(y[i][k]==x[j][k]) dem++;
					if(dem==strlen(y[i])) c[j]=1;
				}
			}
		}
	}
	for(int i=0;i<cnt1;i++){
		if(c[i]==0) printf("%s ",x[i]);
	}
	return 0;
}

