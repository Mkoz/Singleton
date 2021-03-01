#include "Singleton.h"

Singleton & Singleton::getInstance() {
    static Singleton _instance;
    return _instance;
}