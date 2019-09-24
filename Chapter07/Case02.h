//
// Created by 沙韬伟 on 2019-09-24.
//

#ifndef CHAPTER07_CASE02_H
#define CHAPTER07_CASE02_H


class Case02 {
private:
    string name;
    long score = 100;
    int cards[20];

public:
    virtual ~Case02() {};//析构函数申明
    Case02() {};//构造函数申明

    inline void TouchCard(int cardCount) { cout << "摸牌" << cardCount << "张！" << endl; };

    void ShowScore() { cout << "当前score:" << score << endl; };
};


#endif //CHAPTER07_CASE02_H
