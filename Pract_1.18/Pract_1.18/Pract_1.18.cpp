// Pract_1.18.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

#include <iostream>

int main()
{
	//currVal是我们正在统计的数；我们将读入的新值存入val
	int currVal = 0, val = 0;
	//读取第一个数，并确保确实有数据可以处理
	if (std::cin >> currVal) {
		int cnt = 1;  //保存我们正在处理的当前值的个数
		while (std::cin >> val) {  //读取制余的数
			if (val == currVal)  //如果值相同
				++cnt;  //将cnt加1
			else {  //否则，打印前一个值的个数
				std::cout << currVal << "occurs"
					<< cnt << "times" << std::endl;
				currVal = val;  //记住新值
				cnt = 1;  //重置计数器
			}
		}//whi1e循环在这里结来
		//记住打印文件中最后一个值的个数
			std::cout << currVal << "occurs"
			<< cnt << "times" << std::endl;
	}//最外层的1f语句在这里结来
		return 0;
}

// 运行程序: Ctrl + F5 或调试 >“开始执行(不调试)”菜单
// 调试程序: F5 或调试 >“开始调试”菜单

// 入门使用技巧: 
//   1. 使用解决方案资源管理器窗口添加/管理文件
//   2. 使用团队资源管理器窗口连接到源代码管理
//   3. 使用输出窗口查看生成输出和其他消息
//   4. 使用错误列表窗口查看错误
//   5. 转到“项目”>“添加新项”以创建新的代码文件，或转到“项目”>“添加现有项”以将现有代码文件添加到项目
//   6. 将来，若要再次打开此项目，请转到“文件”>“打开”>“项目”并选择 .sln 文件
