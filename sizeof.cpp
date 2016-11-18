#include<iostream>

 // sizeof 是运算符，不是函数，在编译时就计算好，用于计算数据空间的字节数
 // 1. sizeof 不能用来返回动态分配的内存空间的大小
 // 2. sizeof 常用于返回类型和静态分配的对象，结构或者数组所占用的空间
 // 3. sizeof 返回值跟对象，结构，数组所存储的内容没有关系

 // strlen() 是函数，在运行时才能计算，参数必须是字符型指针（char*），且必须是以\0结尾的

class Point {
    int a, b;
    int func();
};

int func1() {
    return 0;
}

char func2() {
    return 'a';
}

int main() {
    // array
    char a[10] = "hello";
    std::cout << sizeof a << std::endl;   // 10  参数为数组返回编译时分配的数组空间大小
    std::cout << strlen(a) << std::endl;

    // pointer
    char *str = a;
    std::cout << sizeof str << std::endl; // 4  参数为指针返回存储该指针所用的空间大小

    // base type or variable
    int b = 12;
    std::cout << sizeof b << std::endl;
    std::cout << sizeof(int) << std::endl;  // 4 参数为类型或者该类型的变量返回该类型所占空间的大小

    // object
    Point p;
    std::cout << sizeof p << std::endl;   // 8 参数为对象返回值为该对象实际占用空间大小

    // function
    //std::cout << sizeof(func1) << std::endl; // error invalid application of 'sizeof' to a function type
    //std::cout << sizeof(func2) << std::endl;

    return 0;
}
