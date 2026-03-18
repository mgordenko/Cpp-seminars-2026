#include <iostream>
#include <vector>
#include <stdexcept>
#include <cstdlib>
#include <ctime>

class Matrix {
private:
    int** data;
    size_t rows;
    size_t cols;

    void allocateMemory() {
        data = new int*[rows];
        for (size_t i = 0; i < rows; ++i) {
            data[i] = new int[cols]();
        }
    }

    void freeMemory() {
        if (data) {
            for (size_t i = 0; i < rows; ++i) {
                delete[] data[i];
            }
            delete[] data;
            data = nullptr;
        }
    }

public:
    Matrix(size_t rows, size_t cols) : rows(rows), cols(cols), data(nullptr) {
        std::cout << "Constructor: creating " << rows << "x" << cols << " matrix\n";
        allocateMemory();
    }

    Matrix(const Matrix& other) : rows(other.rows), cols(other.cols), data(nullptr) {
        std::cout << "Copy constructor: copying " << rows << "x" << cols << " matrix\n";
        allocateMemory();
        for (size_t i = 0; i < rows; ++i) {
            for (size_t j = 0; j < cols; ++j) {
                data[i][j] = other.data[i][j];
            }
        }
    }

    Matrix(Matrix&& other) noexcept
        : data(other.data), rows(other.rows), cols(other.cols) {
        std::cout << "Move constructor: moving " << rows << "x" << cols << " matrix\n";
        other.data = nullptr;
        other.rows = 0;
        other.cols = 0;
    }

    ~Matrix() {
        std::cout << "Destructor: destroying " << rows << "x" << cols << " matrix\n";
        freeMemory();
    }

    Matrix& operator=(const Matrix& other) {
        std::cout << "Copy assignment: from " << other.rows << "x" << other.cols
                  << " to " << rows << "x" << cols << "\n";

        if (this != &other) {
            freeMemory();

            rows = other.rows;
            cols = other.cols;

            allocateMemory();
            for (size_t i = 0; i < rows; ++i) {
                for (size_t j = 0; j < cols; ++j) {
                    data[i][j] = other.data[i][j];
                }
            }
        }
        return *this;
    }

    Matrix& operator=(Matrix&& other) noexcept {
        std::cout << "Move assignment: moving from " << other.rows << "x" << other.cols
                  << " to " << rows << "x" << cols << "\n";

        if (this != &other) {
            freeMemory();

            data = other.data;
            rows = other.rows;
            cols = other.cols;

            other.data = nullptr;
            other.rows = 0;
            other.cols = 0;
        }
        return *this;
    }

    void randomFill() {
        static bool seeded = false;
        if (!seeded) {
            std::srand(static_cast<unsigned>(std::time(nullptr)));
            seeded = true;
        }

        for (size_t i = 0; i < rows; ++i) {
            for (size_t j = 0; j < cols; ++j) {
                data[i][j] = std::rand() % 100;
            }
        }
    }

    int& at(size_t i, size_t j) {
        if (i >= rows || j >= cols) {
            throw std::out_of_range("Matrix indices out of range");
        }
        return data[i][j];
    }

    const int& at(size_t i, size_t j) const {
        if (i >= rows || j >= cols) {
            throw std::out_of_range("Matrix indices out of range");
        }
        return data[i][j];
    }

    size_t getRows() const { return rows; }
    size_t getCols() const { return cols; }

    friend std::ostream& operator<<(std::ostream& os, const Matrix& m) {
        for (size_t i = 0; i < m.rows; ++i) {
            for (size_t j = 0; j < m.cols; ++j) {
                os << m.data[i][j] << "\t";
            }
            os << "\n";
        }
        return os;
    }

    Matrix operator+(const Matrix& other) const {
        if (rows != other.rows || cols != other.cols) {
            throw std::invalid_argument("Matrix dimensions must match for addition");
        }

        Matrix result(rows, cols);
        for (size_t i = 0; i < rows; ++i) {
            for (size_t j = 0; j < cols; ++j) {
                result.data[i][j] = data[i][j] + other.data[i][j];
            }
        }
        return result;
    }
};

void processMatrix(Matrix&& m) {
    std::cout << "Processing moved matrix:\n";
    std::cout << m << "\n";
}

int main() {
    Matrix m1(3, 3);
    m1.randomFill();
    std::cout << m1 << "\n";

    Matrix m2 = m1;
    std::cout << m2 << "\n";

    m2.at(0, 0) = 999;
    std::cout << m1.at(0, 0) << "\n";
    std::cout << m2.at(0, 0) << "\n";

    Matrix m3 = std::move(m2);
    std::cout << m3 << "\n";
    std::cout << m2.getRows() << " " << m2.getCols() << "\n";

    std::vector<Matrix> matrices;
    matrices.reserve(3);
    matrices.push_back(Matrix(2, 2));
    matrices.push_back(Matrix(2, 2));
    matrices.push_back(Matrix(2, 2));

    Matrix m4(2, 2);
    m4.randomFill();
    std::cout << m4 << "\n";
    processMatrix(std::move(m4));
    std::cout << m4.getRows() << " " << m4.getCols() << "\n";

    Matrix a(2, 2);
    Matrix b(2, 2);
    a.randomFill();
    b.randomFill();
    std::cout << a << "\n";
    std::cout << b << "\n";

    try {
        Matrix c = a + b;
        std::cout << c << "\n";
    } catch (const std::invalid_argument& e) {
        std::cout << e.what() << "\n";
    }
    return 0;
}