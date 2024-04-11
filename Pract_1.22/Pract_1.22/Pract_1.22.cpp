// Pract_1.22.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

#include <iostream>
#include "Sales_item.h"

int main()
{
    Sales_item bookori, book1, bookall;
    std::cout << "请输入几条ISBN相同的销售记录：" << std::endl;
    if (std::cin >> bookori) {
        bookall = bookori;
        while (std::cin >> book1) {
            if (compareIsbn(bookori, book1)) { //ISBN相同
                bookall += book1;
            }
            else { //ISBN不同
                std::cout << "输入的销售记录ISBN不同。\n" << "保存的销售记录为：" << bookall << std::endl;
                return -1;
            }
        }
        std::cout << "保存的销售记录为：" << bookall << std::endl;
    }
    else { //意料之外的输入or其他情况
        std::cout << "没有销售记录。" << std::endl;
        return -1;
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
