
//I have fixed this programe.



#include <stdio.h>
#include<stdlib.h>
#include<time.h>

unsigned fun(unsigned* score, unsigned* below, unsigned m);
void pt_nl(int count);
int main(void)
{
	int i = 0;
	unsigned m;
	unsigned num;
	int count = 0;
	scanf_s("%d", &m);


	unsigned* score = malloc(sizeof(unsigned) * m);
	unsigned* below = malloc(sizeof(unsigned) * m);
	srand(time(NULL));

	if (!below || !score) {
		printf("No enough menory.");
		return -1;
	}


	for (i = 0; i < m;) {
		score[i++] = rand() % 151;//fill array with randme numbers
		//printf("the random score is %d\n", score[i - 1]);//debug
	}


	num = fun(score, below, m);
	printf("There are %u student's score below the averange.\n", num);
	for (i = 0; i < num; i++)
	{
		printf("Their scores are %u\t", below[i]);
		pt_nl(++count);
	}
	free(below);//free the pointer
	return 0;
}
unsigned fun(unsigned* score, unsigned* below, unsigned m) {
	int sum = 0;
	double ave = 0;
	int i = 0, j = 0;
	unsigned count = 0;

	for (i = 0; i < m; ++i) {
		//printf("the random score is %d\n", score[i]);//debug
		sum += score[i];
	}

	ave = (double)sum / m;//Sum all elements then find its average
	printf("average score is %lf\n", ave);

	for (i = 0; i < m; ++i) {
		if (score[i] < ave) {
			below[j++] = score[i];
			++count;
		}
	}//Record below-average scores.

	return count;
}
void pt_nl(int count) {
	count % 5 == 0 ? printf("\n") : 0;
}