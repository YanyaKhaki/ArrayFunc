+#include <iostream>
+
+/*В массиве А(N) каждый элемент равен 0, 1 или 2. Переставить
+элементы массива так, чтобы сначала расположились все нули, затем все
+двойки и, наконец, все единицы.*/
+
+using namespace std;
+
+int k0=0;
+int k1=0;
+int k2=0;
+
+void FindTheQuantity012(int* mass, int n) //функция, которая находит количество 0,1,2
+{
+    for (int i=0; i<n; i++)
+    {
+        if (mass[i]==0)
+            k0++;
+        if (mass[i]==1)
+            k1++;
+        if (mass[i]==2)
+            k2++;
+    }
+}
+
+int* NewArray(int n) //функция, которая выводит полученный массив
+{
+    int* newmass=new int[n];
+    for (int i=0; i<k0; i++)
+    {
+        newmass[i]=0;
+    }
+    for (int i=k0; i<k0+k2; i++)
+    {
+        newmass[i]=2;
+    }
+    for (int i=k0+k2; i<n; i++)
+    {
+        newmass[i]=1;
+    }
+    return newmass;
+}
+
+int main()
+{
+    int* mass; //указатель, чтобы задавать массив любой размерности
+    int n;
+    cout<<"Enter the size of the array:"<<endl;
+    cin>>n;
+    mass=new int [n];
+
+    cout<<"Enter the array:"<<endl;
+    for (int i=0; i<n; i++)
+        {
+            cin>>mass[i];
+        }
+    for (int i=0; i<n; i++)
+        {
+            if ((mass[i]<0) || (mass[i]>2)) // если введены не наши цифры(0,1,2), то заменяем их на 0
+            mass[i]=0;
+        }
+
+    FindTheQuantity012(mass,n);
+
+    int* newarray=NewArray(n);
+    cout<<"New array:"<<endl;
+    for (int i=0; i<n; i++)
+    {
+        cout<<newarray[i]<<" ";
+    }
+}
+

