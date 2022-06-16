#include "../include.cpp"
int main()
{
<<<<<<< HEAD
    long long InPut, sum = 0;
    cout << "Nhap so\n";
    cin >> InPut;
    for (int i = 1; i < InPut; i++)
    {
        sum =0;
        for (int z = 1; z<i; z++)
        {
            if (i % z == 0)
            {
                sum += z;
            }
        }
        if (sum == i)
        {
            cout << i << endl;
        }
    }
}
=======
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

>>>>>>> 0397f64c891640fbe6f2727330552330fd834dbe
