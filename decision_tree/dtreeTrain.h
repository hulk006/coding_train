//
// Created by yh on 17-9-4.
//

#ifndef DECISION_TREE_DTREETRAIN_H
#define DECISION_TREE_DTREETRAIN_H

#include <iostream>
#include <fstream>
#include <string>
#include <ml.h>

#include "OriginData.h"

#define TRAIN_ROW 1
#define TRAIN_COLUMN 10
#define LABEL_ROW 1
#define LABEL_COLUMN 1

class dtreeTrain
{
public:
     dtreeTrain();
     ~dtreeTrain();
    void setTrainDataPath(const std::string &filename);//设置训练数据的路径
    void train();
    void saveModel();
    void setLabeData(const std::string &filename);
    void setTreeName(std::string treeName);


private:
    std::string filename_;
    std::string treeName_;
    std::ifstream trainfile_;
    CvDTree *tree_;
    CvDTreeParams params_;
    cv::Mat trainData_;
    cv::Mat labelData_;
    void trainOnce(const cv::Mat &data,const cv::Mat &labels);//训练一次的函数
    bool loadTrainData();
    void creatDtree();



};





#endif //DECISION_TREE_DTREETRAIN_H
