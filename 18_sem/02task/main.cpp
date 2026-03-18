#include <iostream>
#include <vector>

class Matrix {
    double** data;
    int rows_;
    int cols_;
    Matrix(size_t rows, size_t cols, double** data) : rows_(rows), cols_(cols), data(data) {}
public:
    Matrix(size_t rows, size_t cols) : rows_(rows), cols_(cols) {
        data = new double*[rows_];
        for (int i = 0; i < rows_; ++i) {
            data[i] = new double[cols_];
            for (int j = 0; j < cols_; ++j)
                data[i][j] = 0;
        }
    }
    Matrix(const Matrix& other) : rows_(other.rows_), cols_(other.cols_) {
        data = new double*[rows_];
        for (int i = 0; i < rows_; ++i) {
            data[i] = new double[cols_];
            for (int j = 0; j < cols_; ++j)
                data[i][j] = other.data[i][j];
        }
        std::cout << "Matrix(const Matrix& other)\n";
    }

    Matrix(Matrix&& other) : rows_(other.rows_), cols_(other.cols_) {
        data = other.data;
        other.data = nullptr;
        std::cout << "Matrix(Matrix&& other)\n";
    }

    Matrix& operator=(const Matrix& other) {
        if (this == &other){
            return *this;
        }
        for (size_t i = 0; i < rows_; ++i){
            delete[] data[i];
        }
        delete[] data;
        rows_ = other.rows_;
        cols_ = other.cols_;
        data = new double*[rows_];
        for (size_t i = 0; i < rows_; ++i) {
            data[i] = new double[cols_];
            for (size_t j = 0; j < cols_; ++j){
                data[i][j] = other.data[i][j];
            }
        }
        return *this;
    }

    Matrix& operator=(Matrix&& other) noexcept {
        if (this == &other){
            return *this;
        }
        rows_ = other.rows_;
        cols_ = other.cols_;
        data = other.data;
        other.data = nullptr;
        other.rows_ = 0;
        other.cols_ = 0;
        std::cout << "Matrix& operator=(const Matrix&& other)\n";
        return *this;
    }


    ~Matrix() {
        for (size_t i = 0; i < rows_; ++i)
            delete[] data[i];
        delete[] data;
    }

    void fill(double value) {
        for (int i = 0; i < rows_; ++i) {
            data[i] = new double[cols_];
            for (int j = 0; j < cols_; ++j)
                data[i][j] = value;
        }
    }
    size_t getRows() const {
        return rows_;
    }
    size_t getCols() const {
        return cols_;
    }
    Matrix transpose() const {
        double** new_data = new double*[cols_];
        for (int i = 0; i < cols_; ++i) {
            new_data[i] = new double[rows_];
            for (int j = 0; j < rows_; ++j)
                new_data[i][j] = data[j][i];
        }
        return Matrix(cols_, rows_, new_data);
    }
    double& operator()(size_t i, size_t j) {
        return data[i][j];
    }
    const double& operator()(size_t i, size_t j) const {
        return data[i][j];
    }

    friend Matrix operator+(const Matrix &a, const Matrix &b);
    friend Matrix operator-(const Matrix &a, const Matrix &b);

    friend std::ostream& operator<<(std::ostream& os, const Matrix& m) {
        for (int i = 0; i < m.rows_; ++i) {
            for (int j = 0; j < m.cols_; ++j)
                os << m.data[i][j] << ' ';
            os << '\n';
        }
        os << '\n';
        return os;
    }
};

Matrix operator+(const Matrix &a, const Matrix &b) {
    if (a.rows_ != b.rows_ || a.cols_ != b.cols_) {
        std::cout << "матрицы разношо размера";
    }

    Matrix result(a.rows_, a.cols_);
    for (size_t i = 0; i < a.rows_; ++i) {
        for (size_t j = 0; j < a.cols_; ++j) {
            result.data[i][j] = a.data[i][j] + b.data[i][j];
        }
    }

    return result;
}

Matrix operator-(const Matrix &a, const Matrix &b) {
    if (a.rows_ != b.rows_ || a.cols_ != b.cols_) {
        std::cout << "матрицы разношо размера";
    }

    Matrix result(a.rows_, a.cols_);
    for (size_t i = 0; i < a.rows_; ++i) {
        for (size_t j = 0; j < a.cols_; ++j) {
            result.data[i][j] = a.data[i][j] - b.data[i][j];
        }
    }

    return result;
}

int main() {
    Matrix m1(5, 4);
    Matrix m2(0, 0);
    m2 = Matrix(10, 10);
    std::cout << m2;
    return 0;
}
