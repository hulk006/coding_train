//
// Created by yh on 17-9-6.
//

#ifndef DECISION_TREE_DTREEDECISION_H
#define DECISION_TREE_DTREEDECISION_H

#include <ml.h>
#include "dtreeTrain.h"
class dtreeDecision
{
public:
     dtreeDecision();
    ~dtreeDecision();

    void setModelFile(std::string modelFile_);
    void creatDtree();
    void setData(float a[TRAIN_COLUMN]);
    float decision();

    cv::Mat data_;
    //cv::Mat responses(5,1,CV_32F,fresponses);//标签

private:
    std::string modelFile_;
    CvDTree *tree_;
    CvDTreeParams params_;

};





#endif //DECISION_TREE_DTREEDECISION_H
