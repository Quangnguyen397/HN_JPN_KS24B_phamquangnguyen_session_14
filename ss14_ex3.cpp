#include<stdio.h>
#include<string.h>
int main(){
	char str[50];
	printf("moi ban nhap chuoi ki tu %s \n",str);
	gets(str);
	for(int i=strlen(str)-1;i>=0;i--){
		printf("chuoi ki tu cua ban nguoc lai la : %c \n",str[i]);
	}
	
	return 0;
}
