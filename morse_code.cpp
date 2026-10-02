#include<iostream>
#include<cstdlib>
#include<string>
using namespace std;
string MorseCharacter[26] =
{  ".-",     // a
	"-...",   // b
	"-.-.",   // c
	"-..",    // d
	".",      // e
	"..-.",   // f
	"--.",    // g
	"....",   // h
	"..",     // i
	".---",   // j
	"-.-",    // k
	".-..",   // l
	"--",     // m
	"-.",     // n
	"---",    // o  
	".--.",   // p
	"--.-",   // q
	".-.",    // r
	"...",    // s
	"-",      // t
	"..-",    // u
	"...-",   // v
	".--",    // w
	"-..-",   // x
	"-.--",   // y
	"--.."    // z

};
string MorseNumber[10] =
{
	"-----",".----","..---","...--","....-",".....","-....","--...","---..",
	"----."
};
string MorseToText(string n)
{
	string result = "";
	string temp = "";

	for (int i = 0; i < n.length(); i++)
	{
		if (n[i] == ' ')   
		{
			if (temp == "/")
			{
				result += " ";
			}
			else if (temp != "")
			{
				for (int j = 0; j < 26; j++)
				{
					if (MorseCharacter[j] == temp)
					{
						result += (char)('a' + j);
						break;
					}
				}
				for (int j = 0; j < 10; j++)
				{
					if (MorseNumber[j] == temp)
					{
						result += (char)('0' + j);
						break;
					}
				}
			}
			temp = "";
		}
		else
		{
			temp += n[i]; 
		}
	}
	if (temp != "")
	{
		if (temp == "/")
		{
			result += " ";
		}
		else
		{
			for (int j = 0; j < 26; j++)
			{
				if (MorseCharacter[j] == temp)
				{
					result += (char)('a' + j);
					break;
				}
			}
			for (int j = 0; j < 10; j++)
			{
				if (MorseNumber[j] == temp)
				{
					result += (char)('0' + j);
					break;
				}
			}
		}
	}

	return result;
}
		

		
		

int main()
{

	int choice;
	cout << "===Morse密码处理器==" << endl;
	int i = 0;
	do {
		cout << "1 .加密  2.解密" << endl;

		cin >> choice;



		if (choice == 1)
		{
			string m;
			cout << "OK,请输入明文" << endl;
			cin.ignore();

			getline(cin, m);


			string e = "";
			for (int i = 0; i < m.length();i++)
			{
				char c = m[i];
				if (c >= 'a' && c <= 'z')
				{
					e += MorseCharacter[c - 'a'];
					e += " ";
				}
				else if (c <= '9' && c >= '0')
				{
					e += MorseNumber[c - '0'];
					e += " ";
				}

			}
			cout << "加密结果为：" << e << endl;
		}
		else if (choice == 2)
		{
			string n;
			cout << "OK,请输入密文" << endl;
			cin.ignore();
			getline(cin, n);

			string result = MorseToText(n);
			cout << "解密结果为：" << result << endl;

		}
		else if (choice = 3)
		{
			cout << "感谢使用" << endl;
			break;
		}
		else
		{
			cout << "请输入正确选择" << endl;
		}
	} while (i <= 10);
	system("pause");
	return 0;
}
