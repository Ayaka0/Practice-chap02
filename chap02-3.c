//���A\r�̗��p��F�\�����݂̍s�̏�������

#include <time.h> //���Ԃ��擾
#include <stdio.h> //�W�����o��

//x�~���b�o�߂���̂�҂�
int sleep(unsigned long x)
{
	clock_t c1 = clock(), c2; //clock_t�^�̕ϐ�c1��c2�̐錾�Bclock_t�͎��Ԃ�\�����߂̌^

	do {
		if ((c2 = clock()) == (clock_t)-1) //�G���[�Bc2=clock()�ɂ���Č��݂̎������擾���Ac2���
			return 0; //clock()�֐����G���[��Ԃ����ꍇ��0��Ԃ��ď������I��
	} while (1000.0 * (c2 - c1) / CLOCKS_PER_SEC < x); //c2 - c1�͌o�ߎ��Ԃ��v�Z�ACLOCKS_PER_SEC��1�b������̃N���b�N����\���}�N���萔�A�o�ߎ��Ԃ��~���b�ɕϊ����܂�
	return 1;
}

int main(void)
{
	printf("My name is Fukuoka.");
	fflush(stdout);

	sleep(2000);
	printf("\rHow do you do ?    ");
	fflush(stdout);

	sleep(2000);
	printf("\rThanks.            ");

	return 0;
}