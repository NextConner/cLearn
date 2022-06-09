#include <stdio.h>

#define swap(t, x, y) \
	{                   \
		t temp = y;       \
		y = x;            \
		x = temp;         \
	}

//宏定义的swap 程序块，交换指定类型的x,y 值
main()
{

	int i = 0;
	int j = 2;
	swap(int, i, j);
	printf("%d , %d", i, j);
}