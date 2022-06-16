// Giải bài toán vui sau: Trăm trâu trăm cỏ Trâu đứng ăn năm Trâu nằm ăn ba Ba trâu già ăn một.Hỏi có bao nhiêu trâu mỗi loại?
#include "../include.cpp"
int main()
{
	int TrauNam, TrauDung, TrauGia;
	for (TrauDung = 1; TrauDung*5 <= 100; TrauDung++)
	{
		for (TrauGia = 1; TrauGia*3 <= 100; TrauGia++)
		{
			for (TrauNam = 1; TrauNam <= 100; TrauNam++)
			{
				if ((TrauDung * 5 + TrauNam * 3 + TrauGia / 3 == 100) && (TrauDung + TrauGia + TrauNam == 100))
				{
					printf("Trau Dung: %d\t Trau Nam: %d\t Trau Gia:%d\t\n", TrauDung, TrauNam, TrauGia);
				}
			}
		}
	}
	system("pause");
}
