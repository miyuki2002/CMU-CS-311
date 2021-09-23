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
	int b[100]={0};
	char *token=strtok(c," ");
	while(token!=NULL){
		strcpy(a[cnt],token);
		cnt++;
		token=strtok(NULL," ");
	}
	for(int i=0;i<cnt-1;i++){
		int dem=1;
		for(int j=i+1;j<cnt;j++){
			if(b[i]==0){
				if(strlen(a[i])==strlen(a[j])){
					int dem2=0;
					for(int k=0;k<strlen(a[i]);k++){
						if(a[i][k]==a[j][k]) dem2++;
						if(dem2==strlen(a[i])){
							dem++;
							b[j]=1;
						}
					}
				}
			}
		}
		if(b[i]==0) printf("%s %d\n",a[i],dem);
	}
	return 0;
}

