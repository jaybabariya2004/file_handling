#include<stdio.h>

int main(){
	
	FILE *p;
	char ch[50];
	
	p = fopen("File.txt","a");
	
	if(p == NULL){
		
		printf("Error");
	}
	else{
		
		fputs("\n",p);
		fputs(ch,p);
		printf("%s",ch);
		fclose(p);
	}
	
	return 0;
}
