#pragma once
#include <iostream>
#include <vector>

using namespace std;

class Exception1 : public std::exception{
	string text1;
public:
	Exception1(string t) : text1(t){}
	const char* what() const { return text1.c_str(); }
};




class Matrix
{
protected:
	vector<vector<double>> M;
public:


	Matrix(){}

	Matrix(int n, int m);

	Matrix(int n);


	friend ostream& operator << (ostream &out, const  Matrix &M);

	friend ifstream& operator>>(ifstream &input, Matrix &M);

	friend ofstream& operator << (ofstream& out, Matrix &M);

	void SetMij(int i, int j, const double value);

	Matrix operator + (Matrix N)const;

	Matrix operator-(Matrix N)const;

	Matrix operator*(double x)const;

	Matrix operator*(Matrix N)const;

	void ReadBin(const char* fname);

	void WriteBin(const char* fname);

	Matrix Hadamard(Matrix N2);

	double Det();

	double Scalar(Matrix M2);

	double Norm();

	double Tr();

	double Max();

	double NormM();

	double Angle(Matrix M2);

	double Rank();

	Matrix Minor(int n, int m);

	Matrix Transpose();

	Matrix Inverse();

};




class EMatrix : public Matrix{
public:
	EMatrix(){}
	EMatrix(int n);

};


class DMatrix : public Matrix{
public:
	DMatrix(int n);

};

class UTMatrix : public Matrix{
public:
	UTMatrix(int n);

};

class LTMatrix : public Matrix{
public:
	LTMatrix(int n);

};


class SMatrix : public Matrix{
public:
	SMatrix(int n);

};


