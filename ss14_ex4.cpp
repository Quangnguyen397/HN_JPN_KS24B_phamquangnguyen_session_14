#include<stdio.h>
#include<string.h>
int main(){
	char arr [50]="chao em nha";
	char a;
	int b=0;
	int length = sizeof(arr)/sizeof(char);
	printf("hay nhap ki tu: ");
	scanf("%c",&a);
	for(int i= 0; i < length -1 ; i++ ){
		if (a == arr[i]){
			b++;
		}else{
			printf("\n ko co phan tu nao");
			break;
		}
	}
        printf("\n so luong la: %d ",b);
return 0;
}
