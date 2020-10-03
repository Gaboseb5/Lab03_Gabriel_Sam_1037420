#pragma once
#include"Lista.h"
#include <iostream>
#include<cstdlib>
#include<stdlib.h>
#include<time.h>
#include<ctime>
#include<stdio.h>
//using namespace std;
namespace Lab03GabrielSam1037420 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Resumen de Juego
	/// </summary>
	public ref class Juego : public System::Windows::Forms::Form
	{
	public:
		Lista* miList;
		Lista* milist2;
		Juego(void)
		{
			InitializeComponent();
			miList = new Lista();
			miList->count = 0;
			miList->start = nullptr;
			miList->end = nullptr;

			milist2 = new Lista();
			//
			//TODO: agregar código de constructor aquí
			//
		}
		
	protected:
		/// <summary>
		/// Limpiar los recursos que se estén usando.
		/// </summary>
		~Juego()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::TextBox^ txtextraer;
	private: System::Windows::Forms::TextBox^ txtextraaerlista;
	private: System::Windows::Forms::TextBox^ txtinsertar;
	protected:

	protected:

	protected:


	private: System::Windows::Forms::ListBox^ listBox1;

	private: System::Windows::Forms::ListBox^ listBox2;
	private: System::Windows::Forms::ListBox^ listBox3;
	private: System::Windows::Forms::ListBox^ listBox4;
	private: System::Windows::Forms::ListBox^ listBox5;
	private: System::Windows::Forms::ListBox^ listBox6;
	private: System::Windows::Forms::ListBox^ listBox7;

	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::Button^ button4;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label4;


	private:
		/// <summary>
		/// Variable del diseñador necesaria.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Método necesario para admitir el Diseñador. No se puede modificar
		/// el contenido de este método con el editor de código.
		/// </summary>
		void InitializeComponent(void)
		{
			this->txtextraer = (gcnew System::Windows::Forms::TextBox());
			this->txtextraaerlista = (gcnew System::Windows::Forms::TextBox());
			this->txtinsertar = (gcnew System::Windows::Forms::TextBox());
			this->listBox1 = (gcnew System::Windows::Forms::ListBox());
			this->listBox2 = (gcnew System::Windows::Forms::ListBox());
			this->listBox3 = (gcnew System::Windows::Forms::ListBox());
			this->listBox4 = (gcnew System::Windows::Forms::ListBox());
			this->listBox5 = (gcnew System::Windows::Forms::ListBox());
			this->listBox6 = (gcnew System::Windows::Forms::ListBox());
			this->listBox7 = (gcnew System::Windows::Forms::ListBox());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// txtextraer
			// 
			this->txtextraer->Location = System::Drawing::Point(776, 141);
			this->txtextraer->Name = L"txtextraer";
			this->txtextraer->Size = System::Drawing::Size(100, 22);
			this->txtextraer->TabIndex = 0;
			// 
			// txtextraaerlista
			// 
			this->txtextraaerlista->Location = System::Drawing::Point(776, 214);
			this->txtextraaerlista->Name = L"txtextraaerlista";
			this->txtextraaerlista->Size = System::Drawing::Size(100, 22);
			this->txtextraaerlista->TabIndex = 1;
			// 
			// txtinsertar
			// 
			this->txtinsertar->Location = System::Drawing::Point(776, 292);
			this->txtinsertar->Name = L"txtinsertar";
			this->txtinsertar->Size = System::Drawing::Size(100, 22);
			this->txtinsertar->TabIndex = 2;
			// 
			// listBox1
			// 
			this->listBox1->FormattingEnabled = true;
			this->listBox1->ItemHeight = 16;
			this->listBox1->Location = System::Drawing::Point(49, 137);
			this->listBox1->Name = L"listBox1";
			this->listBox1->Size = System::Drawing::Size(65, 308);
			this->listBox1->TabIndex = 3;
			// 
			// listBox2
			// 
			this->listBox2->FormattingEnabled = true;
			this->listBox2->ItemHeight = 16;
			this->listBox2->Location = System::Drawing::Point(111, 137);
			this->listBox2->Name = L"listBox2";
			this->listBox2->Size = System::Drawing::Size(65, 308);
			this->listBox2->TabIndex = 5;
			// 
			// listBox3
			// 
			this->listBox3->FormattingEnabled = true;
			this->listBox3->ItemHeight = 16;
			this->listBox3->Location = System::Drawing::Point(173, 137);
			this->listBox3->Name = L"listBox3";
			this->listBox3->Size = System::Drawing::Size(65, 308);
			this->listBox3->TabIndex = 6;
			// 
			// listBox4
			// 
			this->listBox4->FormattingEnabled = true;
			this->listBox4->ItemHeight = 16;
			this->listBox4->Location = System::Drawing::Point(234, 137);
			this->listBox4->Name = L"listBox4";
			this->listBox4->Size = System::Drawing::Size(65, 308);
			this->listBox4->TabIndex = 7;
			// 
			// listBox5
			// 
			this->listBox5->FormattingEnabled = true;
			this->listBox5->ItemHeight = 16;
			this->listBox5->Location = System::Drawing::Point(295, 137);
			this->listBox5->Name = L"listBox5";
			this->listBox5->Size = System::Drawing::Size(65, 308);
			this->listBox5->TabIndex = 8;
			// 
			// listBox6
			// 
			this->listBox6->FormattingEnabled = true;
			this->listBox6->ItemHeight = 16;
			this->listBox6->Location = System::Drawing::Point(356, 137);
			this->listBox6->Name = L"listBox6";
			this->listBox6->Size = System::Drawing::Size(65, 308);
			this->listBox6->TabIndex = 9;
			// 
			// listBox7
			// 
			this->listBox7->FormattingEnabled = true;
			this->listBox7->ItemHeight = 16;
			this->listBox7->Location = System::Drawing::Point(418, 137);
			this->listBox7->Name = L"listBox7";
			this->listBox7->Size = System::Drawing::Size(65, 308);
			this->listBox7->TabIndex = 10;
			// 
			// button3
			// 
			this->button3->Location = System::Drawing::Point(636, 350);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(240, 32);
			this->button3->TabIndex = 12;
			this->button3->Text = L"Grupo Destino";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &Juego::button3_Click);
			// 
			// button4
			// 
			this->button4->Location = System::Drawing::Point(49, 464);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(434, 41);
			this->button4->TabIndex = 13;
			this->button4->Text = L"Mostrar Tablero Inicial";
			this->button4->UseVisualStyleBackColor = true;
			this->button4->Click += gcnew System::EventHandler(this, &Juego::button4_Click);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(633, 141);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(61, 17);
			this->label1->TabIndex = 14;
			this->label1->Text = L"Posicion";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(633, 214);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(95, 17);
			this->label2->TabIndex = 15;
			this->label2->Text = L"Grupo Origen";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(633, 295);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(98, 17);
			this->label3->TabIndex = 16;
			this->label3->Text = L"Grupo destino";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 36, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label4->Location = System::Drawing::Point(370, 9);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(254, 69);
			this->label4->TabIndex = 17;
			this->label4->Text = L"Solitario";
			// 
			// Juego
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(945, 545);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->button4);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->listBox7);
			this->Controls->Add(this->listBox6);
			this->Controls->Add(this->listBox5);
			this->Controls->Add(this->listBox4);
			this->Controls->Add(this->listBox3);
			this->Controls->Add(this->listBox2);
			this->Controls->Add(this->listBox1);
			this->Controls->Add(this->txtinsertar);
			this->Controls->Add(this->txtextraaerlista);
			this->Controls->Add(this->txtextraer);
			this->Name = L"Juego";
			this->Text = L"Juego";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
		int color;
		
		#pragma endregion
		private: System::Void button4_Click(System::Object^ sender, System::EventArgs^ e) {

			
			Mostrartablero();
			
		}

		   void Mostrartablero() {

			  char *Cartas[52] = {"1","1","1R","1R" ,"2R","2R" ,"2","2","3R","3R","3","3","4R","4R","4","4","5R","5R","5","5","6","6"
			   ,"6R","6R","7","7R" ,"7R","7","8","8R","8","8R" ,"9","9R" ,"9R","9","A","AR" ,"AR","A" ,"B","BR","BR","B" 
				,"CR","CR" ,"C","C","DR","DR" ,"D","D"};
			   int i;
			   srand(time(0));
			   for(i = 0; i < 52; i++) {
				   if (Cartas[52] == "1R") {
					   
					   color = 1;
				   }
				   else
				   {
					   color = 0;
				   }
				   if (Cartas[52] == "2R") {

					   color = 1;
				   }
				   else
				   {
					   color = 0;
				   } if (Cartas[52] == "3R") {

					   color = 1;
				   }
				   else
				   {
					   color = 0;
				   } if (Cartas[52] == "4R") {

					   color = 1;
				   }
				   else
				   {
					   color = 0;
				   }  if (Cartas[52] == "5R") {

					   color = 1;
				   }
				   else
				   {
					   color = 0;
				   } if (Cartas[52] == "6R") {

					   color = 1;
				   }
				   else
				   {
					   color = 0;
				   }
				   if (Cartas[52] == "7R") {

					   color = 1;
				   }
				   else
				   {
					   color = 0;
				   } if (Cartas[52] == "8R") {

					   color = 1;
				   }
				   else
				   {
					   color = 0;
				   } if (Cartas[52] == "9R") {

					   color = 1;
				   }
				   else
				   {
					   color = 0;
				   }  if (Cartas[52] == "AR") {

					   color = 1;
				   }
				   else
				   {
					   color = 0;
				   } if (Cartas[52] == "BR") {

					   color = 1;
				   }
				   else
				   {
					   color = 0;
				   } if (Cartas[52] == "CR") {

					   color = 1;
				   }
				   else
				   {
					   color = 0;
				   }if (Cartas[52] == "DR") {

					   color = 1;
				   }
				   else
				   {
					   color = 0;
				   }
			   }

			   for (int i = 0; i < 13; i++) {
				   
				   /*int n = 0;*/
				   color = rand()%2;
				   if (i==0 && color==1) {

					   listBox1->Items->Add(Convert::ToChar(*Cartas[rand() % 52])+"R");
					  
				   }
				   else if(i==0 && color == 0)
				   {
					   listBox1->Items->Add(Convert::ToChar(*Cartas[rand() % 52]) + "N");
					  
				   }
				   else
				   {
					   listBox1->Items->Add("");
				   }
				   
			   }

			   for (int i = 0; i < 13; i++) {

				   /*int n = 0;*/
				   color = rand() % 2;
				   if (i == 1 && color == 1) {

					   listBox2->Items->Add(Convert::ToChar(*Cartas[rand() % 52]) + "R");

				   }
				   else if (i == 1 && color == 0)
				   {
					   listBox2->Items->Add(Convert::ToChar(*Cartas[rand() % 52]) + "N");

				   }
				   else
				   {
					   listBox2->Items->Add("");
				   }

			   }
			   for (int i = 0; i < 13; i++) {

				   /*int n = 0;*/
				   color = rand() % 2;
				   if (i == 2 && color == 1) {

					   listBox3->Items->Add(Convert::ToChar(*Cartas[rand() % 52]) + "R");

				   }
				   else if (i == 2 && color == 0)
				   {
					   listBox3->Items->Add(Convert::ToChar(*Cartas[rand() % 52]) + "N");

				   }
				   else
				   {
					   listBox3->Items->Add("");
				   }

			   }
			   for (int i = 0; i < 13; i++) {

				   /*int n = 0;*/
				   color = rand() % 2;
				   if (i == 3 && color == 1) {

					   listBox4->Items->Add(Convert::ToChar(*Cartas[rand() % 52]) + "R");

				   }
				   else if (i == 3 && color == 0)
				   {
					   listBox4->Items->Add(Convert::ToChar(*Cartas[rand() % 52]) + "N");

				   }
				   else
				   {
					   listBox4->Items->Add("");
				   }

			   }
			   for (int i = 0; i < 13; i++) {

				   /*int n = 0;*/
				   color = rand() % 2;
				   if (i == 4 && color == 1) {

					   listBox5->Items->Add(Convert::ToChar(*Cartas[rand() % 52]) + "R");

				   }
				   else if (i == 4 && color == 0)
				   {
					   listBox5->Items->Add(Convert::ToChar(*Cartas[rand() % 52]) + "N");

				   }
				   else
				   {
					   listBox5->Items->Add("");
				   }

			   }
			   for (int i = 0; i < 13; i++) {

				   /*int n = 0;*/
				   color = rand() % 2;
				   if (i == 5 && color == 1) {

					   listBox6->Items->Add(Convert::ToChar(*Cartas[rand() % 52]) + "R");

				   }
				   else if (i == 5 && color == 0)
				   {
					   listBox6->Items->Add(Convert::ToChar(*Cartas[rand() % 52]) + "N");

				   }
				   else
				   {
					   listBox6->Items->Add("");
				   }

			   }
			   for (int i = 0; i < 13; i++) {

				   /*int n = 0;*/
				   
				   color = rand() % 2;
				   if (i == 6 && color == 1) {

					   listBox7->Items->Add(Convert::ToChar(*Cartas[rand() % 52]) + "R");

				   }
				   else if (i == 6 && color == 2)
				   {
					   listBox7->Items->Add(Convert::ToChar(*Cartas[rand() % 52]) + "N");

				   }
				   else
				   {
					   listBox7->Items->Add("");
				   }

			   }

			   
			   
		   }

		   void LlenarListBox() {
			   Node* temp = miList->start;
			   listBox1->Items->Clear();
			   listBox2->Items->Clear();
			   listBox3->Items->Clear();
			   listBox4->Items->Clear();
			   listBox5->Items->Clear();
			   listBox6->Items->Clear();
			   listBox7->Items->Clear();
			   
			   while (temp != nullptr) {
				   listBox1->Items->Add(temp->value);
				   listBox2->Items->Add(temp->value);
				   listBox3->Items->Add(temp->value);
				   listBox4->Items->Add(temp->value);
				   listBox5->Items->Add(temp->value);
				   listBox6->Items->Add(temp->value);
				   listBox7->Items->Add(temp->value);
				   temp = temp->next;
			   }
		   }
	private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {

		int position = Convert::ToInt32(txtextraer->Text);
		Node* temp = miList->ExtractAtPosition(position);
		if (temp)
			MessageBox::Show("El valor del nodo extraído es: " + temp->value + " en la posición: " + position, "Correcto", MessageBoxButtons::OK, MessageBoxIcon::Information);
		else
			MessageBox::Show("La lista está vacía", "Atención", MessageBoxButtons::OK, MessageBoxIcon::Warning);
		int value = Convert::ToInt32(txtextraaerlista->Text);
		int position = Convert::ToInt32(txtinsertar->Text);
		miList->InsertAtPosition(value, position);
		LlenarListBox();
		

	}

};
}








