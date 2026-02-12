#include <iostream>
#include <string>

// \begin{exercise}
// Напишите функцию
// \begin{lstlisting}
// std::string removeAll(std::string s, const std::string& substr);
// \end{lstlisting}
// которая удаляет \textbf{все} вхождения \code{substr} из строки \code{s} и возвращает результат. Используйте цикл с \code{find} и \code{erase}.
// \end{exercise}

std::string removeAll(std::string s, const std::string& substr) {
    if (s.empty()) {
        return s;
    }
    size_t pos = 0;
    while ((pos = s.find(substr, pos)) != std::string::npos) {
        s.erase(pos, substr.length());
    }
    return s;
}
int main() {
    std::string s = "abc feuhgfd abc erughv abc";
    std::cout << removeAll(s, "abc");
}