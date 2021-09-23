#include<stdio.h>
#include<math.h>
#include<string.h>
int main(){
	char a[100];
	gets(a);
	char b[100];
	gets(b);
	char *token1=strtok(a," ");
	int p; scanf("%d",&p);
	char x[100][100],z[100][100];
	int cnt1=0;
	while(token1!=NULL){
		strcpy(x[cnt1],token1);
		cnt1++;
		token1=strtok(NULL," ");
	}
	if(p==1){
		printf("%s",b);
		for(int i=0;i<cnt1;i++){
			printf("%s ",x[i]);
		}
	}
	else if(p>cnt1){
		for(int i=0;i<cnt1;i++){
			printf("%s ",x[i]);
		}
		printf("%s ",b);
	}
	else{
		for(int j=0;j<p-1;j++){
			printf("%s ",x[j]);
		}
		printf("%s",b);
		for(int j=p-1;j<cnt1;j++){
			printf("%s ",x[j]);
		}
	}
	return 0;
}

