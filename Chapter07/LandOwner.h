//
// Created by 沙韬伟 on 2019-09-24.
//

#ifndef CHAPTER07_LANDOWNER_H
#define CHAPTER07_LANDOWNER_H

#include "iostream"

using namespace std;


class LandOwner {
private:
    string name;
    int cards[20];
    long score;
public:
    virtual ~LandOwner();

    LandOwner();

    void showScore();

    const string &getName() const;

    void setName(const string &name);

    const int *getCards() const;

    long getScore() const;

    void setScore(long score);
};


#endif //CHAPTER07_LANDOWNER_H
