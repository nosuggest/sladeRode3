//
// Created by Administrator on 2019/9/11.
//

void case10() {
    // 定义num的时候，给num分配了一个内存
    int num = 1024;
    // 定义了一个指针，用来存num变量的地址
    int *ptr_num;
    //把num的内存地址取出来，放到这个指针里面
    ptr_num = &num;

    cout << ptr_num << endl;//0x61ff08,ptr_num存放的是num的内存地址
}

void case11() {
    // 定义num的时候，给num分配了一个内存
    int num = 1024;
    // 定义了一个指针，用来存num变量的地址
    int *ptr_num;
    //把num的内存地址取出来，放到这个指针里面
    ptr_num = &num;
    cout << *ptr_num << endl;//1024,*ptr_num相当于通过ptr_num保存的地址找到对应的值
}

void case12() {
    char ch = 'a';
    char *ptr_ch = &ch;

    //char *表示的是string类型，所以这边其实表示的是name为"jack"字符串
    char *name = "jack";
    cout << name << endl;

    cout << ptr_ch << endl;//打印出来的是aa乱码，但是实际上应该是地址才对
    cout << (void *) ptr_ch << endl;//(void *),其中括号是强转，void *是任意类型
}