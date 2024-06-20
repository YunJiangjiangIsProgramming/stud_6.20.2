#define _CRT_SECURE_NO_WARNINGS 1

#include<iostream>

using namespace std;
//����ĳ��ĳ��ĳ������һ��ڼ���
int main()
{
	static int monthDays[13] = { 0,31,28, };
	int year, month, day;

	while (cin >> year >> month >> day)//����������ctrl��c
	{
		int n = 0;
		for (int i = 1; i < month; ++i)
		{
			n += monthDays[i];
		}
		n += day;
		if (month > 2 && ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0)))
		{
			day += 1;
		}
		cout << n << endl;
	}
return 0;

}


int main(){
	int year, month, day;
	cin >> year >> month >> day;
	// 2012 12 31
	int monthDays1_N[13] = { 0, 31, 59, 90, 120, 151, 181, 212, 243, 273, 304, 334, 365 };
	// [1,month-1]

	int n = monthDays1_N[month - 1] + day;

	if (month > 2 && ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0)))
		n += 1;

	cout << n << endl;

	return 0;
}

int main()
{
	// ��������
	// ���malloc/free�������÷�������û����������
	int* p1 = new int;
	delete p1;

	int* p2 = new int(0);
	delete p2;

	int* p3 = new int[10];
	delete[] p3;

	int* p4 = new int[10]{1,2,3,4};
	delete[] p4;

	return 0;
}


class A
{
public:
	A(int a = 0)
		: _a(a)
	{
		cout << "A():" << this << endl;
	}

	~A()
	{
		cout << "~A():" << this << endl;
	}

private:
	int _a;
};

struct ListNode
{
	ListNode* _next;
	int _val;

	ListNode(int val = 0)
		:_next(nullptr)
		, _val(val)
	{}
};


int main()
{
	// �Զ�������
	// new��delete���malloc�����˿ռ����������ù��캯������������
	A* p1 = new A;
	A* p2 = (A*)malloc(sizeof(A));

	delete p1;
	free(p2);

	ListNode* n1 = new ListNode(1);
	ListNode* n2 = new ListNode(2);
	ListNode* n3 = new ListNode(3);
	ListNode* n4 = new ListNode(4);
	n1->_next = n2;
	//...

	return 0;
}


int main()
{
	// һ��Ҫƥ��ʹ�ã�������ܻ���ָ������
	//A* p3 = new A[10];
	//delete p3;

	A* p4 = new A;
	delete[] p4;

	return 0;
}

void Test()
{
	while (1)
	{
		/* newʧ�� ���쳣 -- ����Ҫ��鷵��ֵ*/
		char* p1 = new char[1024 * 1024 * 1024];
		char* p1 = (char*)operator new(1024 * 1024 * 1024);
		cout << (void*)p1 << endl;
	}
}

int main()
{
	while (1)
	{
		// mallocʧ�� ���ؿ�ָ��
		int* p1 = (int*)malloc(1024*100);
		if (p1)
		{
			cout << p1 << endl;
		}
		else
		{
			cout << "����ʧ��" << endl;
			break;
		}
	}

	try
	{
		Test();	
	}
	catch (exception& e)
	{
		cout << e.what() << endl;
	}

	A* p1 = new A[10];
	delete[] p1;

	free(p1);

	return 0;
}

int main()
{
	int* p1 = (int*)malloc(sizeof(int));
	int* p2 = new int;

	int* p3 = (int*)malloc(sizeof(int) * 10);
	int* p4 = new int[10];

	A* p5 = (A*)malloc(sizeof(A));

	A* p6 = new A;

	free(p5);

	delete(p6);

	return 0;
}

