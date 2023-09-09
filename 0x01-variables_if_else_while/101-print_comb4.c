#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: 0 (success)
 *
 */
int main(void)
{
	int nums1, nums2, nums3;

	nums1 = '0';
	nums2 = '0';
	nums3 = '0';
	while (nums1 <= '9')
	{
		while (nums2 <= '9')
		{
			nums3 = '0';
			while (nums3 <= '9')
			{
				if (nums1 < nums2 && nums2 < nums3)
				{
					putchar(nums1);
					putchar(nums2);
					putchar(nums3);
					if (nums1 != '7')
					{
						putchar(',');
						putchar(' ');
					}
				}
				nums3++;
			}
			nums2++;
		}
		nums1++;
		nums2 = '0';
	}
	putchar('\n');
	return (0);
}

