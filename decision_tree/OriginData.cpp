//
// Created by yh on 17-9-5.
//

#include "OriginData.h"
OriginData::OriginData(const std::string &originData)
{
    splitString(originData,"\t",out_);
    for(int i=0;i<11;++i)
    {
        feature_[i] = atof(out_[i].c_str());
    }
    roundName_  = atoi(out_[0].c_str());
    whichRound_ = atoi(out_[1].c_str());
    playersNUM_ = atoi(out_[2].c_str());
    callNum_    = atoi(out_[3].c_str());
    raiseNum_   = atoi(out_[4].c_str());
    HSInTwo_    = atof(out_[5].c_str());
    highestBet_ = atoi(out_[6].c_str());
    chip_       = atoi(out_[7].c_str());
    blind_      = atoi(out_[8].c_str());
    rank_       = atoi(out_[9].c_str());
    label_      = atoi(out_[10].c_str());

}


OriginData::~OriginData()
{
}
