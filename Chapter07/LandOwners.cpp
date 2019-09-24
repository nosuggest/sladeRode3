//
// Created by 沙韬伟 on 2019-09-24.
//

#include "LandOwners.h"
#include <iterator>
#include <algorithm>
#include <cstdlib>
#include <ctime>

const string &LandOwners::getName() const {
    return name;
}

void LandOwners::setName(const string &name) {
    LandOwners::name = name;
}

const string &LandOwners::getSex() const {
    return sex;
}

void LandOwners::setSex(const string &sex) {
    LandOwners::sex = sex;
}

int LandOwners::getGolden() const {
    return golden;
}

void LandOwners::setGolden(int golden) {
    LandOwners::golden = golden;
}

long LandOwners::getExp() const {
    return Exp;
}

void LandOwners::setExp(long exp) {
    Exp = exp;
}

LandOwners::LandOwners(const string &name, const string &sex, int golden, long exp) : name(name), sex(sex),
                                                                                      golden(golden),
                                                                                      Exp(exp) {
    initCards();
    showCards(packCards);
}

LandOwners::~LandOwners() {
    cout << getName() << "\t" << "release" << endl;
}

LandOwners::LandOwners() {
    setName("Robbin");
    setGolden(100);
    setSex("保密");
    setExp(0);
    initCards();
    showCards3(packCards);
}

LandOwners::LandOwners(const string &name) : name(name) {
    setGolden(100);
    setSex("保密");
    setExp(0);
    initCards();
    showCards2(packCards);
}

LandOwners::LandOwners(int golden, long exp) : golden(golden), Exp(exp) {
    setName("Robbin");
    setSex("保密");
    initCards();
    showCards1(packCards);
}

void LandOwners::showInfo() {
    cout << getName() << "\t" << getSex() << "\t" << getGolden() << "\t" << getExp() << endl;
}

void LandOwners::initCards() {
    //生成默认的牌
    for (int i = 0; i < 54; ++i) {
        packCards.push_back(i + 1);
        suplusCards.push_back(i + 1);
    }

    //手牌清零
    currentCards.clear();
}

//循环
void LandOwners::showCards(const vector<int> &Cards) {
    for (int i = 0; i < Cards.size(); ++i) {
        cout << Cards[i] << "\t";
    }
    cout << endl;
}

//迭代器
void LandOwners::showCards1(const vector<int> &Cards) {
    for (auto iterator = Cards.begin(); iterator != Cards.end(); iterator++) {
        cout << *iterator << "\t";
    }
    cout << endl;
}

//for each
void LandOwners::showCards2(const vector<int> &Cards) {
    for (auto card:Cards) {
        cout << getColor(card) << getValue(card);
    }
    cout << endl;
}


void LandOwners::showCards3(const vector<int> &Cards) {
    copy(Cards.cbegin(), Cards.cend(), ostream_iterator<int>(cout, "\t"));
    cout << endl;
}

bool LandOwners::isContains(int cardNum) {
//    for (int i = 0; i < suplusCards.size(); ++i) {
//        if (cardNum == suplusCards[i]) {
//            return true;
//        }
//    }
//    return false;
//    算法查找
    auto iterator = find(suplusCards.begin(), suplusCards.end(), cardNum);
    return iterator != suplusCards.end();
}

void LandOwners::deleteCard(vector<int> &cardVec, int cardNum) {
//    for (auto iter = cardVec.begin(); iter != cardVec.end();) {
//        if (*iter == cardNum) {//如果找到,删除元素
//            iter = cardVec.erase(iter);//删除完，指向已删除后的下一个元素
//        } else {
//            ++iter;
//        }
//    }

    auto iter = find(cardVec.begin(), cardVec.end(), cardNum);
    if (iter != cardVec.end()) {
        cardVec.erase(iter);//erase删除的是位置iter
    }

}


void LandOwners::touchCard(int cardCount) {
    //随机生成一张牌到currentCards中
    srand(time(NULL));//种子

    for (int i = 0; i < cardCount; ++i) {
        int randIndex = rand() % 54;//0-53之间的随机数字
        //判断随机生成的牌是否在剩余牌中
        if (isContains(randIndex)) {
            currentCards.push_back(packCards[randIndex]);
            deleteCard(suplusCards, packCards[randIndex]);
        } else {
            i--;
        }
    }
    cout << "摸牌后,手牌：" << endl;
    showCards2(currentCards);
    cout << "摸牌后,牌库：" << endl;
    showCards2(suplusCards);
}

string LandOwners::getColor(int cardnum) {
    if (cardnum == 53) return "Jack_";
    if (cardnum == 54) return "Tony_";
    string colors[] = {"♠️", "♥️", "♦️", "♣️"};
    return colors[(cardnum - 1) / 13];
}

string LandOwners::getValue(int cardNum) {
    if (cardNum == 53) return "Black_Joker";
    if (cardNum == 54) return "Red_Joker";

    string values[] = {
            "A", "1", "2", "3", "4", "5", "6", "7", "8", "9", "10", "j", "q", "k"
    };
    return values[(cardNum - 1) % 13];
}