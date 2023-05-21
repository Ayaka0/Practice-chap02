//復帰\rの利用例：表示ずみの行の書き換え

#include <time.h> //時間を取得
#include <stdio.h> //標準入出力

//xミリ秒経過するのを待つ
int sleep(unsigned long x)
{
	clock_t c1 = clock(), c2; //clock_t型の変数c1とc2の宣言。clock_tは時間を表すための型

	do {
		if ((c2 = clock()) == (clock_t)-1) //エラー。c2=clock()によって現在の時刻を取得し、c2代入
			return 0; //clock()関数がエラーを返した場合は0を返して処理を終了
	} while (1000.0 * (c2 - c1) / CLOCKS_PER_SEC < x); //c2 - c1は経過時間を計算、CLOCKS_PER_SECは1秒当たりのクロック数を表すマクロ定数、経過時間をミリ秒に変換します
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