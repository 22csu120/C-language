#include <stdio.h>
#include <string.h>

struct student{
	char name[20];
	int age ;
	char roll[5];
	char sub[10];
}s1,s2;

int main(){
	s1.age = 24 ;
	strcpy(s1.name, "mudit");
	printf("%s",s1.name);
}
