//後退\bの利用例：1秒ごとに1文字ずつ消去

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
	printf("ABCDEFG");

	int i;
	for (i = 0; i < 7; i++) {
		sleep(1000); //1秒ごと待つ
		printf("\b \b"); //後ろから1文字ずつ消す
		fflush(stdout); //バッファを掃き出す
		
	}
	
	return 0;
}