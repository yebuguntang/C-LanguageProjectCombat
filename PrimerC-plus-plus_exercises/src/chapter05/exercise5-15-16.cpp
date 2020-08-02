/* exercise 5-15、5-16
** 练习5.15: 说明下列循环的含义并改正其中的错误。
** (a) for (int ix = 0; ix != sz; ++ix){ }
**     if (ix != sz)
**          // ...
** (b) int ix;
**     for (ix != sz; ++ix) {  }
** (c) for (int ix = 0; ix != sz; ++ix，++sz){ }
**
** 练习5.16: while循环特别适用于那种条件保持不变、反复执行操作的情况，
** 例如，当未达到文件末尾时不断读取下一个值。
** for循环则更像是在按步骤迭代，它的索引值在某个范围内依次变化。
** 根据每种循环的习惯用法各自编写段程序，然后分别用另一种循环改写。
** 如果只能使用一种循环，你倾向于使用哪种呢? 为什么?
** 
** 练习5.17: 假设有两个包含整数的vector对象,编写一段程序， 检验其中-一个vector对象是否是另一个的前缀。
** 为了实现这一目标，对于两个不等长的vector对象，只需挑出长度较短的那个，
** 把它的所有元素和另一个vector对象比较即可。
** 例如，如果两个vector对象的元素分别是0、1、1、2和0、1、1、2、3、5、8，则程序的返回结果应该为真。
**
*/

#include <iostream>
#include <vector>

int main()
{
    // solution 5-14
    std::string string_words, pre_word, max_repeat_word;
    unsigned count_repeat = 0, count_max_repeat = 0;
    std::cout << " Please enter the sequence of string : ";
    // 遍历读入的字符序列
    while (std::cin >> string_words)
    {
        if (string_words == pre_word)
        {
            ++count_repeat;
        }
        else
        {
            count_repeat = 1;
            pre_word = string_words;
        }

        // 统计最大次数单词
        if (count_max_repeat < count_repeat)
        {
            count_max_repeat = count_repeat;
            max_repeat_word = pre_word;
        }

    } // while end
      // 统计遍历后的最终结果
    if (count_max_repeat <= 1)
    {
        std::cout << "no word was repeated" << std::endl;
    }
    else
    {
        std::cout << "the word '" << max_repeat_word << "' occurred " << count_max_repeat << " times" << std::endl;
    }

    return 0;
}

/* 编译命令操作流程
** 0、打开终端 terminal，VSCode使用 Ctrl+shift+`; Ubuntu使用 Ctrl+Alt+T
** 1、进入当前源文件路径，cd src; cd chapter01
** 2、编译源代码文件，g++ --version; g++ -o exercise exercise5-15-16.cpp
** 3、运行生成的可执行程序，exercise; Ubuntu使用 ./exercise
** 4、输入一段文本，how now now now brown COw cow 测试程序
** 5、删除生成的可执行程序，rm -rf exercise.exe; Ubuntu使用 rm -rf exercise
*/
