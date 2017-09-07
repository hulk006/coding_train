//
// Created by yh on 17-9-5.
//

#ifndef DECISION_TREE_ORIGINDATA_H
#define DECISION_TREE_ORIGINDATA_H
#include <string>
#include <cstring>
#include "tools.h"
#include <iostream>
//从本地读取数据10维特征，本来有手牌和公牌的但是把他计算成胜率，当做以维特征
class OriginData {
public:
    OriginData(const std::string &originData);
    ~OriginData();
    std::vector<std::string> out_;
    float feature_[11];
    int roundName_;//1代表preflop,2代表postflop，3代表其他轮
    int whichRound_;//代表roundName_的第几轮
    int playersNUM_;//当前轮的玩家数
    int callNum_;//上一轮中跟注的玩家数，check 也算跟注
    int raiseNum_;//上一轮中加注的玩家数
    float HSInTwo_;//如果只有两个玩家手牌的强度
    int highestBet_;
    int chip_;//自己的剩余筹码
    int blind_;//大盲
    int rank_;//自己在游戏中的排名（1~8）
    int label_;//标签0代表弃牌，1代表跟住，2代表加注
};

#endif //DECISION_TREE_ORIGINDATA_H
