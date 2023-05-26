#include<stdio.h>

int main(){
	
	FILE *p;
	char ch[50];
	
	p = fopen("File.txt","r");
	
	if(p == NULL){
		
		printf("Error");
	}
	else{
		
		fgets(ch,50,p);
		printf("%s",ch);
		fclose(p);
	}
	
	return 0;
}
