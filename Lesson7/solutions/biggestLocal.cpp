#include <iostream>
using namespace std;
int main()
{
    // По условие масива е с най-много размер 100.
    const int MAX_N = 100;
    
    // Да си направим един масив и една променлива n за реалния брой елементи.
    int arr[MAX_N], n;
    
    // Да прочетем колко са елементите на масива
    cin>>n;
    
    // Да прочетем елементите и да ги запишем в arr
    for(int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }
    
    // За да видим кои елементи са най-големи от съседите си нека да проверяваме всеки освен последните елементи в началото и края.
    // Нека да имаме един брояч, който ще увеличаваме всеки път, когато намерим такъв елемент.
    int br = 0;
    
    for(int i = 1; i < n - 1; i++)
    {
        // Ако сегашния елемент е по-голям от предишния И сегашния елемент е по-голям от следващия
        if(arr[i] > arr[i-1] && arr[i] > arr[i+1])
        {
            br++;
        }
    }
    
    // Да изкараме брояча,  за да видим отговора на задачата.
    cout<<br<<endl;
    return 0;
}
