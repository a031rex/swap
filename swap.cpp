#include<iostream>
using namespace std;

void swapXOR(int *a,int *b)
{
	*a = *a ^ *b;
	*b = *a ^ *b;
	*a = *a ^ *b;
}

int main()
{
	cout<<"不使用任何變數swap"<<endl;
	int a=1,b=2;
	cout<<"a="<<a<<" b="<<b<<endl;
	swapXOR(&a,&b);
	cout<<"a="<<a<<" b="<<b<<endl;
	system("pause");
	return 0;
}
