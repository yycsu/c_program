// #include <stdio.h>

// int main()
// {
// 	int A = 0, B = 1, C = 2, x, y, z;

// 	for (x = 0; x <= 2; x++)
// 	{
// 		for (y = 0; y <= 2; y++)
// 		{
// 			for (z = 0; z <= 2; z++)
// 			{
// 				if ((x!= 0) && (x!= 2) && (z!= 2) && (x + y + z == 3) && (x != y))
// 				{
// 					if(x == 0)
// 						printf("新郎A和新娘x结婚了\n");
// 					else if(y == 0)
// 						printf("新郎A和新娘y结婚了\n");
// 					else
// 						printf("新郎A和新娘z结婚了\n");

// 					if(x == 1)
// 						printf("新郎B和新娘x结婚了\n");
// 					else if( y == 1)
// 						printf("新郎B和新娘y结婚了\n");
// 					else
// 						printf("新郎B和新娘z结婚了\n");

// 					if(x == 2)
// 						printf("新郎C和新娘x结婚了\n");
// 					else if(y == 2)
// 						printf("新郎C和新娘y结婚了\n");
// 					else
// 						printf("新郎C和新娘z结婚了\n");
					
// 				}
// 			}
// 		}
// 	}
// 	return 0;
// }

#include <stdio.h>

int main()
{
	char x, y, z;
	for(x = 'A'; x <= 'C'; x++)
	{
		for(y = 'A'; y <= 'C'; y++)
		{
			for(z = 'A';z <= 'C'; z++)
			{
				if (x !='A' && x !='C' && z != 'C' && x != y && x != z && y != z)
				{
					printf("结果是：\n");
					printf("新娘x与新郎%c结婚.\n",x);
					printf("新娘y与新郎%c结婚.\n",y);
					printf("新娘z与新郎%c结婚.\n",z);
				}
			}
		}
	}
	return 0;
}