//fileOperation.h
/* *****************************************
 * 文件操作封装类: fileoperation
 * 功能:
 * 1. 显示文件属性
 * 2. 新建文本文件
 * 3. 重命名文件
 * 4. 文件拷贝
 * 5. 文件移动
 * 6. 文件删除
 * -----------------------------------------
 * Version: 1.0
 * Author : xyx9436
 * Date   : 2015-7-20 20:36:20
 * *****************************************/

#pragma once

#include <string>
#include "diskOperation.h"

class FileOperation: public DiskOperation {
public:
    FileOperation();
    FileOperation(string pathOrName);
    FileOperation(string path, string name);
    ~FileOperation();

protected:
private:
    string fileType;
    string sizeUnit;
    double fileSize;

    bool getType(void);
    bool getSize(void);
    bool getPath(void);
};
