#include <iostream>
#include <vector>
using namespace std;

class DrawTree1 {
public:
    virtual void CoutTree() {
        cout << "Picture 1:\n";

        cout << " /  \\\n";
        cout << "//  \\\\";

        cout << "\n\n";
    }
};

class DrawTree2 : public DrawTree1 {
public:
    void CoutTree() {
        cout << "Picture 2:\n";

        cout << " /  \\\n";
        cout << "/ ** \\";

        cout << "\n\n";
    }
};

class DrawTree3 : public DrawTree1 {
public:
    void CoutTree() {
        cout << "Picture 3:\n";

        cout << " /  \\\n";
        cout << "/ ++ \\";

        cout << "\n\n";
    }
};

int main() {
    vector<DrawTree1*> Arr;

    DrawTree1 *tree1 = new DrawTree1;
    Arr.push_back(tree1);

    DrawTree2 *tree2 = new DrawTree2;
    Arr.push_back(tree2);

    DrawTree3 *tree3 = new DrawTree3;
    Arr.push_back(tree3);

    for (int i = 0; i < 3; i++)
        Arr[i]->CoutTree();

    return 0;
}

/*
Напишіть чотири класи для реалізації друку різних видів дерев (з дуже
простих символів ASCII, тобто '+', '*', '/' і '\'). Один з класів є базовим для трьох
інших. У базовому класі треба створити метод малювання — хай це буде
єдиний метод цього класу і це буде віртуальний метод.
Далі у похідних класах
реалізуйте цей метод за допомогою трьох різних версій малювання.
В основній функції, створіть масив з трьома вказівниками на об’єкти базового
класу. Потім створіть три об’єкти дерев різних видів і призначте вказівники на
них з комірок масива. Після цього в циклі for викличте кожен метод
малювання.
Приклад виведення

Малюнок 1:
 / \
// \\
Малюнок 2:
 /  \
/ ** \
Малюнок 3:
 /  \
/ ++ \

*/
