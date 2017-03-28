﻿栈是一种特殊的线性表

栈仅能在线性表的一端进行操作
+ 栈顶（TOP）：允许操作的一端
+ 栈底（Bottom）：不允许操作的一端


Last In First Out

栈通常有两种实现方式
+ 顺序结构实现
+ 链式结构实现


Question:如何实现编译器中的符号成对检测

算法思路：
+ 从第一个字符开始扫描
+ 当遇见普通字符时忽略，当遇见左符号时压入栈中
+ 当遇见右符号时从栈中弹出栈顶符号
+ 进行匹配
+ 匹配成功：继续读入下一个字符
+ 匹配失败，立即停止，并报错
+ 结束
+ 成功：所有字符扫描完毕，且栈为空
+ 失败：匹配失败或所有字符扫描完毕但栈非空


**当需要检测成对出现但又互不相邻的事物时，可以使用栈的LIFO特性**

**栈非常适合于需要“就近匹配”的场合**


Question：
后缀表达式：将运算符放在数字后面的后缀表达式
后缀表达式符合计算机的“运算习惯”

如何将中缀表达式转换成后缀表达式？


算法思路：
+ 遍历中缀表达式中的数字和符号
+ 对于数字：直接输出
+ 对于符号：
+ 左括号：进栈
+ 符号：与栈顶符号进行优先级比较
+ 栈顶符号优先级低：进栈
+ 栈顶符号优先级不低：将栈顶符号弹出并输出，之后进栈
+ 右括号：将栈顶符号弹出并输出，直到匹配左括号
+ 遍历结束：将栈中的所有符号弹出并输出


Question：
计算机是如何基于后缀表达式计算的？

计算机对后缀表达式的运算是基于栈的

算法思路：
+ 遍历后缀表达式中的数字和符号
+ 对于数字：进栈
+ 对于符号
+ 从栈中弹出右操作数
+ 从栈中弹出左操作数
+ 根据符号进行运算
+ 将运算结果压入栈中
+ 遍历结束：栈中的唯一数字为计算结果

**中缀表达式的计算过程类似程序编译运行的过程**


Question:
顺序栈中将队尾定义为栈顶
链式栈中将队头定义为栈顶

顺序栈操作队头，链式栈操作队尾是否可行？






