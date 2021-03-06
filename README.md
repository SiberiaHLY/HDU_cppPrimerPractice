# 此项目为C++面向对象程序设计课程作业

### Chapter2:

​	2.23:不能，如果指针不被初始化为NULL，那么它可能会随机指向一个地址，就无法判断它指的到底是不是一个合法的对象了

​	2.24:void\*是一种特殊的指针类型，可以存放任意对象的地址。因为p是void\*类型指针，而i为int型，所以是合法的，但是lp是long型，指针需要类型严格相等，所以是非法的

​	2.25:

​		a)ip是int指针，i是int变量，r是i的引用

​		b)i是int变量，ip是int指针，且为空

​		c)ip是int指针，ip2是int变量

​	[2.35](https://github.com/SiberiaHLY/HDU_cppPrimerPractice/blob/master/src/chapter2/2_35.cpp):j是int变量，k是常量int引用，p是常量int指针，j2是常量int，k2是常量int引用

### Chapter3:

​	[3.4](https://github.com/SiberiaHLY/HDU_cppPrimerPractice/blob/master/src/chapter3/3_4.cpp):简单的string输入输出与size()方法的使用

​	[3.5](https://github.com/SiberiaHLY/HDU_cppPrimerPractice/blob/master/src/chapter3/3_5.cpp):简单的使用迭代器遍历

​	[3.20](https://github.com/SiberiaHLY/HDU_cppPrimerPractice/blob/master/src/chapter3/3_20.cpp):简单的使用迭代器遍历

### Chapter6:

​	[6.10](https://github.com/SiberiaHLY/HDU_cppPrimerPractice/blob/master/src/chapter6/6_10.cpp):编写使用指针形参的函数：交换两个整数

​	6.19:

​		a)函数只有一个参数，传入两个，所以不合法

​		b)合法

​		c)合法

​		d)合法

​	6.39:

​		a)顶层const不影响传入的对象，所以第二个函数和第一个函数是等价的

​		b)函数重载需要传入的参数不一样，函数返回值不一样不能重载

​		c)合法

### Chapter7:

​	7.16:没有限定;构造函数和部分成员函数紧跟在public说明符后而数据成员和作为实现部分的函数跟在private说明符后

​	[7.27](https://github.com/SiberiaHLY/HDU_cppPrimerPractice/blob/master/src/chapter7/7_27.cpp):我将类的声明，定义与main函数分开。在类的声明中声明了Screen的基本属性、构造函数以及题目需求的三个函数，在main函数中编写题目所给的代码，并且在控制台中打印出如下字符串

![](https://raw.githubusercontent.com/SiberiaHLY/HDU_cppPrimerPractice/master/src/chapter7/picture1.png)

​	7.49:

​		a)合法

​		b)Sales_data&不能转换成Sales_data

​		c)同上同理

​	7.58:类的静态成员不应该在类的内部初始化，所以类内部的rate与vec是错误的。最后两行中，需要给rate与vec初始值

### Chapter9:

​	9.1:

​		a)list里的内容是离散的，所以进行插入操作比较方便，故选list

​		b)将新单词插入末尾，删除头部，显然是队列的操作，故选deque

​		c)vector适合高效的访问，用于排序比list和deque合适

​	[9.20](https://github.com/SiberiaHLY/HDU_cppPrimerPractice/blob/master/src/chapter9/9_20.cpp)：遍历list，判断奇偶性，加入队列中

​	9.29：vec.resize(100)会把vec的空间扩展到100大小，也就是在vec末尾添加75个元素。vec.resize(10)会只留下前十个元素

​	[9.43](https://github.com/SiberiaHLY/HDU_cppPrimerPractice/blob/master/src/chapter9/9_43.cpp)：遍历字符串，检查老字符串中是否有与oldval相同的子串，如果有的话就需替换

​	9.52：

### Chapter10：

​	[10.3](https://github.com/SiberiaHLY/HDU_cppPrimerPractice/blob/master/src/chapter10/10_3.cpp)：输入直至文件结束，使用accumulate求和

​	[10.15](https://github.com/SiberiaHLY/HDU_cppPrimerPractice/blob/master/src/chapter10/10_15.cpp)：简单的使用lambda进行加法

​	[10.34](https://github.com/SiberiaHLY/HDU_cppPrimerPractice/blob/master/src/chapter10/10_34.cpp)：使用迭代器逆向输出vector内的值

​	[10.42](https://github.com/SiberiaHLY/HDU_cppPrimerPractice/blob/master/src/chapter10/10_42.cpp)：list去重，先用sort按字典序进行排序，然后使用unique去重

### Chapter11：

​	[11.12](https://github.com/SiberiaHLY/HDU_cppPrimerPractice/blob/master/src/chapter11/11_12.cpp)：使用pair的first与second

​	11.17：将vector中的元素复制到set是非法的，而将ser中的元素复制到vector是合法的，所以前两个是合法的，后两个是非法的。

​	[11.38](https://github.com/SiberiaHLY/HDU_cppPrimerPractice/blob/master/src/chapter11/11_38.cpp)：使用map建立映射来统计单词出现的数量

### Chapter13：

​	13.12：首先，函数结束时，item1和item2的析构函数被调用，之后，参数accum的生命周期也结束，又会被调用一次，所以一共有3次

​	[13.18](https://github.com/SiberiaHLY/HDU_cppPrimerPractice/blob/master/src/chapter13/13_18.cpp)：编写拷贝构造函数

​	13.46：左值可以获取到地址，而右值不能。r1是右值引用，f返回值是右值，r2是左值引用，因为下标返回的是左值，r3是左值引用，因为r1是变量，为左值，r4是右值引用，因为算术表达式为右值。	

​	13.49：

​	13.58：

### Chapter14：

​	14.3：

​		a)使用了c++语言内置的运算符

​		b)使用了string重载的版本

​		c)使用了vector重载的版本

​		d)使用了string重载的版本

​	14.20：

​	14.38：

​	14.52：

### Chapter15：

​	15.12：有必要，因为override来说明子类中的虚函数，final是不允许后续的子类来覆盖它。

​	15.16：

​	15.30：