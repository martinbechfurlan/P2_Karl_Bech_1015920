#pragma once
#include "Lista.h";
#include "Nodo.h";
#include "NumMin.h";
#include "Ordenar.h";
#include "Buscador.h"
namespace P2KarlBech1015920 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Panel^ panel1;
	protected:

	private: System::Windows::Forms::Button^ button7;
	private: System::Windows::Forms::TextBox^ textBox9;
	private: System::Windows::Forms::Label^ label17;
	private: System::Windows::Forms::Label^ label16;
	private: System::Windows::Forms::Label^ label15;
	private: System::Windows::Forms::Button^ button5;
	private: System::Windows::Forms::Button^ button6;
	private: System::Windows::Forms::Label^ label14;
	private: System::Windows::Forms::Label^ label13;

	private: System::Windows::Forms::Label^ label11;
	private: System::Windows::Forms::Label^ label10;

	private: System::Windows::Forms::Button^ button4;
	private: System::Windows::Forms::Label^ label8;
	private: System::Windows::Forms::TextBox^ textBox8;
	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::TextBox^ textBox7;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::TextBox^ textBox4;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::TextBox^ textBox5;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::TextBox^ textBox6;
	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::TextBox^ textBox3;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::TextBox^ textBox2;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::TextBox^ textBox10;
	private: System::Windows::Forms::Label^ label9;

	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->button7 = (gcnew System::Windows::Forms::Button());
			this->textBox9 = (gcnew System::Windows::Forms::TextBox());
			this->label17 = (gcnew System::Windows::Forms::Label());
			this->label16 = (gcnew System::Windows::Forms::Label());
			this->label15 = (gcnew System::Windows::Forms::Label());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->button6 = (gcnew System::Windows::Forms::Button());
			this->label14 = (gcnew System::Windows::Forms::Label());
			this->label13 = (gcnew System::Windows::Forms::Label());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->textBox8 = (gcnew System::Windows::Forms::TextBox());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->textBox7 = (gcnew System::Windows::Forms::TextBox());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->textBox4 = (gcnew System::Windows::Forms::TextBox());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->textBox5 = (gcnew System::Windows::Forms::TextBox());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->textBox6 = (gcnew System::Windows::Forms::TextBox());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->textBox10 = (gcnew System::Windows::Forms::TextBox());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->panel1->SuspendLayout();
			this->SuspendLayout();
			// 
			// panel1
			// 
			this->panel1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(255)),
				static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->panel1->Controls->Add(this->label9);
			this->panel1->Controls->Add(this->button7);
			this->panel1->Controls->Add(this->textBox9);
			this->panel1->Controls->Add(this->label17);
			this->panel1->Controls->Add(this->label16);
			this->panel1->Location = System::Drawing::Point(256, 254);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(200, 147);
			this->panel1->TabIndex = 59;
			// 
			// button7
			// 
			this->button7->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(192)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
				static_cast<System::Int32>(static_cast<System::Byte>(255)));
			this->button7->Enabled = false;
			this->button7->Location = System::Drawing::Point(131, 35);
			this->button7->Name = L"button7";
			this->button7->Size = System::Drawing::Size(55, 23);
			this->button7->TabIndex = 3;
			this->button7->Text = L"Buscar";
			this->button7->UseVisualStyleBackColor = false;
			this->button7->Click += gcnew System::EventHandler(this, &MyForm::button7_Click);
			// 
			// textBox9
			// 
			this->textBox9->Location = System::Drawing::Point(15, 35);
			this->textBox9->Name = L"textBox9";
			this->textBox9->Size = System::Drawing::Size(100, 20);
			this->textBox9->TabIndex = 2;
			// 
			// label17
			// 
			this->label17->AutoSize = true;
			this->label17->Location = System::Drawing::Point(12, 65);
			this->label17->Name = L"label17";
			this->label17->Size = System::Drawing::Size(58, 13);
			this->label17->TabIndex = 1;
			this->label17->Text = L"Info. Bahia";
			// 
			// label16
			// 
			this->label16->AutoSize = true;
			this->label16->Location = System::Drawing::Point(12, 12);
			this->label16->Name = L"label16";
			this->label16->Size = System::Drawing::Size(94, 13);
			this->label16->TabIndex = 0;
			this->label16->Text = L"Buscar Info Bahia:";
			// 
			// label15
			// 
			this->label15->AutoSize = true;
			this->label15->Location = System::Drawing::Point(90, 188);
			this->label15->Name = L"label15";
			this->label15->Size = System::Drawing::Size(134, 13);
			this->label15->TabIndex = 58;
			this->label15->Text = L"Desea ingresar otra bahia\?";
			// 
			// button5
			// 
			this->button5->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(192)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
				static_cast<System::Int32>(static_cast<System::Byte>(255)));
			this->button5->Enabled = false;
			this->button5->Location = System::Drawing::Point(572, 189);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(33, 23);
			this->button5->TabIndex = 57;
			this->button5->Text = L"No";
			this->button5->UseVisualStyleBackColor = false;
			this->button5->Click += gcnew System::EventHandler(this, &MyForm::button5_Click);
			// 
			// button6
			// 
			this->button6->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(192)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
				static_cast<System::Int32>(static_cast<System::Byte>(255)));
			this->button6->Enabled = false;
			this->button6->Location = System::Drawing::Point(611, 189);
			this->button6->Name = L"button6";
			this->button6->Size = System::Drawing::Size(33, 23);
			this->button6->TabIndex = 56;
			this->button6->Text = L"Si";
			this->button6->UseVisualStyleBackColor = false;
			this->button6->Click += gcnew System::EventHandler(this, &MyForm::button6_Click);
			// 
			// label14
			// 
			this->label14->AutoSize = true;
			this->label14->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label14->Location = System::Drawing::Point(446, 30);
			this->label14->Name = L"label14";
			this->label14->Size = System::Drawing::Size(226, 16);
			this->label14->TabIndex = 55;
			this->label14->Text = L"Llene los datos de cargamento:";
			// 
			// label13
			// 
			this->label13->AutoSize = true;
			this->label13->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label13->Location = System::Drawing::Point(75, 84);
			this->label13->Name = L"label13";
			this->label13->Size = System::Drawing::Size(204, 16);
			this->label13->TabIndex = 54;
			this->label13->Text = L"Llene los datos de la bahia: ";
			// 
			// label11
			// 
			this->label11->AutoSize = true;
			this->label11->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(192)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
				static_cast<System::Int32>(static_cast<System::Byte>(255)));
			this->label11->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label11->Location = System::Drawing::Point(85, 21);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(155, 25);
			this->label11->TabIndex = 52;
			this->label11->Text = L"Ingreso Bahias";
			this->label11->Click += gcnew System::EventHandler(this, &MyForm::label11_Click);
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->Location = System::Drawing::Point(416, 194);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(150, 13);
			this->label10->TabIndex = 51;
			this->label10->Text = L"Desea ingresar otro producto\?";
			// 
			// button4
			// 
			this->button4->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(192)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
				static_cast<System::Int32>(static_cast<System::Byte>(255)));
			this->button4->Location = System::Drawing::Point(617, 160);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(99, 23);
			this->button4->TabIndex = 49;
			this->button4->Text = L"Ingresar";
			this->button4->UseVisualStyleBackColor = false;
			this->button4->Click += gcnew System::EventHandler(this, &MyForm::button4_Click);
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Location = System::Drawing::Point(376, 165);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(124, 13);
			this->label8->TabIndex = 48;
			this->label8->Text = L"Nombre del responsable:";
			// 
			// textBox8
			// 
			this->textBox8->Enabled = false;
			this->textBox8->Location = System::Drawing::Point(511, 162);
			this->textBox8->Name = L"textBox8";
			this->textBox8->Size = System::Drawing::Size(100, 20);
			this->textBox8->TabIndex = 47;
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Location = System::Drawing::Point(460, 143);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(40, 13);
			this->label7->TabIndex = 46;
			this->label7->Text = L"Fecha:";
			// 
			// textBox7
			// 
			this->textBox7->Enabled = false;
			this->textBox7->Location = System::Drawing::Point(511, 136);
			this->textBox7->Name = L"textBox7";
			this->textBox7->Size = System::Drawing::Size(100, 20);
			this->textBox7->TabIndex = 45;
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(411, 87);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(89, 13);
			this->label4->TabIndex = 44;
			this->label4->Text = L"Cantidad unitaria:";
			// 
			// textBox4
			// 
			this->textBox4->Enabled = false;
			this->textBox4->Location = System::Drawing::Point(511, 58);
			this->textBox4->Name = L"textBox4";
			this->textBox4->Size = System::Drawing::Size(100, 20);
			this->textBox4->TabIndex = 43;
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(411, 61);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(94, 13);
			this->label5->TabIndex = 42;
			this->label5->Text = L"Tipo de producto: ";
			// 
			// textBox5
			// 
			this->textBox5->Enabled = false;
			this->textBox5->Location = System::Drawing::Point(511, 84);
			this->textBox5->Name = L"textBox5";
			this->textBox5->Size = System::Drawing::Size(100, 20);
			this->textBox5->TabIndex = 41;
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(434, 113);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(71, 13);
			this->label6->TabIndex = 40;
			this->label6->Text = L"Peso unitario:";
			// 
			// textBox6
			// 
			this->textBox6->Enabled = false;
			this->textBox6->Location = System::Drawing::Point(511, 110);
			this->textBox6->Name = L"textBox6";
			this->textBox6->Size = System::Drawing::Size(100, 20);
			this->textBox6->TabIndex = 39;
			// 
			// button3
			// 
			this->button3->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(192)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
				static_cast<System::Int32>(static_cast<System::Byte>(255)));
			this->button3->Enabled = false;
			this->button3->Location = System::Drawing::Point(246, 188);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(33, 23);
			this->button3->TabIndex = 38;
			this->button3->Text = L"No";
			this->button3->UseVisualStyleBackColor = false;
			this->button3->Click += gcnew System::EventHandler(this, &MyForm::button3_Click);
			// 
			// button2
			// 
			this->button2->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(192)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
				static_cast<System::Int32>(static_cast<System::Byte>(255)));
			this->button2->Enabled = false;
			this->button2->Location = System::Drawing::Point(285, 188);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(33, 23);
			this->button2->TabIndex = 37;
			this->button2->Text = L"Si";
			this->button2->UseVisualStyleBackColor = false;
			this->button2->Click += gcnew System::EventHandler(this, &MyForm::button2_Click);
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(62, 139);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(72, 13);
			this->label3->TabIndex = 36;
			this->label3->Text = L"Peso maximo:";
			// 
			// textBox3
			// 
			this->textBox3->Location = System::Drawing::Point(140, 156);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(100, 20);
			this->textBox3->TabIndex = 35;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(40, 159);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(94, 13);
			this->label2->TabIndex = 34;
			this->label2->Text = L"Tipo de producto: ";
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(140, 130);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(100, 20);
			this->textBox2->TabIndex = 33;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(26, 107);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(108, 13);
			this->label1->TabIndex = 32;
			this->label1->Text = L"Posicion de la bahia: ";
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(140, 104);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(100, 20);
			this->textBox1->TabIndex = 31;
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(192)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
				static_cast<System::Int32>(static_cast<System::Byte>(255)));
			this->button1->Location = System::Drawing::Point(246, 154);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(90, 23);
			this->button1->TabIndex = 30;
			this->button1->Text = L"Ingresar";
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// textBox10
			// 
			this->textBox10->Location = System::Drawing::Point(505, 254);
			this->textBox10->Multiline = true;
			this->textBox10->Name = L"textBox10";
			this->textBox10->Size = System::Drawing::Size(204, 147);
			this->textBox10->TabIndex = 60;
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Location = System::Drawing::Point(12, 88);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(10, 13);
			this->label9->TabIndex = 4;
			this->label9->Text = L".";
			this->label9->Click += gcnew System::EventHandler(this, &MyForm::label9_Click);
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(255)),
				static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->ClientSize = System::Drawing::Size(721, 413);
			this->Controls->Add(this->textBox10);
			this->Controls->Add(this->panel1);
			this->Controls->Add(this->label15);
			this->Controls->Add(this->button5);
			this->Controls->Add(this->button6);
			this->Controls->Add(this->label14);
			this->Controls->Add(this->label13);
			this->Controls->Add(this->label11);
			this->Controls->Add(this->label10);
			this->Controls->Add(this->button4);
			this->Controls->Add(this->label8);
			this->Controls->Add(this->textBox8);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->textBox7);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->textBox4);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->textBox5);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->textBox6);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->textBox3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->button1);
			this->Name = L"MyForm";
			this->Text = L"MyForm";
			this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
			this->panel1->ResumeLayout(false);
			this->panel1->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
		public:
		Lista^ bahias = gcnew Lista();
		Lista^ bahias2 = gcnew Lista();
		Lista^ Producto = gcnew Lista();
		Lista^ Bodega = gcnew Lista();
		Lista^ BodegaCopy = gcnew Lista();
		Lista^ Entradas = gcnew Lista();
		Lista^ NoEntradas = gcnew Lista();
		Ordenar^ orden = gcnew Ordenar();
		Lista^ lisOrdenada = gcnew Lista;
		int cantBahias = 0;
	private: System::Void label11_Click(System::Object^ sender, System::EventArgs^ e) {
	}
private: System::Void MyForm_Load(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
	this->button2->Enabled = true;
	this->button3->Enabled = true;

	this->button1->Enabled = false;
	this->textBox2->Enabled = false;
	this->textBox1->Enabled = false;
	this->textBox3->Enabled = false;
	int* nums = new int[1000];


	String^ PosBahia = textBox1->Text;
	String^ TiposProducto = textBox2->Text;
	int PesoMAx = int::Parse(textBox3->Text);
	int CantProductos = TiposProducto->Length - 1;

	int FilaNum = 0;
	int PosCompletaOrden = 0;
	String^ Filas = PosBahia->Substring(0, 1);
	int Columnas = int::Parse(PosBahia->Substring(1, 1));
	Filas = Filas->ToUpper();

	if (Filas == "A")
		Filas = "1";
	else if (Filas == "B")
		Filas = "2";
	else if (Filas == "C")
		Filas = "3";
	else if (Filas == "D")
		Filas = "4";
	else if (Filas == "E")
		Filas = "5";
	else if (Filas == "F")
		Filas = "6";
	else if (Filas == "G")
		Filas = "7";
	else if (Filas == "H")
		Filas = "8";
	else if (Filas == "I")
		Filas = "9";
	else if (Filas == "J")
		Filas = "10";
	else if (Filas == "K")
		Filas = "11";
	else if (Filas == "L")
		Filas = "12";
	else if (Filas == "M")
		Filas = "13";
	else if (Filas == "N")
		Filas = "14";
	else if (Filas == "Ñ")
		Filas = "15";
	else if (Filas == "O")
		Filas = "16";
	else if (Filas == "P")
		Filas = "17";
	else if (Filas == "Q")
		Filas = "18";
	else if (Filas == "R")
		Filas = "19";
	else if (Filas == "S")
		Filas = "20";
	else if (Filas == "T")
		Filas = "21";
	else if (Filas == "U")
		Filas = "22";
	else if (Filas == "V")
		Filas = "23";
	else if (Filas == "W")
		Filas = "24";
	else if (Filas == "X")
		Filas = "25";
	else if (Filas == "Y")
		Filas = "26";
	else if (Filas == "Z")
		Filas = "27";

	FilaNum = int::Parse(Filas) * 10;
	PosCompletaOrden = FilaNum + Columnas;

	String^ InfoBahia = PosBahia + "-" + TiposProducto + "-" + PesoMAx;

	bahias->Push(InfoBahia);
	bahias2->Push(InfoBahia);
	Bodega->PushTabla(PosCompletaOrden);
	BodegaCopy->PushTabla(PosCompletaOrden);
	lisOrdenada->PushTabla(PosCompletaOrden);

	textBox1->Text = nullptr;
	textBox2->Text = nullptr;
	textBox3->Text = nullptr;
}
private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
	this->button1->Enabled = true;
	this->textBox2->Enabled = true;
	this->textBox1->Enabled = true;
	this->textBox3->Enabled = true;
}
private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {
	this->button1->Enabled = false;
	this->button2->Enabled = false;
	this->textBox2->Enabled = false;
	this->textBox1->Enabled = false;
	this->textBox3->Enabled = false;

	this->textBox4->Enabled = true;
	this->textBox5->Enabled = true;
	this->textBox6->Enabled = true;
	this->textBox7->Enabled = true;
	this->textBox8->Enabled = true;

	this->button6->Enabled = true;
	this->button7->Enabled = true;

	cantBahias = bahias->Length;

	orden->Bubble(BodegaCopy, bahias);
	orden->Bubble(lisOrdenada, bahias);

}
private: System::Void button4_Click(System::Object^ sender, System::EventArgs^ e) {
	this->button4->Enabled = false;


	int IDP = int::Parse(textBox4->Text);
	int Wu = int::Parse(textBox5->Text);
	int cant = int::Parse(textBox6->Text);
	String^ fecha = textBox7->Text;
	String^ nombre = textBox8->Text;
	int PesoOcupado = Wu * cant;
	String^ InfoCarga = IDP + "-" + PesoOcupado + "-" + fecha + "-" + nombre;

	Producto->Push(InfoCarga);

	textBox4->Text = "";
	textBox5->Text = "";
	textBox6->Text = "";
	textBox7->Text = "";
	textBox8->Text = "";

	this->textBox4->Enabled = false;
	this->textBox5->Enabled = false;
	this->textBox6->Enabled = false;
	this->textBox7->Enabled = false;
	this->textBox8->Enabled = false;

}
private: System::Void button6_Click(System::Object^ sender, System::EventArgs^ e) {
	this->button4->Enabled = true;
	this->button5->Enabled = true;
	this->textBox4->Enabled = true;
	this->textBox5->Enabled = true;
	this->textBox6->Enabled = true;
	this->textBox7->Enabled = true;
	this->textBox8->Enabled = true;
}
private: System::Void button5_Click(System::Object^ sender, System::EventArgs^ e) {
	this->textBox4->Enabled = false;
	this->textBox5->Enabled = false;
	this->textBox6->Enabled = false;
	this->textBox7->Enabled = false;
	this->textBox8->Enabled = false;
	this->button6->Enabled = false;
	this->button4->Enabled = false;

	int CantCargas = Producto->Length;
	array<String^>^ Infos = gcnew array<String^>(4);
	array<String^>^ Cargas = gcnew array<String^>(CantCargas);
	array<String^>^ Datos = gcnew array<String^>(3);



	int IdP = 0;
	int PesoCarga = 0;
	int PesoDispo = 0;
	int PesoRestante = 0;
	String^ infoBahia = "";
	String^ ent = "";
	int i = 0;
	bool Paso = true;
	for (int i = 0; i < CantCargas; i++) {
		Paso = Producto->IsEmptyWhile();
		Cargas[i] = Producto->Pop();
		Infos = Cargas[i]->Split('-');
		IdP = int::Parse(Infos[0]);
		PesoCarga = int::Parse(Infos[1]);
		infoBahia = bahias->Pop();
		Datos = infoBahia->Split('-');
		if (Datos[1] == Infos[0]) {
			PesoCarga = int::Parse(Infos[1]);
			PesoDispo = int::Parse(Datos[2]);
			PesoRestante = PesoDispo - PesoCarga;
			if (PesoCarga <= PesoDispo) {
				ent = Datos[0] + "-" + Datos[1] + "-" + PesoCarga + "-" + PesoRestante;
				Entradas->Push(ent);
			}
			else
			{
				ent = Datos[0] + "-" + Datos[1] + "-" + PesoCarga;
				NoEntradas->Push(ent);
			}
		}

		i++;
	}
	int CantEn = Entradas->Length;
	array<String^>^ DatosEntradas = gcnew array<String^>(CantEn);
	array<String^>^ Impresion = gcnew array<String^>(4);
	String^ Grid = "";
	for (int i = 0; i < CantEn; i++) {
		DatosEntradas[i] = Entradas->Pop();
		Impresion = DatosEntradas[i]->Split('-');
		Grid += "Posicion: " + Impresion[0] + "\n" + " Tipo de producto: " + Impresion[1] + "\n" + " Peso usado: " + Impresion[2] + "\n" + " Peso restante: " + Impresion[3] + "\t" + "---->";
	}
	textBox10->Text = Grid;
}
private: System::Void label9_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void button7_Click(System::Object^ sender, System::EventArgs^ e) {
	NumMin^ HLnums = gcnew NumMin;
	Buscador^ busq = gcnew Buscador;
	array<String^>^ Infos = gcnew array<String^>(3);
	String^ index = "";
	int FilaNum = 0;
	int l = 0, h = 0;
	String^ B = textBox9->Text;

	try
	{
		String^ Filas = B->Substring(0, 1);
		int Columnas = int::Parse(B->Substring(1, 1));
		Filas = Filas->ToUpper();

		if (Filas == "A")
			Filas = "1";
		else if (Filas == "B")
			Filas = "2";
		else if (Filas == "C")
			Filas = "3";
		else if (Filas == "D")
			Filas = "4";
		else if (Filas == "E")
			Filas = "5";
		else if (Filas == "F")
			Filas = "6";
		else if (Filas == "G")
			Filas = "7";
		else if (Filas == "H")
			Filas = "8";
		else if (Filas == "I")
			Filas = "9";
		else if (Filas == "J")
			Filas = "10";
		else if (Filas == "K")
			Filas = "11";
		else if (Filas == "L")
			Filas = "12";
		else if (Filas == "M")
			Filas = "13";
		else if (Filas == "N")
			Filas = "14";
		else if (Filas == "Ñ")
			Filas = "15";
		else if (Filas == "O")
			Filas = "16";
		else if (Filas == "P")
			Filas = "17";
		else if (Filas == "Q")
			Filas = "18";
		else if (Filas == "R")
			Filas = "19";
		else if (Filas == "S")
			Filas = "20";
		else if (Filas == "T")
			Filas = "21";
		else if (Filas == "U")
			Filas = "22";
		else if (Filas == "V")
			Filas = "23";
		else if (Filas == "W")
			Filas = "24";
		else if (Filas == "X")
			Filas = "25";
		else if (Filas == "Y")
			Filas = "26";
		else if (Filas == "Z")
			Filas = "27";

		FilaNum = int::Parse(Filas) * 10;
		int PosCompletaOrden = FilaNum + Columnas;

		l = HLnums->Min(Bodega);


		index = busq->Binario(BodegaCopy, bahias2, l, PosCompletaOrden);
		Infos = index->Split('-');

		if (index == "XX") {
			label9->Text = "No se encontro la bahia buscada";
		}
		else
		{

			label9->Text = "Posicion: habilitada" + "\n" + "Producto(s): " + Infos[1] + "\n" + "Peso MAX: " + Infos[2];
		}
	}
	catch (...)
	{
		textBox9->Text = "";
		label9->Text = "Dato a buscar mal ingresado";
	}

}
};
}
