#include <iostream>
void input(int* n, int m);
void change(int* n, int m);
void print(int* n, int m);
int main()
{
    int a[10];
    input(a, 10);
    change(a, 10);
    print(a, 10);
    system("pause");
    return 0;
}
void input(int* n, int m)
{
    int* p;
    for (p = n, cout << "Please enter " << m << " numbers: "; p < n + m; cin >> *p++);
}
void print(int* n, int m)
{
    int* p;
    for (p = n, cout << "New line: "; p < n + m; cout << *p++ << ' ');
    cout << endl;
}