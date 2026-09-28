#include<iostream>
#include<cstdlib>
#include<string>
using namespace std;

int main()
{
	//=========================主菜单=================================
	int choice;

	cout << "==凯撒密码 加密/解密 器==" << endl;
	int i = 0;
	do {
		int choice2;
		cout << "///1.加密   2.解码   3.退出/// 请选择：";
		cin >> choice2;
		//============================凯撒密码加密程序===============================
		if (choice2 == 1)
		{
			string m1;
			cout << "ok,请输入明文" << endl;
			cin.ignore();
			getline(cin, m1);

			int a1;
			cout << "请输入密钥" << endl;
			cin >> a1;

			cout << "加密结果为：";
			for (int i = 0;i < m1.length();i++)
			{

				int c = m1[i];
				if (c >= 'a' && c <= 'z')
				{
					c = c + a1;
					if (c > 'z')     c = c - 26;
				}
				else if (c >= 'A' && c >= 'Z')
				{
					c = c + a1;
					if (c > 'Z')     c = c - 26;
				}
				cout <<(char) c;

			}

		}
		//=============================凯撒密码解密程序======================================
		else if (choice2 == 2)
		{
			string m2;
			cout << "ok,请输入密文" << endl;
			cin.ignore();
			getline(cin, m2);

			int a2;
			cout << "请输入密钥" << endl;
			cin >> a2;

			cout << "解密结果为：" << endl;
			for (int i = 0;i < m2.length();i++)
			{
				int d = m2[i];
				if (d >= 'a' && d <= 'z')
				{
					d = d - a2;
					if (d < 'a')  d = d + 26;
				}
				else if (d >= 'A' && d <= 'Z')
				{
					d = d - a2;
					if (d < 'A')  d = d + 26;
				}

				cout << (char)d;

			}
		}
		else if (choice2 == 3)
		{
			cout << "感谢使用" << endl;
			break;
		}
	} while (i <= 10);

	system("pause");
	return 0;


}
