#include <iostream>

class Matrix {
    double** data;
    size_t rows;
    size_t cols;
    Matrix(double** transposed, size_t rows_, size_t cols_) : rows(rows_), cols(cols_), data(transposed) { }
public:
    Matrix(size_t cols, size_t rows) : rows(rows), cols(cols) {
        data = new double *[rows];
        for (size_t i = 0; i < cols; ++i) {
            data[i] = new double[cols];
        }
    }
    ~Matrix() {
        for (size_t i = 0; i < rows; ++i) {
            delete[] data[i];
        }
        delete[] data;
    }
    Matrix(const Matrix& matrix) : rows(matrix.rows), cols(matrix.cols) {
        data = new double*[rows];
        for (size_t i = 0; i < rows; ++i) {
            data[i] = new double[cols];
        }
        for (size_t i = 0; i < rows; ++i) {
            for (size_t j = 0; j < cols; ++j){
                data[i][j] = matrix(i, j);
            }
        }
    }
    Matrix& operator=(const Matrix& other) {
        if (this != &other) {
            for (size_t i = 0; i < rows; ++i) {
                delete[] data[i];
            }
            delete[] data;
            rows = other.rows;
            cols = other.cols;
            data = new double*[rows];
            for (size_t i = 0; i < rows; ++i) {
                data[i] = new double[cols];
            }
            for (size_t i = 0; i < rows; ++i) {
                for (size_t j = 0; j < cols; ++j){
                    data[i][j] = other(i, j);
                }
            }
        }
        return *this;
    }
    void fill(double value) {
        for (size_t i = 0; i < rows; ++i) {
            for (size_t j = 0; j < cols; ++j) {
                data[i][j] = value;
            }
        }
    }
    size_t getRows() const { return rows; }
    size_t getCols() const { return cols; }
    Matrix transpose() const {
        double** transposed = new double *[cols];
        for (size_t i = 0; i < rows; ++i) {
            transposed[i] = new double[rows];
        }
        for (size_t i = 0; i < cols; ++i) {
            for (size_t j = 0; j < rows; ++j) {
                transposed[i][j] = data[i][j];
            }
        }
        return Matrix(transposed, cols, rows);
    }
    double& operator()(size_t i, size_t j) {
        return data[i][j];
    }
    const double& operator()(size_t i, size_t j) const { // правый перегружает
        return data[i][j];
    }
    void print() {
        for (size_t i = 0; i < cols; ++i) {
            for (size_t j = 0; j < rows; ++j) {
                std::cout << data[i][j] << ' ';
            }
            std::cout << '\n';
        }
    }
    Matrix operator+(const Matrix& a) {
        if (a.cols != cols || a.rows != rows)
            throw std::invalid_argument("size is not equal");
        Matrix res(a.rows, a.cols);
        for (size_t i = 0; i < rows; ++i) {
            for (size_t j = 0; j < cols; ++j) {
                res(i, j) = data[i][j] + a.data[i][j]; // или res.data[i][j]
            }
        }
        return res;
    }
    void operator+=(const Matrix& a) {
        if (a.cols != cols || a.rows != rows)
            throw std::invalid_argument("size is not equal");
        for (size_t i = 0; i < rows; ++i) {
            for (size_t j = 0; j < cols; ++j) {
                data[i][j] += a.data[i][j];
            }
        }
    }
    void operator-=(const Matrix& a) {
        if (a.cols != cols || a.rows != rows)
            throw std::invalid_argument("size is not equal");
        for (size_t i = 0; i < rows; ++i) {
            for (size_t j = 0; j < cols; ++j) {
                data[i][j] -= a.data[i][j];
            }
        }
    }
    void operator*(const int scalar) {
        Matrix res(rows, cols);
        for (size_t i = 0; i < rows; ++i) {
            for (size_t j = 0; j < cols; ++j) {
                res(i, j) = data[i][j] * scalar;
            }
        }
    }

    void operator*=(const int scalar) {
        for (size_t i = 0; i < rows; ++i) {
            for (size_t j = 0; j < cols; ++j) {
                data[i][j] *= scalar;
            }
        }
    }

    Matrix operator*(const Matrix& matrix) {
        if (cols != matrix.rows)
            throw std::invalid_argument("size is not equal");
        Matrix res(rows, cols);
        double temp;
        for (size_t i = 0; i < rows; ++i) {
            for (size_t j = 0; j < cols; ++j) {
                temp = 0;
                for (size_t k = 0; k < cols; ++k) {
                    temp += (data[i][k] * matrix(k, j));
                }
                res(i, j) = temp;
            }
        }
        return res;
    }

    bool operator==(const Matrix& matrix) {
        for (size_t i = 0; i < rows; ++i) {
            for (size_t j = 0; j < cols; ++j) {
                if (std::abs(data[i][j] - matrix.data[i][j] > 1e-10)) {
                    return false;
                }
            }
        }
        return true;
    }
    bool operator!=(const Matrix& matrix) {
        for (size_t i = 0; i < rows; ++i) {
            for (size_t j = 0; j < cols; ++j) {
                if (std::abs(data[i][j] - matrix.data[i][j] > 1e-10)) {
                    return true;
                }
            }
        }
        return false;
    }


    friend std::ostream& operator<<(std::ostream& os, const Matrix& m) {
        for (size_t i = 0; i < m.rows; ++i) {
            for (size_t j = 0; j < m.cols; ++j) {
                os << m.data[i][j] << ' ';
            }
            os << '\n';
        }
        return os;
    }

    friend std::istream& operator>>(std::istream& is, Matrix& m) {
        is >> m.rows >> m.cols;
        for (size_t i = 0; i < m.rows; ++i) {
            for (size_t j = 0; j < m.cols; ++j) {
                is >> m.data[i][j];
            }
        }
        return is;
    }
};

int main() {
    Matrix matrix1(2, 2);
    matrix1.fill(10);
    Matrix matrix2(4, 4);
    matrix2.fill(10);
    try {
        Matrix matrix3 = matrix1 + matrix2;
    } catch (std::invalid_argument& e) {
        std::cout << e.what() << '\n';
    }
    std::cout << 1 + 4;
    //std::cout << matrix3;
}
