#include "MyForm.h"
#include "Header.h"

using namespace System;
using namespace System::Windows::Forms;
using namespace System::Collections::Generic;

ref class MyComparer1 : public IComparer<String^>
{
public:
	virtual int Compare(String^ x, String^ y)
	{
		// Extract and convert the second variable to integers for comparison
		int xValue = Convert::ToInt32(x->Split(' ')[0]);
		int yValue = Convert::ToInt32(y->Split(' ')[0]);

		// Compare based on the second variable
		if (xValue < yValue)
			return 1;
		else if (xValue > yValue)
			return -1;
		else
			return 0;
	}
};

[STAThreadAttribute]

void main(array<String^>^ args) {
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);

	RGZ::MyForm form;
	Application::Run(% form);

}

int points = 0;
int attempts = 0;
int pictures = 3;

System::Void RGZ::MyForm::button1_Click(System::Object^ sender, System::EventArgs^ e)
{
	int* array = createArray();

	points = casino(array, points);
	attempts = 1 + loadAttempts();

	if (pictures == 1) {
		switch (image_change_1(array)) {
		case 1: this->pictureBox2->ImageLocation = L"Images\\Cat.png"; break;
		case 2: this->pictureBox2->ImageLocation = L"Images\\Chicken.png"; break;
		case 3: this->pictureBox2->ImageLocation = L"Images\\Pig.png"; break;
		}

		switch (image_change_2(array)) {
		case 1: this->pictureBox1->ImageLocation = L"Images\\Cat.png"; break;
		case 2: this->pictureBox1->ImageLocation = L"Images\\Chicken.png"; break;
		case 3: this->pictureBox1->ImageLocation = L"Images\\Pig.png"; break;
		}

		switch (image_change_3(array)) {
		case 1: this->pictureBox3->ImageLocation = L"Images\\Cat.png"; break;
		case 2: this->pictureBox3->ImageLocation = L"Images\\Chicken.png"; break;
		case 3: this->pictureBox3->ImageLocation = L"Images\\Pig.png"; break;
		}
	}

	if (pictures == 2) {
		switch (image_change_1(array)) {
		case 1: this->pictureBox2->ImageLocation = L"Images\\RedCar.png"; break;
		case 2: this->pictureBox2->ImageLocation = L"Images\\BlueCar.png"; break;
		case 3: this->pictureBox2->ImageLocation = L"Images\\PurpleCar.png"; break;
		}

		switch (image_change_2(array)) {
		case 1: this->pictureBox1->ImageLocation = L"Images\\RedCar.png"; break;
		case 2: this->pictureBox1->ImageLocation = L"Images\\BlueCar.png"; break;
		case 3: this->pictureBox1->ImageLocation = L"Images\\PurpleCar.png"; break;
		}
		switch (image_change_3(array)) {
		case 1: this->pictureBox3->ImageLocation = L"Images\\RedCar.png"; break;
		case 2: this->pictureBox3->ImageLocation = L"Images\\BlueCar.png"; break;
		case 3: this->pictureBox3->ImageLocation = L"Images\\PurpleCar.png"; break;
		}
	}

	if (pictures == 3) {
		switch (image_change_1(array)) {
		case 1: this->pictureBox2->ImageLocation = L"Images\\Sprite-0001rrfr3f.png"; break;
		case 2: this->pictureBox2->ImageLocation = L"Images\\Lemon3.png"; break;
		case 3: this->pictureBox2->ImageLocation = L"Images\\Apple.jpg"; break;
		}

		switch (image_change_2(array)) {
		case 1: this->pictureBox1->ImageLocation = L"Images\\Sprite-0001rrfr3f.png"; break;
		case 2: this->pictureBox1->ImageLocation = L"Images\\Lemon3.png"; break;
		case 3: this->pictureBox1->ImageLocation = L"Images\\Apple.jpg"; break;
		}

		switch (image_change_3(array)) {
		case 1: this->pictureBox3->ImageLocation = L"Images\\Sprite-0001rrfr3f.png"; break;
		case 2: this->pictureBox3->ImageLocation = L"Images\\Lemon3.png"; break;
		case 3: this->pictureBox3->ImageLocation = L"Images\\Apple.jpg"; break;
		}
	}

	if (pictures == 4) {
		switch (image_change_1(array)) {
		case 1: this->pictureBox2->ImageLocation = L"Images\\PC.png"; break;
		case 2: this->pictureBox2->ImageLocation = L"Images\\Pink_PC.png"; break;
		case 3: this->pictureBox2->ImageLocation = L"Images\\Stock_Pc.png"; break;
		}

		switch (image_change_2(array)) {
		case 1: this->pictureBox1->ImageLocation = L"Images\\PC.png"; break;
		case 2: this->pictureBox1->ImageLocation = L"Images\\Pink_PC.png"; break;
		case 3: this->pictureBox1->ImageLocation = L"Images\\Stock_Pc.png"; break;
		}

		switch (image_change_3(array)) {
		case 1: this->pictureBox3->ImageLocation = L"Images\\PC.png"; break;
		case 2: this->pictureBox3->ImageLocation = L"Images\\Pink_PC.png"; break;
		case 3: this->pictureBox3->ImageLocation = L"Images\\Stock_Pc.png"; break;
		}
	}

	savePoints(points);
	saveAttempts(attempts);

	this->label4attempts->Text = attempts.ToString();
	this->label3scores->Text = points.ToString();
}

System::Void RGZ::MyForm::ñêèíóòèÏðîãðåñToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e)
{
	points = 0;
	attempts = 0;
	savePoints(points);
	saveAttempts(attempts);
	this->label4attempts->Text = attempts.ToString();
	this->label3scores->Text = points.ToString();
}

System::Void RGZ::MyForm::â³äêðèòèToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e)
{
	this->panel1->Visible = true;
	this->ïîâåðíóòèñÿToolStripMenuItem->Visible = true;

	this->textBox1->Clear();

	String^ fileName = "Leaderboard.txt";
	List<String^>^ data = gcnew List<String^>();

	StreamReader^ reader = gcnew StreamReader(fileName);
	while (!reader->EndOfStream) {
		String^ line = reader->ReadLine();
		data->Add(line);
	}
	reader->Close();

	data->Sort(gcnew MyComparer1());

	int i = 1;
	for each (String ^ item in data) {
		String^ firstValue = item->Split(' ')[0];
		String^ secondValue = item->Split(' ')[1];
		String^ formattedOutput = String::Format("{0,-2} {1,3} {2,-9} {3,-3} {4,0}", i.ToString(), "Scores:", firstValue, "Attempts:", secondValue);
		this->textBox1->AppendText(formattedOutput + Environment::NewLine);
		i++;
	}
}

System::Void RGZ::MyForm::ïîâåðíóòèñÿToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e)
{
	this->panel1->Visible = false;
	this->ïîâåðíóòèñÿToolStripMenuItem->Visible = false;
}

System::Void RGZ::MyForm::çáåðåãòèÐåçóëüòàòToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e)
{
	save_to_leaderboard(points, attempts);
}

System::Void RGZ::MyForm::î÷èñòèòèÒàáëèöþToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e)
{
	String^ fileName = "Leaderboard.txt";
	StreamWriter^ writer = gcnew StreamWriter(fileName, false);
	writer->Close();
}

System::Void RGZ::MyForm::òâàðèíèToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e)
{
	pictures = 1;
	this->pictureBox4->ImageLocation = L"Images\\Animals.png";
	this->pictureBox2->ImageLocation = L"Images\\Cat.png";
	this->pictureBox1->ImageLocation = L"Images\\Chicken.png";
	this->pictureBox3->ImageLocation = L"Images\\Pig.png";
}

System::Void RGZ::MyForm::àâòîìîá³ë³ToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e)
{
	pictures = 2;
	this->pictureBox4->ImageLocation = L"Images\\CarsSet.png";
	this->pictureBox2->ImageLocation = L"Images\\RedCar.png";
	this->pictureBox1->ImageLocation = L"Images\\BlueCar.png";
	this->pictureBox3->ImageLocation = L"Images\\PurpleCar.png";
}

System::Void RGZ::MyForm::ôðóêòèToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e)
{
	pictures = 3;
	this->pictureBox4->ImageLocation = L"Images\\FruitsSet.png";
	this->pictureBox2->ImageLocation = L"Images\\Sprite-0001rrfr3f.png";
	this->pictureBox1->ImageLocation = L"Images\\Lemon3.png";
	this->pictureBox3->ImageLocation = L"Images\\Apple.jpg";
}

System::Void RGZ::MyForm::íàêîïè÷óâà÷³ToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e)
{
	pictures = 4;
	this->pictureBox4->ImageLocation = L"Images\\PCSet.png";
	this->pictureBox2->ImageLocation = L"Images\\PC.png";
	this->pictureBox1->ImageLocation = L"Images\\Pink_PC.png";
	this->pictureBox3->ImageLocation = L"Images\\Stock_Pc.png";
}
