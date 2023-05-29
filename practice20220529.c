#include<stdio.h>
#include<string.h>

struct Student {
	char name[50];
	int age;
	double gpa;
};

int main() {

	//配列は、同じデータ型の要素が連続して格納されたデータ構造です。各要素はゼロベースのインデックスを使用してアクセスできます。
	int numbers[5]; //5つの整数を格納する配列

	//配列要素に値を代入
	numbers[0] = 10;
	numbers[1] = 20;
	numbers[2] = 40;
	numbers[3] = 40;
	numbers[4] = 50;

	//配列要素の値を表示
	printf("%d\n", numbers[0]);
	printf("%d\n", numbers[1]);
	printf("%d\n", numbers[2]);
	printf("%d\n", numbers[3]);
	printf("%d\n", numbers[4]);

	//ポインタは、変数やデータのメモリアドレスを格納する特殊な変数です。ポインタを使用することで、メモリ上のデータに直接アクセスできます。
	int number = 10;
	int* ptr; //整数が当たポインタの宣言

	ptr = &number; //ポインタに変数のアドレスを代入

	printf("変数のアドレス：%p\n", ptr);
	printf("変数の値：%d\n", *ptr);

	//構造体は異なるデータ型の要素をまとめて格納するために使用されるユーザー定義のデータ型です。各要素はメンバと呼ばれ、どっと演算子を使用してアクセスできる。
	struct Student student1;

	//構造体のメンバに値を代入
	strncpy_s(student1.name, sizeof(student1.name), "John", _TRUNCATE);
	student1.age = 20;
	student1.gpa = 3.8;

	//構造体のメンバの値を表示
	printf("名前：%s\n", student1.name);
	printf("年齢：%d\n", student1.age);
	printf("GPA：%.2f\n", student1.gpa);

	return 0;
}