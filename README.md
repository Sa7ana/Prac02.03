<h1 align="center">Matrix </h1>

Лабораторные 1-4

## Оглавление:
### Класс Matrix
1. [Конструкторы Matrix](#Конструкторы-Matrix)
2. [Функции Matrix](#Функции-Matrix)

## Класс Matrix

### Конструкторы Matrix

```
Matrix x(int n)
```
  Создание квадратной матрицы x размера n на n

```
Matrix x(int n, int m)
```
  Создание матрицы x размера n на m

```
EMatrix x(int n)
```
  Создание единичной матрицыx размера n на n
```
DMatrix x(int n)
``` 
  Создание диагональной матрицы x размера n на n с значениями на диагонали от 1 до n
```
UTatrix x(int n)
```

  Создание верхней треугольной матрицы x размера n на n  
  
```
LTMatrix x(int n)
``` 
  Создание нижней треугольной матрицы x размера n на n
  
```
SMatrix x(int n)
```
  Создание симметричной матрицы x размера n на n
  
### Функции Matrix
+ SetMij
```
SetMij(int i, int j, const double value)
```
Замена перепенной на позиции i j на значение value

+ ReadBin
```
ReadBin(const char* fname)
```
Чтение матрицы из бинарного файла с именем fname
  
+ WriteBin
```
ReadBin(const char* fname)
```  
Запись матрицы в бинарный файл с именем fname

+ Hadamard
```
N1.Hadamard(Matrix N2)
```
Произведение Адамара (N1 * N2)

+ Det
```
Det(Matrix M)
```
Определитель матрицы M

+ Scalar
```
(Matrix x).Scalar(Matrix y)
```
Скалярное произведение векторов x и y

+ Norm
```
(Matrix x).Norm()
```
Норма вектора x

+ NormM
```
(Matrix M).NormM()
```
Норма матрицы M

+ Tr
```
(Matrix M).Tr()
```
След матрицы М

+ Angle
```
(Matrix M1).Angle(Matrix M2)
```
Угол между векторами M1 и M2

+ Rank
```
(Matrix M).Rank()
```
Ранг матрицы M

+ Minor
```
(Matrix M).Minor(int n, int m)
```
Минор элемента на позиции n, m матрицы M

+ Transpose
```
(Matrix M).Transpose()
```
Транспонирование матрицы M

+ Inverse
```
(Matrix M).Inverse()
```
Обратная матрица к матрице M

+ AddColumn
```
(Matrix M).AddColumn(Matrix V)
```
Добавление вектора столбца V к матрице M 

+getElem
```
(Matrix M).getElem(int n, int m)
```
Возвращение элемента на позиции n, m матрицы M
