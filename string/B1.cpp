#include<stdio.h>
#include<math.h>
#include<string.h>

int main(){
	char c[100];
	gets(c);
	int x=0,y=0,z=0;
	for(int i=0;i<strlen(c);i++){
		if(c[i]>='0'&&c[i]<='9') x++;
		else if(c[i]>='a'&&c[i]<='z'||c[i]>='A'&&c[i]<='Z') y++;
		else z++;
	}
	printf("%d %d %d",x,y,z);
	return 0;
}

