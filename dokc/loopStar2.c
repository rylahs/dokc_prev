#include <stdio.h>

// �ʼ� �ǽ� ���� (���̵� 3, ���ѽð� : 20��)
// �Ʒ��� ��ó�� �ﰢ���� *�� ����ϴ� ���α׷��� �ۼ�
// �ݵ�� for���� ��ø�ϴ� ������ ����

// *
// * * 
// * * * 
// * * * * 
// * * * * *



int main(void)
{
	for (int i = 0; i < 5; ++i)
	{
		for (int j = 0; j <= i; j++)
		{
			printf("* ");
		}
		putchar('\n');
	}

	return 0;
}