//20250505 ��1x2x3x4x5
//����һ:�������
//#include <stdio.h>
//
//int main()
//{
//	int count = 1;
//	int product = count;
//	while (count <= 5) {
//		product *= count;
//		count++;
//	}
//	printf("5! = %d", product);
//
//	return 0;
//}

//������:�ݹ鷽ʽ����
#include <stdio.h>

//�ݹ麯��
int function(int value)
{
	if (value == 0) return 1;
	return value*function(value - 1);	//!!!��Ҫʹ��"--value"�Լ�����ʹ��value
	//ֵ���� �����������ǻ�ı� ����ֵ�� �ڵݹ��в���Ҫ�ı䱾ѭ����ֵ ֻ��Ҫ��
	//ֵ���ݸ������μ���
}
int main()
{
	int a = 5;
	printf("5! = %d\n", function(a));

	return 0;
}


