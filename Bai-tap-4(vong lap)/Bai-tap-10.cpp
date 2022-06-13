// Viết chương trình tìm các số hoàn chỉnh nhỏ hơn n (Với n được nhập từ bàn phím).
#include "../include.cpp"
int main()
{
	int InPut, temp = 0, sum = 1, j = 1;
	cout << "Moi ban nhap so ban ko thich\n";
	cin >> InPut;
	// xu li
	int bound = (int)sqrt(InPut);
	for (int i = 1; i < bound; i++)
	{
		if (InPut % i == 0)
		{
			if (InPut / i == i)
			{
				sum += i;
			}
			else
			{
				sum += i;
				sum += InPut / i;
			}
		}
		if (sum == InPut)
		{
			cout << i << " ";
		}
	}
}
