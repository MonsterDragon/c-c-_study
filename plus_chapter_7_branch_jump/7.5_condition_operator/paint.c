/* paint.c -- 使用条件运算符 */
# include <stdio.h>

int main(void)
{
	const int COVERAGE = 350;
	int sq_feet;
	int cans;

	printf("Enter number of square feet to be painted: \n");
	while (scanf("%d", &sq_feet))
	{
		cans = sq_feet / COVERAGE;
		cans = (sq_feet % COVERAGE) ? ++cans : cans;
		printf("You need %d %s of paint.\n", cans, cans == 1 ? "can" : "cans");
		printf("Enter next value (q to quit):\n");
	}

	return 0;
}