#include "pch.h"
#include "windows.h"
#include <iostream>
#include <fstream>
#include <stdio.h>
#include <stdlib.h>

using namespace std;
using namespace System;

extern "C" void brightness(unsigned char* im1, int w, int h, int val);
extern "C" void blur(unsigned char* im1, int w, int h);
extern "C" void clear(unsigned char* im1, int w, int h, int val);
extern "C" void shrink(unsigned char* im1, unsigned char* im2, int w, int h);
extern "C" void grow(unsigned char* im1, unsigned char* im2, int w, int h);

void MarshalString(String^, string&);

int width, height;
unsigned char* image1,* image2;
string sfname = "";
unsigned char header[54];
unsigned char blue, green, red;
int value = 125;

//int main(array<System::String ^> ^args)
//{
//    return 0;
//}

#include "Form1.h"

using namespace System::Windows::Forms;

[STAThread]
int main() {
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);
	Application::Run(gcnew CppCLRWinformsProjekt::Form1()); 
	return 0;
}

void MarshalString(String^ s, string& os)
{
	using namespace Runtime::InteropServices;
	const char* chars =
		(const char*)(Marshal::StringToHGlobalAnsi(s)).ToPointer();
	os = chars;
	Marshal::FreeHGlobal(IntPtr((void*)chars));
}