//
// Created by 沙韬伟 on 2019-09-24.
//

#ifndef CHAPTER07_LANDOWNERS_H
#define CHAPTER07_LANDOWNERS_H

#include "iostream"
#include <vector>

using namespace std;

class LandOwners {
private:
    string name;
    string sex;
    int golden;
    long Exp;
    vector<int> packCards;//默认的牌库1-54
    vector<int> suplusCards;//摸牌后剩余的牌
    vector<int> currentCards;//手牌
    bool isContains(int); //剩余牌中，是否包含cardNum这张牌
    void deleteCard(vector<int> &, int);//删除集合中的数字

    string getColor(int);//获得牌的花色
    string getValue(int);//获得牌面



public:
    virtual ~LandOwners();

public:
    LandOwners(const string &name, const string &sex, int golden, long exp);

    LandOwners(int golden, long exp);

    LandOwners(const string &name);

    LandOwners();

public:
    const string &getName() const;

    void setName(const string &name);

    const string &getSex() const;

    void setSex(const string &sex);

    int getGolden() const;

    void setGolden(int golden);

    long getExp() const;

    void setExp(long exp);

    void showInfo();

    void initCards();//初始化packCards、suplusCards、currentCards

    void showCards(const vector<int> &);

    void showCards1(const vector<int> &);

    void showCards2(const vector<int> &);

    void showCards3(const vector<int> &);

    void touchCard(int);//摸牌
};


#endif //CHAPTER07_LANDOWNERS_H
