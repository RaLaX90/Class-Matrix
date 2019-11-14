#pragma once

class Matrix
{
public:
	Matrix();
	Matrix(int rows, int cols);
	Matrix(int rows, int cols, float **C);

	Matrix(Matrix &other);
	Matrix& operator=(const Matrix &other);

	~Matrix();

	void Set(int rows, int cols);
	Matrix operator+(const Matrix &other);
	Matrix operator-(const Matrix &other);
	Matrix operator*(const Matrix &other);

	float getMatrix(int index1, int index2); 
	void setMatrix(int index1, int index2, float value);


	

private:
	int colCount = 0, rowCount = 0;
	float **matrix;
};

Matrix::Matrix()
{

}
//Конструктор, выделяем динамическую память в зависимости от количества строк и столбцов.
Matrix::Matrix(int rows, int cols)
{
	this->rowCount = rows;
	this->colCount = cols;
	this->matrix = new float*[rowCount];
	for (int i = 0; i < rowCount; i++)
	{
		matrix[i] = new float[colCount];
		for (int j = 0; j < colCount; j++)
		{
			matrix[i][j] = 0;
		}
	}
}

Matrix::Matrix(int rows, int cols, float **C)
{
	colCount = cols;
	rowCount = rows;
	matrix = new float*[rowCount];
	for (int i = 0; i < rowCount; i++)
	{
		matrix[i] = new float[colCount];
		for (int j = 0; j < colCount; j++)
		{
			matrix[i][j] = C[i][j];
		}
	}
}

inline Matrix::Matrix(Matrix & other)
{
	this->Set(other.rowCount, other.colCount);
	for (int i = 0; i < this->colCount; i++) {
		for (int q = 0; q < this->rowCount; q++) {
			this->matrix[i][q] = other.matrix[i][q];
		}
	}
}

inline Matrix & Matrix::operator=(const Matrix & other)
{
	if (this == &other) { 
		return *this;
	}

	if (matrix != nullptr) { 
		for (int i = 0; i < colCount; i++) {
			delete[] matrix[i];
		}
		delete[] matrix;
		matrix = nullptr;
	}

	this->Set(other.rowCount, other.colCount);
	for (int i = 0; i < this->colCount; i++) {
		for (int q = 0; q < this->rowCount; q++) {
			this->matrix[i][q] = other.matrix[i][q];
		}
	}
	return *this;
}

Matrix::~Matrix()
{
	if(colCount != 0){
		for (int i = 0; i < colCount; i++) {
			delete[] matrix[i];
		}
		delete[] matrix;
		matrix = nullptr;
	}
}


void Matrix::Set(int rows, int cols) {
	this->rowCount = rows;
	this->colCount = cols;
	this->matrix = new float*[rowCount];

	for (int i = 0; i < rowCount; i++){
		matrix[i] = new float[colCount];

		for (int j = 0; j < colCount; j++){
			matrix[i][j] = 0;
		}

	}

}


Matrix Matrix::operator+(const Matrix &other) {
	Matrix temp(this->rowCount, this->colCount);
	//temp.Set(this->rowCount, this->colCount);
	for (int i = 0; i < this->colCount; i++) {
		for (int q = 0; q < this->rowCount; q++) {
			temp.matrix[i][q] = this->matrix[i][q] + other.matrix[i][q];
		}
	}
	return temp;
}

Matrix Matrix::operator-(const Matrix &other) {
	Matrix temp(this->rowCount, this->colCount);
	//temp.Set(this->rowCount, this->colCount);
	for (int i = 0; i < this->colCount; i++) {
		for (int q = 0; q < this->rowCount; q++) {
			temp.matrix[i][q] = this->matrix[i][q] - other.matrix[i][q];
		}
	}
	return temp;
}

Matrix Matrix::operator*(const Matrix &other) {
	Matrix temp(this->rowCount, this->colCount);
	//temp.Set(this->rowCount, this->colCount);
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

