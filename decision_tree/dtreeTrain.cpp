//
// Created by yh on 17-9-4.
//

#include "dtreeTrain.h"
dtreeTrain::dtreeTrain()
{
    creatDtree();
    treeName_ = "tree";
}
dtreeTrain::~dtreeTrain()
{


}
void dtreeTrain::setTrainDataPath(const std::string &filename)
{
    this->filename_ = filename;
}

bool dtreeTrain::loadTrainData()
{
    trainfile_.open(filename_);//打开1.txt只读文件
    if (!trainfile_.is_open())
    {
        std::cout<<"文件打开失败！"<<std::endl;
        exit(0);
        return false;
    }
    else
    {
        std::cout << "load data success!" << std::endl;
        return true;
    }
}

void dtreeTrain::creatDtree(void)
{
    float priors[]={1,1};
    CvDTreeParams params( 15, // max depth
                          1, // min sample count
                          0, // regression accuracy: N/A here
                          true, // compute surrogate split, as we have missing data
                          15, // max number of categories (use sub-optimal algorithm for larger numbers)
                          0, // the number of cross-validation folds
                          true, // use 1SE rule => smaller tree
                          true, // throw away the pruned tree branches
                          priors // the array of priors, the bigger p_weight, the more attention  to the poisonous mushrooms
                          //(a mushroom will be judjed to be poisonous with bigger chance)
    );
    params_ = params;
    tree_ = new CvDTree;
}

void dtreeTrain::trainOnce(const cv::Mat &data,const cv::Mat &labels)//训练一次的函数
{
    //按照行开始训练，格式都是cv：：mat的格式
    tree_->train (data,
                  CV_ROW_SAMPLE,
                  labels,
                  cv::Mat(),
                  cv::Mat(),
                  cv::Mat(),
                  cv::Mat(),
                  params_);
}
void dtreeTrain::train()
{
    if(loadTrainData()) {
        int count = 0;
        std::string s;
        while (getline(trainfile_, s))//读取一行文件,一行训练一次
        {
            count++;
            std::cout << "加载第" << count << "个对局" << std::endl;
            OriginData oneRound(s);//处理一行的字符串
            float data[TRAIN_COLUMN];
            for (int i = 0; i < TRAIN_COLUMN; ++i) {
                data[i] = oneRound.feature_[i];
                std::cout << data[i] << " ";
            }
            cv::Mat oneData(TRAIN_ROW, TRAIN_COLUMN, CV_32F, data);//数据
            cv::Mat label(LABEL_ROW, LABEL_COLUMN, CV_32F, oneRound.feature_[TRAIN_COLUMN+LABEL_COLUMN-1]);//最后一个是标签
            std::cout << "开始训练第" << count << "个对局..." << std::endl;
            trainOnce(oneData, label);
        }
        trainfile_.close();
        saveModel();
    }

}

void dtreeTrain::setLabeData(const std::string &filename)
{
}

void dtreeTrain::saveModel()
{
    //save the model
    std::string xmlName=".xml";
    tree_->save ((treeName_+xmlName).c_str(),treeName_.c_str());
}
void dtreeTrain::setTreeName(std::string treeName)
{
    this->treeName_ = treeName;
}
