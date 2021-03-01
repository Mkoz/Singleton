#pragma once

class Singleton{
public:
    static Singleton& getInstance();
private:
    Singleton()= default;
    ~Singleton()= default;
    Singleton(const Singleton&)= delete;
    Singleton& operator=(const Singleton&)= delete;
};

