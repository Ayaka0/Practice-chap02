#include<stdio.h>
#include<string.h>

struct Student {
	char name[50];
	int age;
	double gpa;
};

int main() {

	//�z��́A�����f�[�^�^�̗v�f���A�����Ċi�[���ꂽ�f�[�^�\���ł��B�e�v�f�̓[���x�[�X�̃C���f�b�N�X���g�p���ăA�N�Z�X�ł��܂��B
	int numbers[5]; //5�̐������i�[����z��

	//�z��v�f�ɒl����
	numbers[0] = 10;
	numbers[1] = 20;
	numbers[2] = 40;
	numbers[3] = 40;
	numbers[4] = 50;

	//�z��v�f�̒l��\��
	printf("%d\n", numbers[0]);
	printf("%d\n", numbers[1]);
	printf("%d\n", numbers[2]);
	printf("%d\n", numbers[3]);
	printf("%d\n", numbers[4]);

	//�|�C���^�́A�ϐ���f�[�^�̃������A�h���X���i�[�������ȕϐ��ł��B�|�C���^���g�p���邱�ƂŁA��������̃f�[�^�ɒ��ڃA�N�Z�X�ł��܂��B
	int number = 10;
	int* ptr; //�����������|�C���^�̐錾

	ptr = &number; //�|�C���^�ɕϐ��̃A�h���X����

	printf("�ϐ��̃A�h���X�F%p\n", ptr);
	printf("�ϐ��̒l�F%d\n", *ptr);

	//�\���͈̂قȂ�f�[�^�^�̗v�f���܂Ƃ߂Ċi�[���邽�߂Ɏg�p����郆�[�U�[��`�̃f�[�^�^�ł��B�e�v�f�̓����o�ƌĂ΂�A�ǂ��Ɖ��Z�q���g�p���ăA�N�Z�X�ł���B
	struct Student student1;

	//�\���̂̃����o�ɒl����
	strncpy_s(student1.name, sizeof(student1.name), "John", _TRUNCATE);
	student1.age = 20;
	student1.gpa = 3.8;

	//�\���̂̃����o�̒l��\��
	printf("���O�F%s\n", student1.name);
	printf("�N��F%d\n", student1.age);
	printf("GPA�F%.2f\n", student1.gpa);

	return 0;
}