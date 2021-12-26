#include <locale.h>
#include <stdio.h>
#include <string.h>

int main() {
	setlocale(LC_ALL, "Rus");
	char s[50], s1[50], s2[50];
	int i;
	s[0] = 0;
	printf("Введите первую строку: ");
	gets(s1);
	printf("Введите вторую строку: ");
	gets(s2);
	strcpy(s, s1);
	strcat(s, s2);	
	printf("Результат: ");
	puts(s);
	strcpy(s, s2);
	strcat(s, s1);	
	
	return 0;
}