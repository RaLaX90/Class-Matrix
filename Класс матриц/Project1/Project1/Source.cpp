#pragma once
#include <fstream>
#include <iostream>
#include <conio.h>
#include <string.h>
#include <stdlib.h>
#include <msclr\marshal_cppstd.h>

class Matrix
{
public:
	Matrix();
	Matrix(int rows, int cols);
	Matrix(int rows, int cols, float **C);
	//~Matrix();

	void Set(int rows, int cols);
	Matrix operator+(const Matrix &other);
	Matrix operator-(const Matrix &other);
	Matrix operator*(const Matrix &other);

	float getMatrix(int index1, int index2);
	void setMatrix(int index1, int index2, float value);




private:
	int colCount, rowCount;
	float **matrix;
};

Matrix::Matrix()
{

}

Matrix::Matrix(int rows, int cols)
{
	rowCount = rows;
	colCount = cols;
	matrix = new float*[colCount];
	for (int i = 0; i < colCount; i++)
	{
		matrix[i] = new float[rowCount];
		for (int j = 0; j < rowCount; j++)
		{
			matrix[i][j] = 0;
			//MessageBox::Show(&matrix[i][j], "Вывод матрицы из файла");
			//richTextBox1->Text += matrix[i][j];
		}
		//richTextBox1->Text += "/n";
	}
}

Matrix::Matrix(int rows, int cols, float **C)
{
	colCount = cols;
	rowCount = rows;
}

/*Matrix::~Matrix()
{
	for (int i = 0; i < colCount; i++) {
		delete[] matrix[i];
	}
	delete[] matrix;
}*/


void Matrix::Set(int rows, int cols) {
	this->rowCount = rows;
	this->colCount = cols;
	this->matrix = new float*[rowCount];
	for (int i = 0; i < colCount; i++)
	{
		matrix[i] = new float[colCount];
		for (int j = 0; j < colCount; j++)
		{
			//matrix[i][j] = rand() % 9;
			matrix[i][j] = 0;
			//MessageBox::Show(this->getMatrix(i, j).ToString(), "Вывод матрицы из файла");
			//richTextBox1->Text += " " + this->getMatrix(i, j).ToString() + "\n";
		}
		//richTextBox1->Text += "/n";
	}
}


Matrix Matrix::operator+(const Matrix &other) {
	Matrix temp;
	temp.Set(this->rowCount, this->colCount);
	for (int i = 0; i < this->rowCount; i++) {
		for (int q = 0; q < this->colCount; q++) {
			temp.matrix[i][q] = this->matrix[i][q] + other.matrix[i][q];
		}
	}
	return temp;
}

Matrix Matrix::operator-(const Matrix &other) {
	Matrix temp;
	temp.Set(this->rowCount, this->colCount);
	for (int i = 0; i < this->rowCount; i++) {
		for (int q = 0; q < this->colCount; q++) {
			temp.matrix[i][q] = this->matrix[i][q] - other.matrix[i][q];
		}
	}
	return temp;
}

Matrix Matrix::operator*(const Matrix &other) {
	Matrix temp;
	temp.Set(this->rowCount, this->colCount);

	for (int i = 0; i < this->rowCount; i++) {
		for (int j = 0; j < other.colCount; j++) {
			for (int q = 0; q < this->colCount; q++) {
				temp.matrix[i][j] += this->matrix[i][q] * other.matrix[q][j];
			}
		}
	}

	return temp;
}

float Matrix::getMatrix(int index1, int index2) {
	return this->matrix[index1][index2];
}

void Matrix::setMatrix(int index1, int index2, float value) {
	this->matrix[index1][index2] = value;
}



