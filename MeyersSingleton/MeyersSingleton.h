#pragma once


class MeyersSingleton {
public:
    static MeyersSingleton& getInstance();

private:
    MeyersSingleton() = default;
    ~MeyersSingleton() = default;
    MeyersSingleton(const MeyersSingleton&) = delete;
    MeyersSingleton& operator=(const MeyersSingleton&) = delete;
};
