#include"stdio.h"


class Array
{
public:
	Array(int num)
	{
		array = new int[num];
	}


	~Array()
	{
		delete[] array;
		array = nullptr;
	}


	void SetArray(int num)
	{
		array[num] = num;
	}

	int GetArray(int num)
	{
		return array[num];
	}

private:

	int* array=nullptr;

};




int main()
{
	int num = 1000;

	Array a(num);

	for (int i = 0; i < num; i++)
	{
		a.SetArray(i);
	}
	
	for (int i = 0; i < num; i++)
	{
		printf("%d\n", a.GetArray(i));
	}

}