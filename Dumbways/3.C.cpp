#include<stdio.h>
#include<string.h>

int main(){
	
	int y,z;
	char x[100];
	
	scanf("%s",&x);
	for(y=1;y<=strlen(x);y++){
		for(z=1;z<=y;z++){
			printf(" ");
		}
		printf("%c\n",x[y-1]);
		printf("\n");
	}
	
	return 0;
}


