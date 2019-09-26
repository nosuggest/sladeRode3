//
// Created by 沙韬伟 on 2019-09-25.
//

#ifndef CHAPTER08_INTEGER_H
#define CHAPTER08_INTEGER_H


class Integer {
private:
    int m_value;
public:
    Integer();

    Integer(int mValue);

    // 重载+运算符
    Integer operator+(Integer other);
    // 友元函数重载
    friend const Integer operator+(int intValue, const Integer &other);

    int intValue() {
        return m_value;
    };

    virtual ~Integer();
};


#endif //CHAPTER08_INTEGER_H
