#include "testDtree.h"
#include "dtreeTrain.h"
#include "dtreeDecision.h"
int main(void)
{
    dtreeTrain train;
    train.setTrainDataPath("/home/yh/train.txt");
    train.setTreeName("firsttree");
    train.train();
    dtreeDecision decision;
    decision.setModelFile(  "/home/yh/CLionProjects/decision_tree/cmake-build-debug/firsttree.xml");
    float a[TRAIN_COLUMN] = {1,1,8,2,3,0.85,60,5000,20,6};
    decision.setData(a);
    int result = decision.decision();
    //int aaaa =TestDtree();

    return  0;
}