#pragma once
#include <fstream>
#include <iostream>
#include <conio.h>
#include <string.h>
#include <stdlib.h>
#include <msclr\marshal_cppstd.h>
#include "CLAS.h"

Matrix Obj1;
Matrix Obj2;
Matrix Obj3;

namespace Project1 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	using namespace std;

	/// <summary>
	/// Сводка для MyForm
	/// </summary>

	
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
		{
			InitializeComponent();
			//
			//TODO: добавьте код конструктора
			//
		}

	protected:
		/// <summary>
		/// Освободить все используемые ресурсы.
		/// </summary>
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::DataGridView^  dataGridView1;
	protected:
	private: System::Windows::Forms::DataGridView^  dataGridView2;
	private: System::Windows::Forms::DataGridView^  dataGridView3;
	private: System::Windows::Forms::Button^  button1;
	private: System::Windows::Forms::Button^  button2;

	private: System::Windows::Forms::Button^  button4;
	private: System::Windows::Forms::Button^  button5;
	private: System::Windows::Forms::Button^  button6;
	private: System::Windows::Forms::Button^  button7;
	private: System::Windows::Forms::Button^  button8;
	private: System::Windows::Forms::OpenFileDialog^  openFileDialog1;
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::RichTextBox^  richTextBox1;
	private: System::Windows::Forms::Button^  button9;
	private: System::Windows::Forms::Button^  button10;
	private: System::Windows::Forms::Button^  button3;
	private: System::Windows::Forms::Button^  button11;
	private: System::Windows::Forms::Button^  button12;
	private: System::Windows::Forms::Button^  button13;

	private: System::Windows::Forms::Button^  button15;
	private: System::Windows::Forms::Button^  button16;



	private:
		/// <summary>
		/// Обязательная переменная конструктора.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Требуемый метод для поддержки конструктора — не изменяйте 
		/// содержимое этого метода с помощью редактора кода.
		/// </summary>
		void InitializeComponent(void)
		{
			System::Windows::Forms::DataGridViewCellStyle^  dataGridViewCellStyle4 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			System::Windows::Forms::DataGridViewCellStyle^  dataGridViewCellStyle5 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			System::Windows::Forms::DataGridViewCellStyle^  dataGridViewCellStyle6 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			this->dataGridView2 = (gcnew System::Windows::Forms::DataGridView());
			this->dataGridView3 = (gcnew System::Windows::Forms::DataGridView());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->button6 = (gcnew System::Windows::Forms::Button());
			this->button7 = (gcnew System::Windows::Forms::Button());
			this->button8 = (gcnew System::Windows::Forms::Button());
			this->openFileDialog1 = (gcnew System::Windows::Forms::OpenFileDialog());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->richTextBox1 = (gcnew System::Windows::Forms::RichTextBox());
			this->button9 = (gcnew System::Windows::Forms::Button());
			this->button10 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button11 = (gcnew System::Windows::Forms::Button());
			this->button12 = (gcnew System::Windows::Forms::Button());
			this->button13 = (gcnew System::Windows::Forms::Button());
			this->button15 = (gcnew System::Windows::Forms::Button());
			this->button16 = (gcnew System::Windows::Forms::Button());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView2))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView3))->BeginInit();
			this->SuspendLayout();
			// 
			// dataGridView1
			// 
			this->dataGridView1->AllowUserToAddRows = false;
			dataGridViewCellStyle4->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleCenter;
			this->dataGridView1->AlternatingRowsDefaultCellStyle = dataGridViewCellStyle4;
			dataGridViewCellStyle5->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleCenter;
			dataGridViewCellStyle5->BackColor = System::Drawing::SystemColors::Control;
			dataGridViewCellStyle5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			dataGridViewCellStyle5->ForeColor = System::Drawing::SystemColors::WindowText;
			dataGridViewCellStyle5->SelectionBackColor = System::Drawing::SystemColors::Highlight;
			dataGridViewCellStyle5->SelectionForeColor = System::Drawing::SystemColors::HighlightText;
			dataGridViewCellStyle5->WrapMode = System::Windows::Forms::DataGridViewTriState::True;
			this->dataGridView1->ColumnHeadersDefaultCellStyle = dataGridViewCellStyle5;
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			dataGridViewCellStyle6->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleCenter;
			dataGridViewCellStyle6->BackColor = System::Drawing::SystemColors::Window;
			dataGridViewCellStyle6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			dataGridViewCellStyle6->ForeColor = System::Drawing::SystemColors::ControlText;
			dataGridViewCellStyle6->SelectionBackColor = System::Drawing::SystemColors::Highlight;
			dataGridViewCellStyle6->SelectionForeColor = System::Drawing::SystemColors::HighlightText;
			dataGridViewCellStyle6->WrapMode = System::Windows::Forms::DataGridViewTriState::False;
			this->dataGridView1->DefaultCellStyle = dataGridViewCellStyle6;
			this->dataGridView1->Location = System::Drawing::Point(38, 88);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->RowTemplate->Height = 24;
			this->dataGridView1->Size = System::Drawing::Size(337, 209);
			this->dataGridView1->TabIndex = 0;
			// 
			// dataGridView2
			// 
			this->dataGridView2->AllowUserToAddRows = false;
			this->dataGridView2->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView2->Location = System::Drawing::Point(624, 88);
			this->dataGridView2->Name = L"dataGridView2";
			this->dataGridView2->RowTemplate->Height = 24;
			this->dataGridView2->Size = System::Drawing::Size(337, 209);
			this->dataGridView2->TabIndex = 1;
			// 
			// dataGridView3
			// 
			this->dataGridView3->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView3->Location = System::Drawing::Point(1019, 88);
			this->dataGridView3->Name = L"dataGridView3";
			this->dataGridView3->RowTemplate->Height = 24;
			this->dataGridView3->Size = System::Drawing::Size(337, 209);
			this->dataGridView3->TabIndex = 2;
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(38, 303);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(119, 57);
			this->button1->TabIndex = 3;
			this->button1->Text = L"Ввести першу матрицю";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(624, 303);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(119, 57);
			this->button2->TabIndex = 4;
			this->button2->Text = L"Ввести другу матрицю";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &MyForm::button2_Click);
			// 
			// button4
			// 
			this->button4->Location = System::Drawing::Point(720, 466);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(145, 41);
			this->button4->TabIndex = 6;
			this->button4->Text = L"Выход";
			this->button4->UseVisualStyleBackColor = true;
			this->button4->Click += gcnew System::EventHandler(this, &MyForm::button4_Click);
			// 
			// button5
			// 
			this->button5->Location = System::Drawing::Point(390, 177);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(52, 44);
			this->button5->TabIndex = 7;
			this->button5->Text = L"+";
			this->button5->UseVisualStyleBackColor = true;
			this->button5->Click += gcnew System::EventHandler(this, &MyForm::button5_Click);
			// 
			// button6
			// 
			this->button6->Location = System::Drawing::Point(448, 177);
			this->button6->Name = L"button6";
			this->button6->Size = System::Drawing::Size(51, 44);
			this->button6->TabIndex = 8;
			this->button6->Text = L"-";
			this->button6->UseVisualStyleBackColor = true;
			this->button6->Click += gcnew System::EventHandler(this, &MyForm::button6_Click);
			// 
			// button7
			// 
			this->button7->Location = System::Drawing::Point(505, 177);
			this->button7->Name = L"button7";
			this->button7->Size = System::Drawing::Size(50, 44);
			this->button7->TabIndex = 9;
			this->button7->Text = L"*";
			this->button7->UseVisualStyleBackColor = true;
			this->button7->Click += gcnew System::EventHandler(this, &MyForm::button7_Click);
			// 
			// button8
			// 
			this->button8->Location = System::Drawing::Point(561, 177);
			this->button8->Name = L"button8";
			this->button8->Size = System::Drawing::Size(50, 94);
			this->button8->TabIndex = 10;
			this->button8->Text = L"-1";
			this->button8->UseVisualStyleBackColor = true;
			this->button8->Click += gcnew System::EventHandler(this, &MyForm::button8_Click);
			// 
			// openFileDialog1
			// 
			this->openFileDialog1->FileName = L"openFileDialog1";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(978, 191);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(16, 17);
			this->label1->TabIndex = 11;
			this->label1->Text = L"=";
			// 
			// richTextBox1
			// 
			this->richTextBox1->Location = System::Drawing::Point(412, 2);
			this->richTextBox1->Name = L"richTextBox1";
			this->richTextBox1->Size = System::Drawing::Size(525, 73);
			this->richTextBox1->TabIndex = 12;
			this->richTextBox1->Text = L"";
			// 
			// button9
			// 
			this->button9->Location = System::Drawing::Point(323, 309);
			this->button9->Name = L"button9";
			this->button9->Size = System::Drawing::Size(52, 44);
			this->button9->TabIndex = 13;
			this->button9->Text = L"Det";
			this->button9->UseVisualStyleBackColor = true;
			this->button9->Click += gcnew System::EventHandler(this, &MyForm::button9_Click);
			// 
			// button10
			// 
			this->button10->Location = System::Drawing::Point(909, 309);
			this->button10->Name = L"button10";
			this->button10->Size = System::Drawing::Size(52, 44);
			this->button10->TabIndex = 14;
			this->button10->Text = L"Det";
			this->button10->UseVisualStyleBackColor = true;
			this->button10->Click += gcnew System::EventHandler(this, &MyForm::button10_Click);
			// 
			// button3
			// 
			this->button3->Location = System::Drawing::Point(720, 387);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(145, 40);
			this->button3->TabIndex = 5;
			this->button3->Text = L"Порахувати";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &MyForm::button3_Click);
			// 
			// button11
			// 
			this->button11->Location = System::Drawing::Point(390, 227);
			this->button11->Name = L"button11";
			this->button11->Size = System::Drawing::Size(52, 44);
			this->button11->TabIndex = 15;
			this->button11->Text = L"+";
			this->button11->UseVisualStyleBackColor = true;
			this->button11->Click += gcnew System::EventHandler(this, &MyForm::button11_Click);
			// 
			// button12
			// 
			this->button12->Location = System::Drawing::Point(451, 227);
			this->button12->Name = L"button12";
			this->button12->Size = System::Drawing::Size(48, 44);
			this->button12->TabIndex = 16;
			this->button12->Text = L"-";
			this->button12->UseVisualStyleBackColor = true;
			this->button12->Click += gcnew System::EventHandler(this, &MyForm::button12_Click);
			// 
			// button13
			// 
			this->button13->Location = System::Drawing::Point(507, 227);
			this->button13->Name = L"button13";
			this->button13->Size = System::Drawing::Size(48, 44);
			this->button13->TabIndex = 17;
			this->button13->Text = L"*";
			this->button13->UseVisualStyleBackColor = true;
			this->button13->Click += gcnew System::EventHandler(this, &MyForm::button13_Click);
			// 
			// button15
			// 
			this->button15->Location = System::Drawing::Point(163, 303);
			this->button15->Name = L"button15";
			this->button15->Size = System::Drawing::Size(154, 69);
			this->button15->TabIndex = 19;
			this->button15->Text = L"Ввести першу матрицю(з іншим конструктором)";
			this->button15->UseVisualStyleBackColor = true;
			this->button15->Click += gcnew System::EventHandler(this, &MyForm::button15_Click);
			// 
			// button16
			// 
			this->button16->Location = System::Drawing::Point(749, 303);
			this->button16->Name = L"button16";
			this->button16->Size = System::Drawing::Size(154, 69);
			this->button16->TabIndex = 20;
			this->button16->Text = L"Ввести другу матрицю(з іншим конструктором)";
			this->button16->UseVisualStyleBackColor = true;
			this->button16->Click += gcnew System::EventHandler(this, &MyForm::button16_Click);
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1366, 553);
			this->Controls->Add(this->button16);
			this->Controls->Add(this->button15);
			this->Controls->Add(this->button13);
			this->Controls->Add(this->button12);
			this->Controls->Add(this->button11);
			this->Controls->Add(this->button10);
			this->Controls->Add(this->button9);
			this->Controls->Add(this->richTextBox1);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->button8);
			this->Controls->Add(this->button7);
			this->Controls->Add(this->button6);
			this->Controls->Add(this->button5);
			this->Controls->Add(this->button4);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->dataGridView3);
			this->Controls->Add(this->dataGridView2);
			this->Controls->Add(this->dataGridView1);
			this->Name = L"MyForm";
			this->Text = L"MyForm";
			this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView2))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView3))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion

void PrintMatr(float **mas, int size) {
	for (int i = 0; i < size; i++) {
		for (int j = 0; j < size; j++) {
			richTextBox1->Text += mas[i][j].ToString() + " + ";
		}
		richTextBox1->Text += "\n";
	}
}

void Get_mass(float **mass, float **temp_arr, int size) {////////////////////////int i, int j,

	int ki, kj, di, dj;
	di = 0;

	//PrintMatr(temp_arr, size);

	for (ki = 0; ki < size - 1; ki++) {
		if (ki == 0) {
			di = 1;
		}

		dj = 0;

		for (kj = 0; kj < size - 1; kj++) {
			if (kj == 0) {
				dj = 1;
			}
			temp_arr[ki][kj] = mass[ki + di][kj + dj];
		}
	}

	//PrintMatr(temp_arr, size);
}

float Det(float **mass, int size) {
	float det = 0;
	int k = 1;

	if (size < 1) {
		MessageBox::Show("Знайти визначник неможливо", "Вывод матрицы из файла");
	}
	else if (size == 1) {
		det = mass[0][0];
		return det;
	}
	else if (size == 2) {
		det = (mass[0][0] * mass[1][1]) - (mass[1][0] * mass[0][1]);///////////////////////////////////////////////////////
		return det;
	}
	else if (size > 2) {
		float *temp_arr = new float [size - 1];
		float **temp_arr2 = new float *[size];
		float **temp_arr3 = new float *[size];
		float **copy_temp_arr = new float *[size];

		for (int i = 0; i < size; i++) {
			temp_arr2[i] = new float[size];
			temp_arr3[i] = new float[size];
			copy_temp_arr[i] = new float[size];
		}

		/*for (int i = 0; i < size; i++) {
			Get_mass(mass, temp_arr, i, 0, size);
			//richTextBox1->Text += mass[i][0] + "\n";
			PrintMatr(temp_arr, size - 1);
			det = det + k * mass[i][0] * Det(temp_arr, size - 1);
			k = -k;
		}*/

		for (int i = 0; i < size; i++) {

			for (int i = 0; i < size; i++) {
				for (int q = 0; q < size; q++) {
					copy_temp_arr[i][q] = temp_arr2[i][q];
				}
			}

			int z;

			if (i == 0) {
				Get_mass(mass, temp_arr2, size);
				temp_arr[i] = mass[0][0];

				for (int ii = 0; ii < size - 1; ii++) {
					z = 1;
					for (int q = 0; q < size - 1; q++) {
						temp_arr2[ii][q] = ((temp_arr[i] * temp_arr2[ii][q]) - (mass[ii + 1][0] * mass[0][z])) / temp_arr[i];
						z++;
					}
				}
			} else if(i != size - 2){
				Get_mass(temp_arr2, temp_arr3, size - i);
				//PrintMatr(temp_arr3, size - i);
				temp_arr[i] = copy_temp_arr[0][0];

				for (int ii = 0; ii < size - 2; ii++) {
					z = 1;
					for (int q = 0; q < size - 2; q++) {
						temp_arr2[ii][q] = ((temp_arr[i] * temp_arr3[ii][q]) - (copy_temp_arr[ii + 1][0] * copy_temp_arr[0][z])) / temp_arr[i];
						z++;
					}
				}
				//PrintMatr(temp_arr2, size - i);
			} else if(i == size - 2) {
				//PrintMatr(temp_arr2, size);
				//PrintMatr(temp_arr3, size);
				Get_mass(temp_arr2, temp_arr3, size - i);
				//PrintMatr(temp_arr2, size);
				//PrintMatr(temp_arr3, size);
				temp_arr[i] = (temp_arr2[0][0] * temp_arr2[1][1]) - (temp_arr2[1][0] * temp_arr2[0][1]);
				break;
			}

		}

		for (int i = 0; i < size - 1; i++) {
			if (i == 0) {
				det = temp_arr[i];
			}
			else {
				det *= temp_arr[i];
			}
		}

		for (int i = 0; i < size; i++) {
			delete[] temp_arr2[i];
			delete[] temp_arr3[i];
			delete[] copy_temp_arr[i];
		}
		delete[] temp_arr;
		delete[] temp_arr2;
		delete[] temp_arr3;
		delete[] copy_temp_arr;
		temp_arr = nullptr;
		temp_arr2 = nullptr;
		temp_arr3 = nullptr;
		copy_temp_arr = nullptr;
	}

	return det;

}


	private: System::Void MyForm_Load(System::Object^  sender, System::EventArgs^  e) {
	}
	private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {

		    String ^fname;// объявление строковой переменной
			openFileDialog1->ShowDialog();//открываем диалоговое окно
			fname = openFileDialog1->FileName;
			string covertedFname = msclr::interop::marshal_as<string>(fname);
			
			ifstream in(covertedFname);

			if (in.is_open())
			{
				//Если открытие файла прошло успешно

				//Вначале посчитаем сколько чисел в файле
				int count = 0;// число чисел в файле
				int temp;//Временная переменная

				while (!in.eof())// пробегаем пока не встретим конец файла eof
				{
					in >> temp;//в пустоту считываем из файла числа
					count++;// увеличиваем счетчик числа чисел
				}

				//Число чисел посчитано, теперь нам нужно понять сколько
				//чисел в одной строке
				//Для этого посчитаем число пробелов до знака перевода на новую строку 

				//Вначале переведем каретку в потоке в начало файла
				in.seekg(0, ios::beg);
				in.clear();

				//Число пробелов в первой строчке вначале равно 0
				int count_space = 0;
				char symbol;
				while (!in.eof())//на всякий случай цикл ограничиваем концом файла
				{
					//теперь нам нужно считывать не числа, а посимвольно считывать данные
					in.get(symbol);//считали текущий символ
					if (symbol == ' ') count_space++;//Если это пробел, то число пробелов увеличиваем
					if (symbol == '\n') break;//Если дошли до конца строки, то выходим из цикла
				}

				//Опять переходим в потоке в начало файла
				in.seekg(0, ios::beg);
				in.clear();

				//Теперь мы знаем сколько чисел в файле и сколько пробелов в первой строке.
				//Теперь можем считать матрицу.

				int n = count / (count_space + 1);//число строк
				int m = count_space + 1;//число столбцов на единицу больше числа пробелов

				Obj1 = Matrix(n, m);
				//Obj1.Set(n, m);

				dataGridView1->Rows->Clear();
				dataGridView1->Columns->Clear();
				dataGridView1->Refresh();

				for (int i = 0; i < m; i++) {
					dataGridView1->Columns->Add("", "columns " + (i + 1).ToString());
				}
				
				for (int i = 0; i < n; i++) {
					dataGridView1->Rows->Add("", "");
				}

				//Считаем матрицу из файла
				float tempo;

				for (int i = 0; i < n; i++) {				
					for (int j = 0; j < m; j++){
						in >> tempo;
						dataGridView1->Rows[i]->Cells[j]->Value = tempo;						
						Obj1.setMatrix(i, j, tempo);
					}
				}

				//Выведем матрицу
				

				in.close();//под конец закроем файла

				/*array<String^>^ lines = gcnew array<String^>(dataGridView1->RowCount - (dataGridView1->AllowUserToAddRows ? 1 : 0)); // проверка тут
				array<String^>^ values = gcnew array<String^>(dataGridView1->ColumnCount);

				for (int i = 0; i < lines->Length;++i) //количество строк указывает размер массива
				{
					for (int j = 0; j < dataGridView1->ColumnCount; ++j)
						values[j] = (String^)dataGridView1->Rows[i]->Cells[j]->Value;
					lines[i] = String::Join(L" ", values);
				}
				IO::File::WriteAllLines("test.txt", lines, System::Text::Encoding::UTF8);*/


			} else {
				MessageBox::Show("неудачно", "Вывод матрицы из файла");
			}

	}
private: System::Void button3_Click(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void button4_Click(System::Object^  sender, System::EventArgs^  e) {
	Close();
}
private: System::Void button2_Click(System::Object^  sender, System::EventArgs^  e) {

	String ^fname;// объявление строковой переменной
	openFileDialog1->ShowDialog();//открываем диалоговое окно
	fname = openFileDialog1->FileName;
	string covertedFname = msclr::interop::marshal_as<string>(fname);

	ifstream in(covertedFname);

	if (in.is_open())
	{
		//Если открытие файла прошло успешно

		//Вначале посчитаем сколько чисел в файле
		int count = 0;// число чисел в файле
		int temp;//Временная переменная

		while (!in.eof())// пробегаем пока не встретим конец файла eof
		{
			in >> temp;//в пустоту считываем из файла числа
			count++;// увеличиваем счетчик числа чисел
		}

		//Число чисел посчитано, теперь нам нужно понять сколько
		//чисел в одной строке
		//Для этого посчитаем число пробелов до знака перевода на новую строку 

		//Вначале переведем каретку в потоке в начало файла
		in.seekg(0, ios::beg);
		in.clear();

		//Число пробелов в первой строчке вначале равно 0
		int count_space = 0;
		char symbol;
		while (!in.eof())//на всякий случай цикл ограничиваем концом файла
		{
			//теперь нам нужно считывать не числа, а посимвольно считывать данные
			in.get(symbol);//считали текущий символ
			if (symbol == ' ') count_space++;//Если это пробел, то число пробелов увеличиваем
			if (symbol == '\n') break;//Если дошли до конца строки, то выходим из цикла
		}

		//Опять переходим в потоке в начало файла
		in.seekg(0, ios::beg);
		in.clear();

		//Теперь мы знаем сколько чисел в файле и сколько пробелов в первой строке.
		//Теперь можем считать матрицу.

		int n = count / (count_space + 1);//число строк
		int m = count_space + 1;//число столбцов на единицу больше числа пробелов

		Obj2 = Matrix(n, m);
		//Obj2.Set(n, m);

		dataGridView2->Rows->Clear();
		dataGridView2->Columns->Clear();
		dataGridView2->Refresh();

		for (int i = 0; i < m; i++) {
			dataGridView2->Columns->Add("", "columns " + (i + 1).ToString());
		}

		for (int i = 0; i < n; i++) {
			dataGridView2->Rows->Add("", "");
		}

		//Считаем матрицу из файла

		float tempo;

		for (int i = 0; i < n; i++) {
			for (int j = 0; j < m; j++) {
				in >> tempo;
				dataGridView2->Rows[i]->Cells[j]->Value = tempo;						
				Obj2.setMatrix(i, j, tempo);
			}
		}

		//Выведем матрицу

		in.close();//под конец закроем файла

	} else {
		MessageBox::Show("неудачно", "Вывод матрицы из файла");
	}
}

private: System::Void button5_Click(System::Object^  sender, System::EventArgs^  e) {
	if (dataGridView1->ColumnCount != 0 && dataGridView2->ColumnCount != 0) {
		if((dataGridView1->ColumnCount == dataGridView2->ColumnCount) && (dataGridView1->RowCount == dataGridView2->RowCount)){

			dataGridView3->Rows->Clear();
			dataGridView3->Columns->Clear();
			dataGridView3->Refresh();
		
			string str1;
			double str2;
			for (int i = 0; i < dataGridView1->RowCount; i++) {

				for (int j = 0; j < dataGridView1->ColumnCount; j++) {
					str1 = msclr::interop::marshal_as<string>(dataGridView1->Rows[i]->Cells[j]->FormattedValue->ToString());
					str2 = atof(str1.c_str());

					if (Obj1.getMatrix(i, j) != str2){
					//str1 = dataGridView1->Rows[i]->Cells[j]->Value->ToString();
					//MessageBox::Show(str2.ToString(), "Вывод матрицы из файла");
						Obj1.setMatrix(i, j, (float)str2);
					}

					str1 = msclr::interop::marshal_as<string>(dataGridView2->Rows[i]->Cells[j]->FormattedValue->ToString());
					str2 = atof(str1.c_str());

					if (Obj2.getMatrix(i, j) != str2) {
						Obj2.setMatrix(i, j, (float)str2);
					}
				}
			}

			/*for (int i = 0; i < dataGridView2->RowCount; i++) {
				for (int j = 0; j < dataGridView2->ColumnCount; j++) {

					str1 = msclr::interop::marshal_as<string>(dataGridView2->Rows[i]->Cells[j]->FormattedValue->ToString());
					str2 = atof(str1.c_str());

					if (Obj2.getMatrix(i, j) != str2) {
						Obj2.setMatrix(i, j, (float)str2);
					} else {
						continue;
					}
				}
			}*/

			//Obj3.Set(dataGridView1->RowCount, dataGridView1->ColumnCount);

			Obj3 = Obj1 + Obj2;

			for (int i = 0; i < dataGridView1->RowCount; i++) {
				dataGridView3->Columns->Add("", "columns " + (i + 1).ToString());
			}

			for (int i = 0; i < dataGridView1->ColumnCount - 1; i++) {
				dataGridView3->Rows->Add("", "");
			}

			for (int i = 0; i < dataGridView1->RowCount; i++) {
				for (int j = 0; j < dataGridView1->ColumnCount; j++) {
					dataGridView3->Rows[i]->Cells[j]->Value = Obj3.getMatrix(i, j);					
				}
			}

		} else {
			MessageBox::Show("Матриці не однакові", "Вывод матрицы из файла");
		}
	} else {
		MessageBox::Show("Не введено обидві матриці", "Вывод матрицы из файла");
	}
}

private: System::Void button9_Click(System::Object^  sender, System::EventArgs^  e) {

	if(dataGridView1->RowCount != 0){
		if(dataGridView1->RowCount == dataGridView1->ColumnCount){
			float **mas = new float *[dataGridView1->ColumnCount];

			/*for (int i = 0; i < dataGridView1->ColumnCount; i++) {
				mas[i] = new float[dataGridView1->ColumnCount];
			}*/

			string str1;
			double str2;
			for (int i = 0; i < dataGridView1->RowCount; i++) {
				mas[i] = new float[dataGridView1->ColumnCount];
				for (int j = 0; j < dataGridView1->ColumnCount; j++) {
					str1 = msclr::interop::marshal_as<string>(dataGridView1->Rows[i]->Cells[j]->FormattedValue->ToString());
					str2 = atof(str1.c_str());
					//str1 = dataGridView1->Rows[i]->Cells[j]->Value->ToString();
					//MessageBox::Show(str2.ToString(), "Вывод матрицы из файла");
					mas[i][j] = (float)str2;
				}
			}

			/*for (int i = 0; i < dataGridView1->ColumnCount; i++) {
				for (int j = 0; j < dataGridView1->ColumnCount; j++) {
					mas[i][j] = Obj1.getMatrix(i, j);
				}
			}*/

			float d = Det(mas, dataGridView1->ColumnCount);

			MessageBox::Show("Детермінант матриці 1 = " + d.ToString(), "");

			for (int i; i < dataGridView1->ColumnCount; i++) {
				delete[] mas[i];
			}
			delete[] mas;
			mas = nullptr;

		} else {
			MessageBox::Show("Матриця 1 не квадратна", "Вывод матрицы из файла");
		}
		
	} else {
		MessageBox::Show("Не введено матрицю №1", "Вывод матрицы из файла");
	}
}

private: System::Void button6_Click(System::Object^  sender, System::EventArgs^  e) {
	if (dataGridView1->ColumnCount != 0 && dataGridView2->ColumnCount != 0) {
		if ((dataGridView1->ColumnCount == dataGridView2->ColumnCount) && (dataGridView1->RowCount == dataGridView2->RowCount)) {
			dataGridView3->Rows->Clear();
			dataGridView3->Columns->Clear();
			dataGridView3->Refresh();

			string str1;
			double str2;
			for (int i = 0; i < dataGridView1->RowCount; i++) {
				for (int j = 0; j < dataGridView1->ColumnCount; j++) {
					str1 = msclr::interop::marshal_as<string>(dataGridView1->Rows[i]->Cells[j]->FormattedValue->ToString());
					str2 = atof(str1.c_str());
					//str1 = dataGridView1->Rows[i]->Cells[j]->Value->ToString();
					//MessageBox::Show(str2.ToString(), "Вывод матрицы из файла");
					if (Obj1.getMatrix(i, j) != str2) {
						Obj1.setMatrix(i, j, (float)str2);
					}

					str1 = msclr::interop::marshal_as<string>(dataGridView2->Rows[i]->Cells[j]->FormattedValue->ToString());
					str2 = atof(str1.c_str());

					if (Obj2.getMatrix(i, j) != str2) {
						Obj2.setMatrix(i, j, (float)str2);
					}
				}
			}

			/*for (int i = 0; i < dataGridView2->RowCount; i++) {
				for (int j = 0; j < dataGridView2->ColumnCount; j++) {
					str1 = msclr::interop::marshal_as<string>(dataGridView2->Rows[i]->Cells[j]->FormattedValue->ToString());
					str2 = atof(str1.c_str());

					if (Obj2.getMatrix(i, j) != str2) {
						Obj2.setMatrix(i, j, (float)str2);
					} else {
						continue;
					}
				}
			}*/

			//Obj3.Set(dataGridView1->RowCount, dataGridView1->ColumnCount);

			Obj3 = Obj1 - Obj2;


			for (int i = 0; i < dataGridView1->RowCount; i++) {
				dataGridView3->Columns->Add("", "columns " + (i + 1).ToString());
			}


			for (int i = 0; i < dataGridView1->ColumnCount - 1; i++) {
				dataGridView3->Rows->Add("", "");
			}

			for (int i = 0; i < dataGridView1->RowCount; i++) {
				for (int j = 0; j < dataGridView1->ColumnCount; j++) {
					dataGridView3->Rows[i]->Cells[j]->Value = Obj3.getMatrix(i, j);
				}
			}

		} else {
			MessageBox::Show("Матриці не однакові", "Вывод матрицы из файла");
		}
	} else {
		MessageBox::Show("Не введено обидві матриці", "Вывод матрицы из файла");
	}
}

private: System::Void button7_Click(System::Object^  sender, System::EventArgs^  e) {
	if (dataGridView1->ColumnCount != 0 && dataGridView2->ColumnCount != 0) {
		if (dataGridView1->ColumnCount == dataGridView2->RowCount) {

			dataGridView3->Rows->Clear();
			dataGridView3->Columns->Clear();
			dataGridView3->Refresh();

			string str1;
			double str2;
			for (int i = 0; i < dataGridView1->RowCount; i++) {
				for (int j = 0; j < dataGridView1->ColumnCount; j++) {
					str1 = msclr::interop::marshal_as<string>(dataGridView1->Rows[i]->Cells[j]->FormattedValue->ToString());
					str2 = atof(str1.c_str());
					//str1 = dataGridView1->Rows[i]->Cells[j]->Value->ToString();
					//MessageBox::Show(str2.ToString(), "Вывод матрицы из файла");
					if (Obj1.getMatrix(i, j) != str2) {
						Obj1.setMatrix(i, j, (float)str2);
					}

					str1 = msclr::interop::marshal_as<string>(dataGridView2->Rows[i]->Cells[j]->FormattedValue->ToString());
					str2 = atof(str1.c_str());
					if (Obj2.getMatrix(i, j) != str2) {
						Obj2.setMatrix(i, j, (float)str2);
					}
				}
			}

			/*for (int i = 0; i < dataGridView2->RowCount; i++) {
				for (int j = 0; j < dataGridView2->ColumnCount; j++) {
					str1 = msclr::interop::marshal_as<string>(dataGridView2->Rows[i]->Cells[j]->FormattedValue->ToString());
					str2 = atof(str1.c_str());
					if (Obj2.getMatrix(i, j) != str2) {
						Obj2.setMatrix(i, j, (float)str2);
					}
					else {
						continue;
					}
				}
			}*/

			//Obj3.Set(dataGridView1->RowCount, dataGridView1->ColumnCount);

			Obj3 = Obj1 * Obj2;

			for (int i = 0; i < dataGridView1->RowCount; i++) {
				dataGridView3->Columns->Add("", "columns " + (i + 1).ToString());
			}


			for (int i = 0; i < dataGridView1->ColumnCount - 1; i++) {
				dataGridView3->Rows->Add("", "");
			}

			//b = (XX)-1 * X * Y

			for (int i = 0; i < dataGridView1->RowCount; i++) {
				for (int j = 0; j < dataGridView1->ColumnCount; j++) {
					dataGridView3->Rows[i]->Cells[j]->Value = Obj3.getMatrix(i, j);
				}
			}
		} else {
			MessageBox::Show("Множення матриць неможливе, так як кількість стовпців першої матриці(" + dataGridView1->ColumnCount.ToString()
				+ ") не дорівнює кількості рядків другої матриці(" + dataGridView2->RowCount.ToString() + ")", "Вывод матрицы из файла");
		}

	} else {
		MessageBox::Show("Не введено обидві матриці", "Вывод матрицы из файла");
	}
}
private: System::Void button8_Click(System::Object^  sender, System::EventArgs^  e) {
	if (dataGridView1->ColumnCount != 0 && dataGridView2->ColumnCount != 0) {
		if (dataGridView1->ColumnCount == dataGridView2->RowCount) {
			dataGridView3->Rows->Clear();
			dataGridView3->Columns->Clear();
			dataGridView3->Refresh();

			string str1;
			double str2;
			for (int i = 0; i < dataGridView1->RowCount; i++) {
				for (int j = 0; j < dataGridView1->ColumnCount; j++) {
					str1 = msclr::interop::marshal_as<string>(dataGridView1->Rows[i]->Cells[j]->FormattedValue->ToString());
					str2 = atof(str1.c_str());
					//str1 = dataGridView1->Rows[i]->Cells[j]->Value->ToString();
					//MessageBox::Show(str2.ToString(), "Вывод матрицы из файла");
					if (Obj1.getMatrix(i, j) != str2) {
						Obj1.setMatrix(i, j, (float)str2);
					}

					str1 = msclr::interop::marshal_as<string>(dataGridView2->Rows[i]->Cells[j]->FormattedValue->ToString());
					str2 = atof(str1.c_str());

					if (Obj2.getMatrix(i, j) != str2) {
						Obj2.setMatrix(i, j, (float)str2);
					}
				}
			}

			/*for (int i = 0; i < dataGridView2->RowCount; i++) {
				for (int j = 0; j < dataGridView2->ColumnCount; j++) {
					str1 = msclr::interop::marshal_as<string>(dataGridView2->Rows[i]->Cells[j]->FormattedValue->ToString());
					str2 = atof(str1.c_str());
					Obj2.setMatrix(i, j, (float)str2);
				}
			}*/

			//Obj3.Set(dataGridView1->RowCount, dataGridView1->ColumnCount);

			Obj3 = Obj1 * Obj2;

			for (int i = 0; i < dataGridView1->RowCount; i++) {
				dataGridView3->Columns->Add("", "columns " + (i + 1).ToString());
			}


			for (int i = 0; i < dataGridView1->ColumnCount - 1; i++) {
				dataGridView3->Rows->Add("", "");
			}

			for (int i = 0; i < dataGridView1->RowCount; i++) {
				for (int j = 0; j < dataGridView1->ColumnCount; j++) {
					dataGridView3->Rows[i]->Cells[j]->Value = Obj3.getMatrix(i, j);
				}
			}

		} else {
			MessageBox::Show("Множення матриць неможливе, так як кількість стовпців першої матриці(" + dataGridView1->ColumnCount.ToString()
				+ ") не дорівнює кількості рядків другої матриці(" + dataGridView2->RowCount.ToString() + ")", "Вывод матрицы из файла");
		}
	} else {
		MessageBox::Show("Не введено обидві матриці", "Вывод матрицы из файла");
	}
}

private: System::Void button10_Click(System::Object^  sender, System::EventArgs^  e) {

	if (dataGridView2->RowCount != 0) {
		if (dataGridView1->RowCount == dataGridView1->ColumnCount) {
			float **mas = new float *[dataGridView2->ColumnCount];

			for (int i = 0; i < dataGridView2->ColumnCount; i++) {
				mas[i] = new float[dataGridView2->ColumnCount];
			}

			string str1;
			double str2;

			for (int i = 0; i < dataGridView2->RowCount; i++) {
				for (int j = 0; j < dataGridView2->ColumnCount; j++) {
					str1 = msclr::interop::marshal_as<string>(dataGridView2->Rows[i]->Cells[j]->FormattedValue->ToString());
					str2 = atof(str1.c_str());
					mas[i][j] = (float)str2;
				}
			}

			/*for (int i = 0; i < dataGridView2->ColumnCount; i++) {
				for (int j = 0; j < dataGridView2->ColumnCount; j++) {
					mas[i][j] = Obj2.getMatrix(i, j);
				}
			}*/

			float d = Det(mas, dataGridView2->ColumnCount);

			MessageBox::Show("Детермінант матриці 2 = " + d.ToString(), "");

			for (int i; i < dataGridView2->ColumnCount; i++) {
				delete[] mas[i];
			}
			delete[] mas;
			mas = nullptr;
		} else {
			MessageBox::Show("Матриця 2 не квадратна", "Вывод матрицы из файла");
		}

	} else {
		MessageBox::Show("Не введено матрицю №2", "Вывод матрицы из файла");
	}
}

private: System::Void button11_Click(System::Object^  sender, System::EventArgs^  e) {
	if (dataGridView1->ColumnCount != 0 && dataGridView2->ColumnCount != 0) {
		if ((dataGridView1->ColumnCount == dataGridView2->ColumnCount) && (dataGridView1->RowCount == dataGridView2->RowCount)) {

			dataGridView3->Rows->Clear();
			dataGridView3->Columns->Clear();
			dataGridView3->Refresh();

			/*for (int i = 0; i < dataGridView1->RowCount; i++) {

				for (int j = 0; j < dataGridView1->ColumnCount; j++) {
					str1 = msclr::interop::marshal_as<string>(dataGridView1->Rows[i]->Cells[j]->FormattedValue->ToString());
					str2 = atof(str1.c_str());

					if (Obj1.getMatrix(i, j) != str2) {
						Obj1.setMatrix(i, j, (float)str2);
					}

					str1 = msclr::interop::marshal_as<string>(dataGridView2->Rows[i]->Cells[j]->FormattedValue->ToString());
					str2 = atof(str1.c_str());

					if (Obj2.getMatrix(i, j) != str2) {
						Obj2.setMatrix(i, j, (float)str2);
					}
				}
			}*/

			Obj3 = Obj1 + Obj2;

			for (int i = 0; i < dataGridView1->RowCount; i++) {
				dataGridView3->Columns->Add("", "columns " + (i + 1).ToString());
			}

			for (int i = 0; i < dataGridView1->ColumnCount - 1; i++) {
				dataGridView3->Rows->Add("", "");
			}

			for (int i = 0; i < dataGridView1->RowCount; i++) {
				for (int j = 0; j < dataGridView1->ColumnCount; j++) {
					dataGridView3->Rows[i]->Cells[j]->Value = Obj3.getMatrix(i, j);
				}
			}

		}
		else {
			MessageBox::Show("Матриці не однакові", "Вывод матрицы из файла");
		}
	}
	else {
		MessageBox::Show("Не введено обидві матриці", "Вывод матрицы из файла");
	}
}
private: System::Void button15_Click(System::Object^  sender, System::EventArgs^  e) {
	String ^fname;// объявление строковой переменной
	openFileDialog1->ShowDialog();//открываем диалоговое окно
	fname = openFileDialog1->FileName;
	string covertedFname = msclr::interop::marshal_as<string>(fname);

	ifstream in(covertedFname);

	if (in.is_open())
	{
		//Если открытие файла прошло успешно

		//Вначале посчитаем сколько чисел в файле
		int count = 0;// число чисел в файле
		int temp;//Временная переменная

		while (!in.eof())// пробегаем пока не встретим конец файла eof
		{
			in >> temp;//в пустоту считываем из файла числа
			count++;// увеличиваем счетчик числа чисел
		}

		//Число чисел посчитано, теперь нам нужно понять сколько
		//чисел в одной строке
		//Для этого посчитаем число пробелов до знака перевода на новую строку 

		//Вначале переведем каретку в потоке в начало файла
		in.seekg(0, ios::beg);
		in.clear();

		//Число пробелов в первой строчке вначале равно 0
		int count_space = 0;
		char symbol;
		while (!in.eof())//на всякий случай цикл ограничиваем концом файла
		{
			//теперь нам нужно считывать не числа, а посимвольно считывать данные
			in.get(symbol);//считали текущий символ
			if (symbol == ' ') count_space++;//Если это пробел, то число пробелов увеличиваем
			if (symbol == '\n') break;//Если дошли до конца строки, то выходим из цикла
		}

		//Опять переходим в потоке в начало файла
		in.seekg(0, ios::beg);
		in.clear();

		//Теперь мы знаем сколько чисел в файле и сколько пробелов в первой строке.
		//Теперь можем считать матрицу.

		int n = count / (count_space + 1);//число строк
		int m = count_space + 1;//число столбцов на единицу больше числа пробелов

		//Obj1.Set(n, m);
		

		dataGridView1->Rows->Clear();
		dataGridView1->Columns->Clear();
		dataGridView1->Refresh();

		for (int i = 0; i < m; i++) {
			dataGridView1->Columns->Add("", "columns " + (i + 1).ToString());
		}

		for (int i = 0; i < n; i++) {
			dataGridView1->Rows->Add("", "");
		}

		//Считаем матрицу из файла
		float tempo;
		float **C = new float*[n];

		for (int i = 0; i < n; i++) {
			C[i] = new float[m];
			for (int j = 0; j < m; j++) {
				in >> tempo;
				dataGridView1->Rows[i]->Cells[j]->Value = tempo;
				C[i][j] = tempo;
				//Obj1.setMatrix(i, j, tempo);
			}
		}

		/*string str1;
		float str2;
		float **C;
		C = new float*[dataGridView1->RowCount];

		for (int i = 0; i < dataGridView1->RowCount; i++) {
			C[i] = new float[dataGridView1->ColumnCount];
			for (int j = 0; j < dataGridView1->ColumnCount; j++) {
				str1 = msclr::interop::marshal_as<string>(dataGridView1->Rows[i]->Cells[j]->FormattedValue->ToString());
				str2 = atof(str1.c_str());

				C[i][j] = str2;
			}
		}*/

		Obj1 = Matrix(n, m, C);

		for (int i = 0; i < dataGridView1->RowCount; i++) {
			delete[] C[i];
		}
		delete[] C;
		C = nullptr;

		//Выведем матрицу


		in.close();//под конец закроем файла


	} else {
		MessageBox::Show("неудачно", "Вывод матрицы из файла");
	}
}
private: System::Void button16_Click(System::Object^  sender, System::EventArgs^  e) {
	String ^fname;// объявление строковой переменной
	openFileDialog1->ShowDialog();//открываем диалоговое окно
	fname = openFileDialog1->FileName;
	string covertedFname = msclr::interop::marshal_as<string>(fname);

	ifstream in(covertedFname);

	if (in.is_open())
	{
		//Если открытие файла прошло успешно

		//Вначале посчитаем сколько чисел в файле
		int count = 0;// число чисел в файле
		int temp;//Временная переменная

		while (!in.eof())// пробегаем пока не встретим конец файла eof
		{
			in >> temp;//в пустоту считываем из файла числа
			count++;// увеличиваем счетчик числа чисел
		}

		//Число чисел посчитано, теперь нам нужно понять сколько
		//чисел в одной строке
		//Для этого посчитаем число пробелов до знака перевода на новую строку 

		//Вначале переведем каретку в потоке в начало файла
		in.seekg(0, ios::beg);
		in.clear();

		//Число пробелов в первой строчке вначале равно 0
		int count_space = 0;
		char symbol;
		while (!in.eof())//на всякий случай цикл ограничиваем концом файла
		{
			//теперь нам нужно считывать не числа, а посимвольно считывать данные
			in.get(symbol);//считали текущий символ
			if (symbol == ' ') count_space++;//Если это пробел, то число пробелов увеличиваем
			if (symbol == '\n') break;//Если дошли до конца строки, то выходим из цикла
		}

		//Опять переходим в потоке в начало файла
		in.seekg(0, ios::beg);
		in.clear();

		//Теперь мы знаем сколько чисел в файле и сколько пробелов в первой строке.
		//Теперь можем считать матрицу.

		int n = count / (count_space + 1);//число строк
		int m = count_space + 1;//число столбцов на единицу больше числа пробелов

		//Obj1.Set(n, m);


		dataGridView2->Rows->Clear();
		dataGridView2->Columns->Clear();
		dataGridView2->Refresh();

		for (int i = 0; i < m; i++) {
			dataGridView2->Columns->Add("", "columns " + (i + 1).ToString());
		}

		for (int i = 0; i < n; i++) {
			dataGridView2->Rows->Add("", "");
		}

		//Считаем матрицу из файла
		float tempo;
		float **C = new float*[n];

		for (int i = 0; i < n; i++) {
			C[i] = new float[m];
			for (int j = 0; j < m; j++) {
				in >> tempo;
				dataGridView2->Rows[i]->Cells[j]->Value = tempo;
				C[i][j] = tempo;
			}
		}


		Obj2 = Matrix(n, m, C);

		for (int i = 0; i < n; i++) {
			delete[] C[i];
		}
		delete[] C;
		C = nullptr;

		//Выведем матрицу


		in.close();//под конец закроем файла


	} else {
		MessageBox::Show("неудачно", "Вывод матрицы из файла");
	}
}
private: System::Void button12_Click(System::Object^  sender, System::EventArgs^  e) {
	if (dataGridView1->ColumnCount != 0 && dataGridView2->ColumnCount != 0) {
		if ((dataGridView1->ColumnCount == dataGridView2->ColumnCount) && (dataGridView1->RowCount == dataGridView2->RowCount)) {

			dataGridView3->Rows->Clear();
			dataGridView3->Columns->Clear();
			dataGridView3->Refresh();

			Obj3 = Obj1 - Obj2;

			for (int i = 0; i < dataGridView1->RowCount; i++) {
				dataGridView3->Columns->Add("", "columns " + (i + 1).ToString());
			}

			for (int i = 0; i < dataGridView1->ColumnCount - 1; i++) {
				dataGridView3->Rows->Add("", "");
			}

			for (int i = 0; i < dataGridView1->RowCount; i++) {
				for (int j = 0; j < dataGridView1->ColumnCount; j++) {
					dataGridView3->Rows[i]->Cells[j]->Value = Obj3.getMatrix(i, j);
				}
			}

		} else {
			MessageBox::Show("Матриці не однакові", "Вывод матрицы из файла");
		}
	} else {
		MessageBox::Show("Не введено обидві матриці", "Вывод матрицы из файла");
	}
}
private: System::Void button13_Click(System::Object^  sender, System::EventArgs^  e) {
	if (dataGridView1->ColumnCount != 0 && dataGridView2->ColumnCount != 0) {
		if ((dataGridView1->ColumnCount == dataGridView2->ColumnCount) && (dataGridView1->RowCount == dataGridView2->RowCount)) {

			dataGridView3->Rows->Clear();
			dataGridView3->Columns->Clear();
			dataGridView3->Refresh();

			Obj3 = Obj1 * Obj2;

			for (int i = 0; i < dataGridView1->RowCount; i++) {
				dataGridView3->Columns->Add("", "columns " + (i + 1).ToString());
			}

			for (int i = 0; i < dataGridView1->ColumnCount - 1; i++) {
				dataGridView3->Rows->Add("", "");
			}

			for (int i = 0; i < dataGridView1->RowCount; i++) {
				for (int j = 0; j < dataGridView1->ColumnCount; j++) {
					dataGridView3->Rows[i]->Cells[j]->Value = Obj3.getMatrix(i, j);
				}
			}

		}
		else {
			MessageBox::Show("Матриці не однакові", "Вывод матрицы из файла");
		}
	}
	else {
		MessageBox::Show("Не введено обидві матриці", "Вывод матрицы из файла");
	}
}
};


}
