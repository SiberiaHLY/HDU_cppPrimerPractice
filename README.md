# 此仓库仅为完成C++面向对象程序设计而设立

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

