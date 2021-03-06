#include <iostream>
using namespace std;
int main()
{
    // По условие матрицата може да е най-много 100 х 100.
    const int MAX_N = 100,MAX_M = 100;
    
    // Да си направим две матрици - едната ще съдържа оригиналната матрица, а другата - транспонираната.
    int M[MAX_N][MAX_M],TM[MAX_N][MAX_M];
    
    // Нека размерите на първата матрица да ги държим в n и m.
    int n, m;
    
    // Да прочетем колко реда и колко стълба има матрицата
    cin>>n>>m;
    
    // Да прочетем входната матрица и да я запазим в "M"
    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < m; j++)
        {
            cin>>M[i][j];
        }
    }
    
    
    // Естествено, ако една матрица е с размери 2 х 3, то транспонираната ѝ ще е с размери 3 х 2, защото редовете стават стълбове и обратното.
    // Значи трябва да обикаляме първата матрица по колони
    // (първо всички елементи от първата колона, после всички елементи от втората колона, и така докато минем през всичките m колони)
    // и да ги слагаме на редовете от транспонираната ѝ матрица.
    // Тоест, ако един елемент е на 1 ред и 5 колона в първата матрица, ще го сложим на 5 ред и 1 колона.
    // В общия случай TM[j][i] = M[i][j];
    
    for(int i = 0; i < n;i++)
    {
        for(int j = 0; j < m; j++)
        {
            TM[j][i] = M[i][j];
        }
    }
    
    
    // Да принтираме транспонираната матрица
    // Забележете, че тук i ходи от 0 до m, a j ходи от 0 до n, защото разменихме редовете и стълбовете
    for(int i = 0; i < m; i++)
    {
        for(int j = 0; j < n;j++)
        {
            cout<<TM[i][j]<<" ";
        }
        cout<<endl;
    }
    
    
    return 0;
}
