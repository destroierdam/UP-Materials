#include<iostream>
#include<algorithm> // max()
using namespace std;
int main()
{
    // ТАКОВА НЕЩО НЯМА ДА ИМАТЕ

    const int MAX_SIZE = 1000;
    int weight[MAX_SIZE],value[MAX_SIZE],n,w;
    int T[MAX_SIZE][MAX_SIZE];

    // Да прочетем броя неща и колко килограма може да носи раницата
    cin>>n>>w;

    // Да прочетем колко тежи всеки предмет
    for(int i=0; i<n; i++)
    {
        cin>>weight[i];
    }

    // Да прочетем колко струва всеки предмет
    for(int i=0; i<n; i++)
    {
        cin>>value[i];
    }

    for(int i=0; i<n; i++)
    {
        for(int j=0; j<=w; j++)
        {
            // Ако раницата не може да носи нищо 
            if(j==0)
            {
		// не можем да вземем нищо
                T[i][j]=0;
                continue;
            }
            if(j<weight[i]) // ако не можем да добавим следващия предмет поради теглото му
            {
                T[i][j]=(i?T[i-1][j]:0); // вземаме най-добрия резултат без този предмет или 0, в зависимост дали имаме предишни предмети(за първия предмет нямаме)
            }
            else
            {
		// Ще вземем максималното от две неща: числото на горния ред(не вземаме предмета) и числото на горния ред но на <теглото на предмета> колони назад
		// (вземаме предмета и колкото можеш още да носим в раницата (най-оптимално))
                T[i][j]=max( value[i]+(i?T[i-1][j-weight[i]]:0) , (i?T[i-1][j]:0 ));
            }
        }
    }

    // Отговорът се намира на последния ред, защото там вече сме взели всички предмети, и на последната колона, защото там раницата носи максимално тегло
    cout<<T[n-1][w]<<endl;
    return 0;
}
