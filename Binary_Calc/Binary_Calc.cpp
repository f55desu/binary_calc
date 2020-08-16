#include <iostream>

using namespace std;

int main()
{
	bool app = true;
	while (app)
	{
		int choise;
		cout << "What do you want?\n";
		cout << "1 - Text to binary\n";
		cout << "2 - Binary to text\n";
		cout << "0 - Exit\n";
		cout << "Enter the choise<<< "; cin >> choise; cout << endl;
		switch (choise)
		{
		case 1:
		{
			string text;
			int result = 0;
			const int len = 27;
			cout << "Enter the text you want to convert <<< "; cin >> text; cout << endl;
			char alphabet_h[len] = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
			char alphabet_l[len] = "abcdefghijklmnopqrstuvwxyz";
			string new_text;
 
			for (int j = 0; j < text.length(); j++)
			{
				for (int i = 0; i < len; i++)
				{
					string new_result;
					if (text[j] == alphabet_h[i] || text[j] == alphabet_l[i])
					{
						result += i;
						//перевод из 10 в 2
						if (result % 2 == 0)
						{
							new_result = '0';
						}
						else
						{
							new_result = '1';
						}
						result /= 2;
						while (result > 0) //заполнение строки
						{
							if (result == 1) //конец строки
							{
								new_result += '1';

								break; //<---
							}
							else
							{
								if (result % 2 == 0)
								{
									new_result += '0';
								}
								else
								{
									new_result += '1';
								}
								result /= 2;
							}
						}
						reverse(new_result.begin(), new_result.end()); //революционный переворот
					}
					new_text += new_result;
				}
			}
			cout << "Your Binare number: " << new_text << endl;
			break;
		}
		case 2:
		{
			string binare;
			int result = 0;
			const int len = 27;
			cout << "Enter the binare you want to convert <<< "; cin >> binare; cout << endl;
			char alphabet_h[len] = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
			char alphabet_l[len] = "abcdefghijklmnopqrstuvwxyz";

			for (int j = 0; j < binare.length(); j++)
			{

			}
		}
		case 0:
		{
			app = false;
			break;
		}
		default:
			break;
		}
	}
	return 0;
}