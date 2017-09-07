/*
 *
对于一个链表，请设计一个时间复杂度为O(n),额外空间复杂度为O(1)的算法，判断其是否为回文结构。
给定一个链表的头指针A，请返回一个bool值，代表其是否为回文结构。保证链表长度小于等于900。
测试样例：
1->2->2->1
返回：true
 */
//回文对称结构
/*
思路1：空间O(n) 整个链表遍历两边， 开一个栈，第一遍遍历把链表中每个元素push进栈中，
这样堆中的元素的pop顺序就是链表的倒序输出；第二遍就开始pop栈中数据，每pop一个数据，
就把这个数据跟链表中进行对比，如果相同继续往下走，如果不同返回false。

思路2：空间O(1)，使用快慢指针法，第一步设置一个块指针和一个慢指针，快指针一次走两步，
慢指针一次走一步（慢），当快指针下一步为null的时候说明慢指针已经走了一半，这就可以找到中间节点。
第二步反转中间链表后面的指针，第三部从头尾向中间扫描，对比每个元素是否相等，如果都相等，则是回文数，否则不是回文数。
（下面网友易水给出了代码实现，这里不再叙述）
*/
#include <iostream>
struct ListNode {
    int val;
    struct ListNode *next;
    ListNode(int x) : val(x), next(NULL) {}
};

#include <iostream>
using  namespace std;

void createList(ListNode* &pHead,int a[])//这是一个取地址
{

    pHead  = new ListNode(a[0]);
    ListNode* p = pHead;//p指向phead p改变 phead也改变
    for(int i=1; i<18; i++)
    {
        ListNode* pNewNode=new ListNode(a[i]);
        pNewNode->next = NULL;
        p->next = pNewNode;
        p = pNewNode;
    }

}

bool chkPalindrome(ListNode* A) {
    // write code here
    ListNode *low = A;
    ListNode *fast = A;
    while (fast != NULL && fast->next!=NULL)
    {
        low = low->next;
        fast = fast->next->next;
    }
    //当循环截止时候 fast在尾部，low指向中间节点
    //反转后面的链表×××××××**********************************
    ListNode *nextMid = low->next;//中间节点
    low->next = NULL;//设置断裂

    ListNode *pre = NULL;//反转之后的表头
    ListNode *next = NULL;//指向后面
    //pre   nextMid  next（暂存）后移使用   反转nextmid和pre

    while (nextMid != NULL)
    {
        next = nextMid->next;//当前node的后面一个，暂存
        //交换
        nextMid->next = pre ;//反转nextmid和pre
        pre =nextMid ;//表头后移一个节点

        nextMid = next;//更新当前节点，当前节点后移一个
    }
   //当循环截止的时候  pre是表头

    //依次比较两链表
    while(A != NULL && pre != NULL)//从两边向中间比较是否相等
    {
        if(A->val != pre->val)
        {
            return false;
        }
        A = A->next;
        pre = pre->next;
    }
    return true;


}







int main()
{
    int val[18]={421,305,13,425,222,609,100,131,579,579,131,100,609,222,425,13,305,421};
    int len = sizeof(val);
    ListNode *HEAD=NULL;

    createList(HEAD,  val);



    bool a = chkPalindrome(HEAD);


    return 0;
}