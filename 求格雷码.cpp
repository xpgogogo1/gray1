#include<iostream>
#include<vector>
using namespace std;
void generategray(int n, vector<string>&gray)
{
	if (n == 1)
	{
		gray.push_back("0");
		gray.push_back("1");
	
	}
	generategray(n - 1, gray);
	int size = gray.size();//����n-1λGary���λ��
	vector<string>temp = gray;
	//ǰ�벿�֣���n-1λ��ÿ��gray��ǰ�涼���ӡ�0��������Ϊnλ
	for (int i = 0; i < size; i++)
	{
		gray[i] = "0" + gray[i];
	}
	// ��벿�֣�������� n - 1 λ�� Gray �룬ÿ��ǰ�� '1'
	for (int i = size - 1; i >= 0; i--)
	{
		gray.push_back("1" + temp[i]);
	}
}
int main()
{
	int n;
	cin >> n;//����Ҫ���ɵ�gray��λ��n
	vector<string>graycode;//�洢���ɵĸ�����
	generategray(n, graycode);
	for (const auto& code : graycode)
	{
		cout << code << endl;
	}


}