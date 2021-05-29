#include<stdio.h>
#include<string.h>

int main(){
	
	char username[100];
	char email[100];
	char password[100];
	int hitung1 = 0;
	int hitung2 = 0;
	
	printf("Username : ");
	scanf("%s",&username);
	for(int i=0;i<strlen(username);i++){
		if(strlen(username) != 6 || username[i] >= 'A' && username[i] <= 'Z'){
			hitung1++;
		}
	}

	if(hitung1 != 0){
		printf("invalid\n");
	}else{
		printf("valid\n");
	}
	
	hitung1 = 0;
	printf("Email : ");
	scanf("%s",&email);
	for(int i=0;i<strlen(email);i++){
		if(email[i] >= 'A' && email[i] <= 'Z'){
			hitung1++;
		}
		if(email[i] == '@'){
			hitung2++;
		}
	}
	if(hitung1 != 0 || hitung2 == 0){
		printf("invalid\n");
	}else{
		printf("valid\n");
	}
	
	hitung1 = 0;
	printf("Password : ");
	scanf("%s",&password);
	for(int i=0;i<strlen(email);i++){
		if(strlen(password) <= 8 || password[i] >= 'a' && password[i] <= 'z' || password[i] < '0' || password[i] >'9' ){
			hitung1++;
		}
	}
	if(hitung1 != 0){
		printf("invalid\n");
	}else{
		printf("valid\n");
	}
		

	
	return 0;
}
