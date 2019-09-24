//
// Created by 沙韬伟 on 2019-09-24.
//

#include "LandOwners.h"

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
}

LandOwners::LandOwners(const string &name) : name(name) {
    setGolden(100);
    setSex("保密");
    setExp(0);
    initCards();
}

LandOwners::LandOwners(int golden, long exp) : golden(golden), Exp(exp) {
    setName("Robbin");
    setSex("保密");
    initCards();
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

void LandOwners::showCards(const vector<int> &Cards) {
    for (int i = 0; i < Cards.size(); ++i) {
        cout << Cards[i] << "\t";
    }
    cout << endl;
}

void LandOwners::touchCard(int) {

}