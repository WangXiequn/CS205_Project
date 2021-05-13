//
// Created by 11383 on 2021/5/13.
//

#ifndef CS205_PROJECT_MATRIX_H
#define CS205_PROJECT_MATRIX_H


template<typename T>class Matrix{
private:
    int length,width;
    T ** matrix;
public:
    bool operator==(const Matrix &rhs) const {
        return length == rhs.length &&
               width == rhs.width &&
               matrix == rhs.matrix;
    }

    bool operator!=(const Matrix &rhs) const {
        return !(rhs == *this);
    }
};


#endif //CS205_PROJECT_MATRIX_H
