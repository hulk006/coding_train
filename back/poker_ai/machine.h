//
// Created by yh on 17-6-22.
//

#ifndef POKER_AI_MACHINE_H
#define POKER_AI_MACHINE_H

#include "card.h"
#include <string>

//建立一个模拟的发牌机器用来仿真和发牌
class Machine
{
public:
    Machine();
    ~Machine();
    Cards cards_;//52张牌
    int top_index_;//当前牌顶
    bool initilized_;//是否初始化

    void init();//
    void shuffleCards();//洗牌
    Card dealCard();//发一张牌
    void swapCard(int i,int j);
    void showCards();

};




#endif //POKER_AI_MACHINE_H
