# 说明
记录个人学习过程；

参考PrimerC++第五版及配套习题解答；使用Visual Studio 2022；

VS如何创建git仓库：https://learn.microsoft.com/zh-cn/visualstudio/version-control/git-create-repository?view=vs-2022#create-a-github-repo

readme文档基本撰写和格式语法：https://docs.github.com/zh/get-started/writing-on-github/getting-started-with-writing-and-formatting-on-github/basic-writing-and-formatting-syntax

另外一种学习之路：Microsoft C++、C 和汇编程序文档：https://learn.microsoft.com/zh-cn/cpp/?view=msvc-170

--

进度：练习1.3未开始/全19章；2024.3.24；

待办：

1.；

待续；

# 第一章

## 1.1节练习

练习1.1： 查阅你使用的编译器的文档，确定它所使用的命名约定。编译并运行第2页的main程序。

【解答】

参考：

演练：在命令行上编译本机 C++ 程序：https://learn.microsoft.com/zh-cn/cpp/build/walkthrough-compiling-a-native-cpp-program-on-the-command-line?view=msvc-170

Windows 用户需要知道的 CMD 常用命令总结：https://zhuanlan.zhihu.com/p/67513308

--

打开“开发人员命令提示”；

切换目录，进入指定文件夹（自己专门存放代码的文件夹）；

在命令提示窗口中输入 notepad test.cpp。编写代码保存；

输入编译程序命令；

输入运行程序命令；

--

练习1.2： 改写程序，让它返回-1。返回值-1通常被当作程序错误 的标识。重新编译并运行你的程序，观察你的系统如何处理main返回
的错误标识。

【解答】

直观上，返回-1的程序与返回0的程序在执行效果上并无不同。但环境变量 ERRORLEVEL记录了上一个程序的返回值。因此，在控制台窗口执行
修改后的程序，接着执行echo %ERRORLEVEL%，会输出-1。

--

问题与解决：

把命令‘cl’中的L看成1导致出错；

## 1.2节练习

注意点：

1.写入endl（也即缓冲刷新操作）；

缓冲刷新操作可以保证到目前为止程序所产生的所有输出都真正写入输出流中，而不是仅停留在内存中等待写入流。

在调试时若添加打印语句，应该保证“一直”刷新流；

2.使用std::cout和std::endl而不是直接的cout和endl；

也即通过命名空间使用标准库；

命名空间可以帮助我们避免不经意的名字定义冲突，以及使用库中相同名字导致的冲突。标准库定义的所有名字都在命名空间std中。

练习1.3：

【解答】

在VS新建控制台项目，默认模板就是打印hello world；

练习1.4：

【解答】
