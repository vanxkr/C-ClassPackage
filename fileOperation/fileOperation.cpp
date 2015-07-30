#include "fileOperation.h"
FileOperation::FileOperation() {

}

FileOperation::FileOperation(string name) {
    this->name = name;
    getPath();
    getType();
    getSize();
}

FileOperation::FileOperation(string path, string name) {
    this->name = name;
    this->path = path;
    getType();
    getSize();
}

FileOperation::~FileOperation(){

}

bool FileOperation::showInfo() {

}

bool FileOperation::newOperation() {

}

bool FileOperation::copyOperation() {

}

bool FileOperation::moveOperation() {

}

bool FileOperation::deleteOperation() {

}

bool FileOperation::getType() {
    string temp = name;
    int i = temp.length() - 1;
    int j = i;
    while (temp[i--]) {
        if ('.' == temp) {
            break;
        }
    }
    string theType(temp + i + 1, temp + j + 1);
    fileType = theType;
    return true;
}

bool FileOperation::getSize() {

}

bool FileOperation::getPath() {

}
