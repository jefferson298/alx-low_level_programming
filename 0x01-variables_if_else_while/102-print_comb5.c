#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: 0 (success)
 *
 */
int main(void)
{
	int nums1, nums2, nums3, nums4;

	nums1, nums2, nums3, nums4 = 0;
	while (nums1 <= '9')
	{
		while (nums2 <= '9')
		{
			while (nums3 <= '9')
			{
				while (nums4 <= '9')
				{
					if (((nums3 + nums4) > (nums1 + nums2) || nums1 < nums3)
					{
					putchar(nums1);
					putchar(nums2);
					putchar(' ');
					putchar(nums3);
					putchar(nums4);
					if (nums1 + nums2 + nums3 + nums4 == '179' && nums1 == '9')
					{
					break;
					}
					else
					{
					putchar(',');
					putchar(' ');
					}
				}

				}
				nums3++;
				}
			nums2++;
		}
		nums1++;
	}
	putchar('\n');
	return (0);
}
