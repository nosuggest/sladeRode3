//
// Created by Administrator on 2019/9/22.
//

#ifndef CHAPTER06_CASE03_H
#define CHAPTER06_CASE03_H


class case03 {
    int &sum() {
        int num = 10;
        int &rnum = num;
        return rnum;
    }
};


#endif //CHAPTER06_CASE03_H
