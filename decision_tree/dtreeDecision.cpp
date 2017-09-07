//
// Created by yh on 17-9-6.
//
#include "dtreeDecision.h"
dtreeDecision::dtreeDecision()
{
    data_ = cv::Mat(TRAIN_ROW,TRAIN_COLUMN,CV_32F, cv::Scalar::all (0));
}
dtreeDecision::~dtreeDecision()
{
}

void dtreeDecision::setModelFile(std::string modelFile)
{
    this->modelFile_ = modelFile;
}
void dtreeDecision::creatDtree()
{
    tree_ = new CvDTree;
    tree_->load("firsttree.xml","firsttree");

    const CvDTreeNode *a = tree_->get_root();
    if(a==NULL)
    {
        std::cout<<"加载已有的模型文件错误！！！"<<std::endl;
        exit(0);
    } else
    {
        std::cout<<"加载已有的模型文件"<<modelFile_<<"成功"<<std::endl;
    }

}
void dtreeDecision::setData(float a[TRAIN_COLUMN])
{
    for(int i = 0;i < TRAIN_COLUMN;++i)
    {
        float m=a[i];
        std::cout<<m;
        data_.at<float>(0,i) = a[i];
    }
}

float dtreeDecision::decision()
{
    creatDtree();
    std::cout<<"输入的信息为：";
    for(int i = 0;i < TRAIN_COLUMN;++i)
    {
     std::cout<<data_.at<float>(0,i)<<" ";
    }
    std::cout<<std::endl;
    const CvDTreeNode *a = tree_->get_root();
    float resultKind = tree_->predict(data_,cv::Mat())->value;
    return resultKind;

}

