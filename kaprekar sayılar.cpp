#include<iostream>
#include<cmath>
using namespace std;
int dizi[20];
bool kaprekar(int f)
{
	if (f==1)
	{
		return 1;
	}
	int karesi = f * f, basamak = 0;
		while (karesi)
		{
			basamak++;
			karesi /= 10;
		}
	karesi = f * f;
	for (int i = 1; i < basamak; i++)
	{
		int parca = pow(10, i);
		if (parca==f)
		{
			continue;
		}
		int toplam = karesi / parca + karesi % parca;
		if (toplam==f)
		{
			return 1;
		}
	}
	return 0;
}
int main()
{
	int say = 1;
	cout << "ilk 20 kaprekar sayisi" << endl;
	for (int i = 0; i < 20; )
	{
		if (kaprekar(say))

		{
			dizi[i] = say;
			i++;
		}
		say++;
	}
	for (int i = 0; i <20 ; i++)
	{
		cout << dizi[i] <<"\t";
	}
	return 0;
}
	
	

	

