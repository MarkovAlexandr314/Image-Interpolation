#include <iostream>
#include <vector>
#include <unordered_map>
#include <map>

/**
 * @brief Функция вывода данных массива
 * 
 * @tparam T тип данных, использующихся в массиве
 * @param o ссылка на поток вывода данных
 * @param a константная ссылка на массив с данными, которые мы будем выводить
 * @return std::ostream& 
 */
template<typename T>
std::ostream& operator << (std::ostream &o, const std::vector<T> &a)
{
    o << '{ ';
    for (T i : a)
        o << i << ' ';
    o<<'}'<<std::endl;
    return o;
}
/**
 * @brief Пустой класс для тестирования шаблонных функций
 * 
 */
class TestClass
{
public:
    TestClass(int);
    ~TestClass();
    int operator [] (int i);
private:
    int a;

};
/**
 * @brief Функция, начинающая выполнение программы
 * 
 * @return Возвращает состояние программы после запуска
 */
int main()
{
    std::vector<int> arr = {1, 3, 9, 4, 6, 5, 7, 0, 8, 2};
    std::vector<std::vector<int>> array2 = {{1, 3, 9},
                                            {4, 6, 5}, 
                                            {7, 0, 8, 2}};
    std::cout<<arr;
    return 0;
}