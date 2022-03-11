#pragma once

namespace CppCLRWinformsProjekt {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Zusammenfassung f�r Form1
	/// </summary>

	public ref class Form1 : public System::Windows::Forms::Form
	{
	public:
		Form1(void)
		{
			InitializeComponent();
			//
			//TODO: Konstruktorcode hier hinzuf�gen.
			//
		}

	protected:
		/// <summary>
		/// Verwendete Ressourcen bereinigen.
		/// </summary>
		~Form1()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::PictureBox^ pictureBox1;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::TextBox^ br_textbox;
	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::Button^ button4;
	private: System::Windows::Forms::Button^ button5;
	private: System::Windows::Forms::TextBox^ textBox_clear;
	private: System::Windows::Forms::Button^ button6;
	protected:

	private:
		/// <summary>
		/// Erforderliche Designervariable.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Erforderliche Methode f�r die Designerunterst�tzung.
		/// Der Inhalt der Methode darf nicht mit dem Code-Editor ge鄚dert werden.
		/// </summary>
		void InitializeComponent(void)
		{
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->br_textbox = (gcnew System::Windows::Forms::TextBox());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->textBox_clear = (gcnew System::Windows::Forms::TextBox());
			this->button6 = (gcnew System::Windows::Forms::Button());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->SuspendLayout();
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(60, 25);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(98, 45);
			this->button1->TabIndex = 0;
			this->button1->Text = L"Load";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &Form1::button1_Click);
			// 
			// pictureBox1
			// 
			this->pictureBox1->Location = System::Drawing::Point(60, 106);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(599, 458);
			this->pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::CenterImage;
			this->pictureBox1->TabIndex = 1;
			this->pictureBox1->TabStop = false;
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(293, 20);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(94, 24);
			this->button2->TabIndex = 2;
			this->button2->Text = L"brightness";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &Form1::button2_Click);
			// 
			// br_textbox
			// 
			this->br_textbox->Location = System::Drawing::Point(193, 20);
			this->br_textbox->Multiline = true;
			this->br_textbox->Name = L"br_textbox";
			this->br_textbox->Size = System::Drawing::Size(94, 24);
			this->br_textbox->TabIndex = 3;
			this->br_textbox->Text = L"brightness value";
			// 
			// button3
			// 
			this->button3->Location = System::Drawing::Point(565, 21);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(94, 23);
			this->button3->TabIndex = 4;
			this->button3->Text = L"blur";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &Form1::button3_Click);
			// 
			// button4
			// 
			this->button4->Location = System::Drawing::Point(293, 55);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(94, 23);
			this->button4->TabIndex = 5;
			this->button4->Text = L"clear";
			this->button4->UseVisualStyleBackColor = true;
			this->button4->Click += gcnew System::EventHandler(this, &Form1::button4_Click);
			// 
			// button5
			// 
			this->button5->Location = System::Drawing::Point(430, 20);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(94, 24);
			this->button5->TabIndex = 6;
			this->button5->Text = L"shrink";
			this->button5->UseVisualStyleBackColor = true;
			this->button5->Click += gcnew System::EventHandler(this, &Form1::button5_Click);
			// 
			// textBox_clear
			// 
			this->textBox_clear->Location = System::Drawing::Point(193, 55);
			this->textBox_clear->Multiline = true;
			this->textBox_clear->Name = L"textBox_clear";
			this->textBox_clear->Size = System::Drawing::Size(94, 22);
			this->textBox_clear->TabIndex = 7;
			this->textBox_clear->Text = L"clear value";
			// 
			// button6
			// 
			this->button6->Location = System::Drawing::Point(430, 55);
			this->button6->Name = L"button6";
			this->button6->Size = System::Drawing::Size(94, 23);
			this->button6->TabIndex = 8;
			this->button6->Text = L"grow";
			this->button6->UseVisualStyleBackColor = true;
			this->button6->Click += gcnew System::EventHandler(this, &Form1::button6_Click);
			// 
			// Form1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 12);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(716, 697);
			this->Controls->Add(this->button6);
			this->Controls->Add(this->textBox_clear);
			this->Controls->Add(this->button5);
			this->Controls->Add(this->button4);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->br_textbox);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->pictureBox1);
			this->Controls->Add(this->button1);
			this->Name = L"Form1";
			this->Text = L"Form1";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) //Load
	{
		OpenFileDialog^ openFileDialog1 = gcnew OpenFileDialog;
		openFileDialog1->Filter = "點陣圖 (*.bmp)| *.bmp| All files (*.*)| *.*";
		openFileDialog1->FileName = "";
		openFileDialog1->Title = "載入影像";
		openFileDialog1->FilterIndex = 1;

		if (openFileDialog1->ShowDialog() == System::Windows::Forms::DialogResult::OK && openFileDialog1->FileName->Length > 0)
		{
			Image^ img = safe_cast<Bitmap^>(Image::FromFile(openFileDialog1->FileName));
			pictureBox1->Image = img;

			MarshalString(openFileDialog1->FileName, sfname);

			const char* fname = sfname.c_str();
			FILE * fp;
			
			if (!(fp = fopen(fname, "rb")))
			{
				MessageBox::Show("Error!");
			}
			fread(header, 1, 54, fp); //讀完前54bytes存進header陣列
			width = *(int*)(header + 18); //header中存width的位置
			height = *(int*)(header + 22); //header中存height的位置
			image1 = new unsigned char[width * height];

			for (int i = 0; i < height; i++)
				for (int j = 0; j < width; j++) {
					blue = getc(fp); //資料按BGR順序依序讀取
					green = getc(fp);
					red = getc(fp);
					image1[i * width + j] = (red + green + blue) / 3; //轉成灰階存進待處理的image陣列
				}
			
			fclose(fp);
		}
	}
	private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) //brightness
	{
		value = Convert::ToInt32(br_textbox->Text); //從textbox取得value
		brightness(image1, width, height, value);

		SaveFileDialog^ saveFileDialog = gcnew SaveFileDialog;
		saveFileDialog->Filter = "點陣圖 (*.bmp)| *.bmp| All files (*.*)| *.*";
		saveFileDialog->FileName = "";
		saveFileDialog->Title = "儲存影像";
		saveFileDialog->FilterIndex = 1;

		if (saveFileDialog->ShowDialog() == System::Windows::Forms::DialogResult::OK)
		{
			FILE* output = NULL;
			string outfilename2 = "";
			MarshalString(saveFileDialog->FileName, outfilename2); //將system string轉為standard string

			const char* ofname = outfilename2.c_str(); //轉成字元陣列
			output = fopen(ofname, "wb");
			if (output == NULL)
				MessageBox::Show("Error!");
			*(int*)(header + 18) = width; //將新的width, height存回header
			*(int*)(header + 22) = height;
			fwrite(header, 1, 54, output); //將header陣列寫進檔案
			for (int i = 0; i < height; i++)
			{
				for (int j = 0; j < width; j++)
				{
					putc(image1[i * width + j], output); //將R,G,B位置全部以轉成灰階且處理過的image陣列儲存, 所以存三次
					putc(image1[i * width + j], output);
					putc(image1[i * width + j], output);
				}
			}
			fclose(output); //避免執行緒衝突，記得先關掉

			Image^ img = pictureBox1->Image; //避免記憶體不足，先刪掉目前picture box的圖片
			pictureBox1->Image = nullptr;
			delete img;
			pictureBox1->Image = safe_cast<Bitmap^>(Image::FromFile(saveFileDialog->FileName)); //讀取檔案顯示圖片到picturebox
		}
	}

	private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) //blur
	{
		blur(image1, width, height);

		SaveFileDialog^ saveFileDialog = gcnew SaveFileDialog;
		saveFileDialog->Filter = "點陣圖 (*.bmp)| *.bmp| All files (*.*)| *.*";
		saveFileDialog->FileName = "";
		saveFileDialog->Title = "儲存影像";
		saveFileDialog->FilterIndex = 1;

		if (saveFileDialog->ShowDialog() == System::Windows::Forms::DialogResult::OK)
		{
			FILE* output = NULL;
			string outfilename2 = "";
			MarshalString(saveFileDialog->FileName, outfilename2); //將system string轉為standard string

			const char* ofname = outfilename2.c_str(); //轉成字元陣列
			output = fopen(ofname, "wb");
			if (output == NULL)
				MessageBox::Show("Error!");
			*(int*)(header + 18) = width; //將新的width, height存回header
			*(int*)(header + 22) = height;
			fwrite(header, 1, 54, output); //將header陣列寫進檔案
			for (int i = 0; i < height; i++)
			{
				for (int j = 0; j < width; j++)
				{
					putc(image1[i * width + j], output); //將R,G,B位置全部以轉成灰階且處理過的image陣列儲存, 所以存三次
					putc(image1[i * width + j], output);
					putc(image1[i * width + j], output);
				}
			}
			fclose(output); //避免執行緒衝突，記得先關掉

			Image^ img = pictureBox1->Image; //避免記憶體不足，先刪掉目前picture box的圖片
			pictureBox1->Image = nullptr;
			delete img;
			pictureBox1->Image = safe_cast<Bitmap^>(Image::FromFile(saveFileDialog->FileName)); //讀取檔案顯示圖片到picturebox
		}
	}

private: System::Void button4_Click(System::Object^ sender, System::EventArgs^ e) //clear
{
	value = Convert::ToInt32(textBox_clear->Text); //從textbox取得value
	clear(image1, width, height, value);

	SaveFileDialog^ saveFileDialog = gcnew SaveFileDialog;
	saveFileDialog->Filter = "點陣圖 (*.bmp)| *.bmp| All files (*.*)| *.*";
	saveFileDialog->FileName = "";
	saveFileDialog->Title = "儲存影像";
	saveFileDialog->FilterIndex = 1;

	if (saveFileDialog->ShowDialog() == System::Windows::Forms::DialogResult::OK)
	{
		FILE* output = NULL;
		string outfilename2 = "";
		MarshalString(saveFileDialog->FileName, outfilename2); //將system string轉為standard string

		const char* ofname = outfilename2.c_str(); //轉成字元陣列
		output = fopen(ofname, "wb");
		if (output == NULL)
			MessageBox::Show("Error!");
		*(int*)(header + 18) = width; //將新的width, height存回header
		*(int*)(header + 22) = height;
		fwrite(header, 1, 54, output); //將header陣列寫進檔案
		for (int i = 0; i < height; i++)
		{
			for (int j = 0; j < width; j++)
			{
				putc(image1[i * width + j], output); //將R,G,B位置全部以轉成灰階且處理過的image陣列儲存, 所以存三次
				putc(image1[i * width + j], output);
				putc(image1[i * width + j], output);
			}
		}
		fclose(output); //避免執行緒衝突，記得先關掉

		Image^ img = pictureBox1->Image; //避免記憶體不足，先刪掉目前picture box的圖片
		pictureBox1->Image = nullptr;
		delete img;
		pictureBox1->Image = safe_cast<Bitmap^>(Image::FromFile(saveFileDialog->FileName)); //讀取檔案顯示圖片到picturebox
	}
}

private: System::Void button5_Click(System::Object^ sender, System::EventArgs^ e) //shrink
{
	image2 = new unsigned char[width * height / 4]; //image2取得原本/4大小的記憶體空間
	shrink(image1, image2, width, height);
	width /= 2; //width, height要各除以2
	height /= 2;
	free(image1);
	image1 = image2;

	SaveFileDialog^ saveFileDialog = gcnew SaveFileDialog;
	saveFileDialog->Filter = "點陣圖 (*.bmp)| *.bmp| All files (*.*)| *.*";
	saveFileDialog->FileName = "";
	saveFileDialog->Title = "儲存影像";
	saveFileDialog->FilterIndex = 1;

	if (saveFileDialog->ShowDialog() == System::Windows::Forms::DialogResult::OK)
	{
		FILE* output = NULL;
		string outfilename2 = "";
		MarshalString(saveFileDialog->FileName, outfilename2); //將system string轉為standard string

		const char* ofname = outfilename2.c_str(); //轉成字元陣列
		output = fopen(ofname, "wb");
		if (output == NULL)
			MessageBox::Show("Error!");
		*(int*)(header + 18) = width; //將新的width, height存回header
		*(int*)(header + 22) = height;
		fwrite(header, 1, 54, output); //將header陣列寫進檔案
		for (int i = 0; i < height; i++)
		{
			for (int j = 0; j < width; j++)
			{
				putc(image1[i * width + j], output); //將R,G,B位置全部以轉成灰階且處理過的image陣列儲存, 所以存三次
				putc(image1[i * width + j], output);
				putc(image1[i * width + j], output);
			}
		}
		fclose(output); //避免執行緒衝突，記得先關掉

		Image^ img = pictureBox1->Image; //避免記憶體不足，先刪掉目前picture box的圖片
		pictureBox1->Image = nullptr;
		delete img;
		pictureBox1->Image = safe_cast<Bitmap^>(Image::FromFile(saveFileDialog->FileName)); //讀取檔案顯示圖片到picturebox
	}
}

private: System::Void button6_Click(System::Object^ sender, System::EventArgs^ e) //grow
{
	image2 = new unsigned char[width * height * 4]; //image2取得原本*4大小的記憶體空間
	grow(image1, image2, width, height);
	width *= 2; //width, height要各乘以2
	height *= 2;
	free(image1);
	image1 = image2;

	SaveFileDialog^ saveFileDialog = gcnew SaveFileDialog;
	saveFileDialog->Filter = "點陣圖 (*.bmp)| *.bmp| All files (*.*)| *.*";
	saveFileDialog->FileName = "";
	saveFileDialog->Title = "儲存影像";
	saveFileDialog->FilterIndex = 1;

	if (saveFileDialog->ShowDialog() == System::Windows::Forms::DialogResult::OK)
	{
		FILE* output = NULL;
		string outfilename2 = "";
		MarshalString(saveFileDialog->FileName, outfilename2); //將system string轉為standard string

		const char* ofname = outfilename2.c_str(); //轉成字元陣列
		output = fopen(ofname, "wb");
		if (output == NULL)
			MessageBox::Show("Error!");
		*(int*)(header + 18) = width; //將新的width, height存回header
		*(int*)(header + 22) = height;
		fwrite(header, 1, 54, output); //將header陣列寫進檔案
		for (int i = 0; i < height; i++)
		{
			for (int j = 0; j < width; j++)
			{
				putc(image1[i * width + j], output); //將R,G,B位置全部以轉成灰階且處理過的image陣列儲存, 所以存三次
				putc(image1[i * width + j], output);
				putc(image1[i * width + j], output);
			}
		}
		fclose(output); //避免執行緒衝突，記得先關掉

		Image^ img = pictureBox1->Image; //避免記憶體不足，先刪掉目前picture box的圖片
		pictureBox1->Image = nullptr;
		delete img;
		pictureBox1->Image = safe_cast<Bitmap^>(Image::FromFile(saveFileDialog->FileName)); //讀取檔案顯示圖片到picturebox
	}
}
};
}
