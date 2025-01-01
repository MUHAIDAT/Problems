#include<iostream>
using namespace std;

enum enPassFail {pass = 1, fail = 2};
int ReadMark(int from , int to)
{
	int mark;
	cout << "Plzz,Emter Your Mark: \n";
	cin >> mark;
	while (mark > 100 || mark < 0)

	{
		cout << "wrong mark.\n";
		cout << "plzz enter a number between " << from << " and " << to << endl;
		cin >> mark;
	}
	return mark;
}

enPassFail CheckMark(int mark)
{
	if (mark >= 50)
		return enPassFail::pass;
	else
		return enPassFail::fail;
}
void PrintMark(int mark)
{
	if (CheckMark(mark) == enPassFail::pass)
		cout << "You Passed.\n";
	else
		cout << "You Failed.\n";
}
int main()
{
	PrintMark(ReadMark(0,100));
	return 0;
}