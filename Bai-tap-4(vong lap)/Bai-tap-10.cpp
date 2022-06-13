// Viết chương trình tìm các số hoàn chỉnh nhỏ hơn n (Với n được nhập từ bàn phím).
#include "../include.cpp"
int main()
{
	int InPut, temp = 0, sum = 1;
	cout << "Moi ban nhap so ban ko thich\n";
	cin >> InPut;
	// xu li
	for (int i = 1; i < InPut; i++)
	{
		sum = 0;
		for (int j = 1; j < i; j++)
		{
			if (i % j == 0)
			{
				sum += j;
			}
		}
		if (sum == i)
		{
			cout << i << " ";
		}
	}
}

