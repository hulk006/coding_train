#include <opencv/cv.h>
#include <opencv/highgui.h>
#include "opencv2/core/core_c.h"
#include "opencv2/ml/ml.hpp"
#include <algorithm>
#include <iostream>

int  TestDtree()
{
    //init data
    float fdata[5][2] = {{1,1},{1,1},{1,0},{0,1},{0,1}};
    cv::Mat data(5,2,CV_32F,fdata);//数据
    float fresponses[5] ={1,1,0,0,0};
    cv::Mat responses(5,1,CV_32F,fresponses);//标签
    float priors[]={1,1};
    CvDTree *tree;
    CvDTreeParams params( 8, // max depth
                          1, // min sample count
                          0, // regression accuracy: N/A here
                          true, // compute surrogate split, as we have missing data
                          15, // max number of categories (use sub-optimal algorithm for larger numbers)
                          0, // the number of cross-validation folds
                          true, // use 1SE rule => smaller tree
                          true, // throw away the pruned tree branches
                          priors // the array of priors, the bigger p_weight, the more attention
                          // to the poisonous mushrooms
                          // (a mushroom will be judjed to be poisonous with bigger chance)
    );
    tree = new CvDTree;
    tree->train (data,CV_ROW_SAMPLE,responses,cv::Mat(),
                 cv::Mat(),cv::Mat(),cv::Mat(),
                 params);//按照行开始训练，格式都是cv：：mat的格式
    //save tree in the xml file
    tree->save ("tree.xml","test_tree");


    std::cout << "======TEST====="<<std::endl;
    CvDTree  *dtree2;
    dtree2 = new CvDTree;
    dtree2->load("tree.xml","test_tree");
    const CvDTreeNode *root = dtree2->get_root();
    int a[1][2]={1,0};
    cv::Mat sample1(1,2,CV_32F,a);

    //sample1.at<int>(0,0) = 1;
    //sample1.at<int>(0,1) = 1;
    std::cout <<"查看："<<sample1.at<int>(0,0);
    float resultKind = dtree2->predict(sample1,cv::Mat())->value;
    std::cout <<"决策输入："<<sample1<<std::endl;
    std::cout <<"决策输入："<<sample1.at<int>(0,0)<<" "<<sample1.at<int>(0,1)<<"决策输出："<<resultKind<<std::endl;
    return 0;

}
