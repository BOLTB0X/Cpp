#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
//간단한 정보시스템 만들기
typedef struct { //구조체 선언
	char name[20];
	int score;
} Student;

int main(void) {
	int n, sum = 0;
	FILE *fp;
	fp = fopen("input.txt", "r");
	fscanf(fp, "%d", &n);
	printf("%d\n", n);
	Student *students = (Student*)malloc(sizeof(Student) * n);
	for (int i = 0; i < n; i++) {
		fscanf(fp, "%s %d", &((students + i)->name), &((students + i)->score));
		printf("이름: %s, 성적: %d\n", (students + i)->name, (students + i)->score);
	}
	system("pause");
	return 0;
}