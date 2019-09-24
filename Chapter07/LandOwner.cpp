//
// Created by 沙韬伟 on 2019-09-24.
//

#include "LandOwner.h"

LandOwner::LandOwner() {
    name = "jack";
    score = 88;
    // 初始化cards数组为0
    memset(cards, 0, sizeof(cards));

    for (int i = 0; i < sizeof(cards) / sizeof(cards[0]); ++i) {
        cout << cards[i];
    }
    cout << endl;
}

LandOwner::~LandOwner() {

}

const string &LandOwner::getName() const {
    return name;
}

void LandOwner::setName(const string &name) {
    LandOwner::name = name;
}

const int *LandOwner::getCards() const {
    return cards;
}

long LandOwner::getScore() const {
    return score;
}

void LandOwner::setScore(long score) {
    if (score < 0) {
        LandOwner::score = 0;
    } else {
        LandOwner::score = score;
    }
}

void LandOwner::showScore() {
    cout << "your score is " << LandOwner::getScore() << endl;
}