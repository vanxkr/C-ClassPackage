// diskOperation.h
/* *****************************************
 * 磁盘操作基类: DiskOperation
 * 功能:
 * 1. 数据段
 *   1. name
 * 2. 函数
 *   1. 新建
 *   2. 复制
 *   3. 移动
 *   4. 删除
 * -----------------------------------------
 * Version: 1.0
 * Author : xyx9436
 * Date   : 2015-7-20 20:59:42
 * *****************************************/
#pragma once

#include <string>

using namespace std;

class DiskOperation {
public:
    DiskOperation();
    virtual ~DiskOperation();

    virtual bool showInfo();
    virtual bool renameOperation();
    virtual bool newOperation();
    virtual bool copyOperation();
    virtual bool moveOperation();
    virtual bool deleteOperation();

protected:
private:
    string name;
    string path;
};
