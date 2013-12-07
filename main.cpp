#include <iostream>

/*В массиве А(N) каждый элемент равен 0, 1 или 2. Переставить
элементы массива так, чтобы сначала расположились все нули, затем все
двойки и, наконец, все единицы.*/

using namespace std;

const int n=7;
int k0=0;
int k1=0;
int k2=0;

void FindTheQuantity012(int mass[n]) //функция, которая находит количество 0,1,2
{
    for (int i=0; i<n; i++)
    {
        if (mass[i]==0)
            k0++;
        if (mass[i]==1)
            k1++;
        if (mass[i]==2)
            k2++;
    }
}

int NewArray(int n, int k) //функция, которая выводит полученный массив
{
    int newmass[n];
    for (int i=0; i<k0; i++)
    {
        newmass[i]=0;
    }
    for (int i=k0; i<k0+k2; i++)
    {
        newmass[i]=2;
    }
    for (int i=k0+k2; i<n; i++)
    {
        newmass[i]=1;
    }
    return newmass[k];
}

int main()
{
    int mass[n];
    cout<<"Enter the array:"<<endl;
    for (int i=0; i<n; i++)
    {
        cin>>mass[i];
    }
    for (int i=0; i<n; i++)
    {
        if ((mass[i]<0) || (mass[i]>2)) // если введены не наши цифры(0,1,2), то заменяем их на 0
            mass[i]=0;
    }

    FindTheQuantity012(mass);

    cout<<"New array:"<<endl;
    for (int i=0; i<n; i++)
    {
        int newarray=NewArray(n,i);
        cout << newarray <<" ";
    }
    return 0;
}
