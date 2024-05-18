// Pract_1.23.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
// 练习1.23： 编写程序，读取多条销售记录，并统计每个ISBN（每本书）有几条销售记录。
// 
// 思路：
//   1.读取多条销售记录：Pract_1.22循环结构；
//   2.统计每个ISBN的销售记录：
//       设置检查对象和计数；
//       检查对象是否具有相同ISBN然后相加；
//       相同；不同；其他情况；
//

#include <iostream>
#include "Sales_item.h"

int main()
{
    Sales_item origin, check;
    int count = 1;
    std::cout << "请输入若干销售记录：\nTips：用Ctrl+Z表示输入结束。" << std::endl;
    //读入ISBN号、售出的册数以及销售价格
    if (std::cin >> origin) {
        while (std::cin >> check) {
            if (compareIsbn(origin, check) == 1) {//same ISBN
                count++;
            }
            else if (compareIsbn(origin, check) == 0) {//different ISBN
                std::cout << "书籍号" << origin.isbn() << "有" << count << "条记录" << std::endl;
                origin = check;
                count = 1;
            }
        }
        std::cout << "书籍号" << origin.isbn() << "有" << count << "条记录" << std::endl;//print lastest ISBN
    }
    else {
        std::cout << "没有数据" << std::endl;//input error
    }
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
