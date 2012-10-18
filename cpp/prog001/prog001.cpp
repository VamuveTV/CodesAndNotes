
/************************************************************************/
/*  C++类内存布局
/************************************************************************/


#include <iostream>

using namespace std;

class Class{

};

int main()
{
	Class objClass;

	cout << "Size of object is= " << sizeof(objClass) << endl;

	cout <<	"Address of object is = " << &objClass << endl;

	return 0;
}

/************************************************************************/
/* 程序输出如下：
/* Size of object is= 1
/* Address of object is = 0034FEE3
/*
/* 如果我们为这个类添加数据成员，那类的大小就是其数据成员的和，
/* 这个规则对于类模板一样适用(见 prog002)。
/************************************************************************/
