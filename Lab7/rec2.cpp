#include<iostream>
using namespace std;
int sumCount(int value)
{
    if (value <= 0)
        return 0; // базовый случай (условие завершения)
    else if (value == 1)
        return 1; // базовый случай (условие завершения)
    else
        return sumCount(value - 1) + value; // рекурсивный вызов функции
}
int main(){
	int value;
	cin>>value;
	cout<<sumCount(value);
	return 0;
}