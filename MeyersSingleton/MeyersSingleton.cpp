#include "MeyersSingleton.h"

MeyersSingleton& MeyersSingleton::getInstance() {
    static MeyersSingleton _inst;
    return _inst;
}