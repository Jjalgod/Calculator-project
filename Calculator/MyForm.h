#pragma once

namespace Calculator {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// MyForm에 대한 요약입니다.
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
		{
			InitializeComponent();
			//
			//TODO: 생성자 코드를 여기에 추가합니다.
			//
		}

	protected:
		/// <summary>
		/// 사용 중인 모든 리소스를 정리합니다.
		/// </summary>
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ btnSpace;
	private: System::Windows::Forms::Button^ btnClear;
	private: System::Windows::Forms::Button^ btnClearEntry;
	private: System::Windows::Forms::Button^ btnPlusMinus;
	protected:

	protected:




	private: System::Windows::Forms::Button^ button6;
	private: System::Windows::Forms::Button^ btnDigit9;

	private: System::Windows::Forms::Button^ btnDigit8;

	private: System::Windows::Forms::Button^ btnDigit7;

	private: System::Windows::Forms::Button^ button10;
	private: System::Windows::Forms::Button^ btnDigit6;

	private: System::Windows::Forms::Button^ btnDigit5;

	private: System::Windows::Forms::Button^ btnDigit4;

	private: System::Windows::Forms::Button^ button14;
	private: System::Windows::Forms::Button^ btnDigit3;

	private: System::Windows::Forms::Button^ btnDigit2;

	private: System::Windows::Forms::Button^ btnDigit1;

	private: System::Windows::Forms::Button^ button18;
	private: System::Windows::Forms::Button^ btnEquals;

	private: System::Windows::Forms::Button^ btnDecimal;

	private: System::Windows::Forms::Button^ btnDigit0;

	private: System::Windows::Forms::TextBox^ txtDisplay;


	private:
		/// <summary>
		/// 필수 디자이너 변수입니다.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// 디자이너 지원에 필요한 메서드입니다. 
		/// 이 메서드의 내용을 코드 편집기로 수정하지 마세요.
		/// </summary>
		void InitializeComponent(void)
		{
			this->btnSpace = (gcnew System::Windows::Forms::Button());
			this->btnClear = (gcnew System::Windows::Forms::Button());
			this->btnClearEntry = (gcnew System::Windows::Forms::Button());
			this->btnPlusMinus = (gcnew System::Windows::Forms::Button());
			this->button6 = (gcnew System::Windows::Forms::Button());
			this->btnDigit9 = (gcnew System::Windows::Forms::Button());
			this->btnDigit8 = (gcnew System::Windows::Forms::Button());
			this->btnDigit7 = (gcnew System::Windows::Forms::Button());
			this->button10 = (gcnew System::Windows::Forms::Button());
			this->btnDigit6 = (gcnew System::Windows::Forms::Button());
			this->btnDigit5 = (gcnew System::Windows::Forms::Button());
			this->btnDigit4 = (gcnew System::Windows::Forms::Button());
			this->button14 = (gcnew System::Windows::Forms::Button());
			this->btnDigit3 = (gcnew System::Windows::Forms::Button());
			this->btnDigit2 = (gcnew System::Windows::Forms::Button());
			this->btnDigit1 = (gcnew System::Windows::Forms::Button());
			this->button18 = (gcnew System::Windows::Forms::Button());
			this->btnEquals = (gcnew System::Windows::Forms::Button());
			this->btnDecimal = (gcnew System::Windows::Forms::Button());
			this->btnDigit0 = (gcnew System::Windows::Forms::Button());
			this->txtDisplay = (gcnew System::Windows::Forms::TextBox());
			this->SuspendLayout();
			// 
			// btnSpace
			// 
			this->btnSpace->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->btnSpace->Font = (gcnew System::Drawing::Font(L"Wingdings", 16.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(2)));
			this->btnSpace->Location = System::Drawing::Point(12, 95);
			this->btnSpace->Name = L"btnSpace";
			this->btnSpace->Size = System::Drawing::Size(120, 120);
			this->btnSpace->TabIndex = 1;
			this->btnSpace->Text = L"";
			this->btnSpace->UseVisualStyleBackColor = false;
			this->btnSpace->Click += gcnew System::EventHandler(this, &MyForm::btnSpace_Click);
			// 
			// btnClear
			// 
			this->btnClear->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->btnClear->Font = (gcnew System::Drawing::Font(L"굴림", 16.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(129)));
			this->btnClear->Location = System::Drawing::Point(138, 95);
			this->btnClear->Name = L"btnClear";
			this->btnClear->Size = System::Drawing::Size(120, 120);
			this->btnClear->TabIndex = 2;
			this->btnClear->Text = L"C";
			this->btnClear->UseVisualStyleBackColor = false;
			this->btnClear->Click += gcnew System::EventHandler(this, &MyForm::btnClear_Click);
			// 
			// btnClearEntry
			// 
			this->btnClearEntry->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->btnClearEntry->Font = (gcnew System::Drawing::Font(L"굴림", 16.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(129)));
			this->btnClearEntry->Location = System::Drawing::Point(264, 95);
			this->btnClearEntry->Name = L"btnClearEntry";
			this->btnClearEntry->Size = System::Drawing::Size(120, 120);
			this->btnClearEntry->TabIndex = 3;
			this->btnClearEntry->Text = L"CE";
			this->btnClearEntry->UseVisualStyleBackColor = false;
			this->btnClearEntry->Click += gcnew System::EventHandler(this, &MyForm::btnClearEntry_Click);
			// 
			// btnPlusMinus
			// 
			this->btnPlusMinus->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->btnPlusMinus->Font = (gcnew System::Drawing::Font(L"굴림", 16.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(129)));
			this->btnPlusMinus->Location = System::Drawing::Point(390, 95);
			this->btnPlusMinus->Name = L"btnPlusMinus";
			this->btnPlusMinus->Size = System::Drawing::Size(120, 120);
			this->btnPlusMinus->TabIndex = 4;
			this->btnPlusMinus->Text = L"±";
			this->btnPlusMinus->UseVisualStyleBackColor = false;
			this->btnPlusMinus->Click += gcnew System::EventHandler(this, &MyForm::btnPlusMinus_Click);
			// 
			// button6
			// 
			this->button6->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->button6->Font = (gcnew System::Drawing::Font(L"굴림", 16.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(129)));
			this->button6->Location = System::Drawing::Point(389, 221);
			this->button6->Name = L"button6";
			this->button6->Size = System::Drawing::Size(120, 120);
			this->button6->TabIndex = 8;
			this->button6->Text = L"+";
			this->button6->UseVisualStyleBackColor = false;
			this->button6->Click += gcnew System::EventHandler(this, &MyForm::EnterOperator);
			// 
			// btnDigit9
			// 
			this->btnDigit9->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->btnDigit9->Font = (gcnew System::Drawing::Font(L"굴림", 16.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(129)));
			this->btnDigit9->Location = System::Drawing::Point(264, 221);
			this->btnDigit9->Name = L"btnDigit9";
			this->btnDigit9->Size = System::Drawing::Size(120, 120);
			this->btnDigit9->TabIndex = 7;
			this->btnDigit9->Text = L"9";
			this->btnDigit9->UseVisualStyleBackColor = false;
			this->btnDigit9->Click += gcnew System::EventHandler(this, &MyForm::EnterNumber);
			// 
			// btnDigit8
			// 
			this->btnDigit8->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->btnDigit8->Font = (gcnew System::Drawing::Font(L"굴림", 16.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(129)));
			this->btnDigit8->Location = System::Drawing::Point(138, 221);
			this->btnDigit8->Name = L"btnDigit8";
			this->btnDigit8->Size = System::Drawing::Size(120, 120);
			this->btnDigit8->TabIndex = 6;
			this->btnDigit8->Text = L"8";
			this->btnDigit8->UseVisualStyleBackColor = false;
			// 
			// btnDigit7
			// 
			this->btnDigit7->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->btnDigit7->Font = (gcnew System::Drawing::Font(L"굴림", 16.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(129)));
			this->btnDigit7->Location = System::Drawing::Point(12, 221);
			this->btnDigit7->Name = L"btnDigit7";
			this->btnDigit7->Size = System::Drawing::Size(120, 120);
			this->btnDigit7->TabIndex = 5;
			this->btnDigit7->Text = L"7";
			this->btnDigit7->UseVisualStyleBackColor = false;
			this->btnDigit7->Click += gcnew System::EventHandler(this, &MyForm::EnterNumber);
			// 
			// button10
			// 
			this->button10->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->button10->Font = (gcnew System::Drawing::Font(L"굴림", 16.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(129)));
			this->button10->Location = System::Drawing::Point(389, 347);
			this->button10->Name = L"button10";
			this->button10->Size = System::Drawing::Size(120, 120);
			this->button10->TabIndex = 12;
			this->button10->Text = L"-";
			this->button10->UseVisualStyleBackColor = false;
			this->button10->Click += gcnew System::EventHandler(this, &MyForm::EnterOperator);
			// 
			// btnDigit6
			// 
			this->btnDigit6->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->btnDigit6->Font = (gcnew System::Drawing::Font(L"굴림", 16.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(129)));
			this->btnDigit6->Location = System::Drawing::Point(264, 347);
			this->btnDigit6->Name = L"btnDigit6";
			this->btnDigit6->Size = System::Drawing::Size(120, 120);
			this->btnDigit6->TabIndex = 11;
			this->btnDigit6->Text = L"6";
			this->btnDigit6->UseVisualStyleBackColor = false;
			this->btnDigit6->Click += gcnew System::EventHandler(this, &MyForm::EnterNumber);
			// 
			// btnDigit5
			// 
			this->btnDigit5->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->btnDigit5->Font = (gcnew System::Drawing::Font(L"굴림", 16.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(129)));
			this->btnDigit5->Location = System::Drawing::Point(138, 347);
			this->btnDigit5->Name = L"btnDigit5";
			this->btnDigit5->Size = System::Drawing::Size(120, 120);
			this->btnDigit5->TabIndex = 10;
			this->btnDigit5->Text = L"5";
			this->btnDigit5->UseVisualStyleBackColor = false;
			this->btnDigit5->Click += gcnew System::EventHandler(this, &MyForm::EnterNumber);
			// 
			// btnDigit4
			// 
			this->btnDigit4->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->btnDigit4->Font = (gcnew System::Drawing::Font(L"굴림", 16.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(129)));
			this->btnDigit4->Location = System::Drawing::Point(12, 347);
			this->btnDigit4->Name = L"btnDigit4";
			this->btnDigit4->Size = System::Drawing::Size(120, 120);
			this->btnDigit4->TabIndex = 9;
			this->btnDigit4->Text = L"4";
			this->btnDigit4->UseVisualStyleBackColor = false;
			this->btnDigit4->Click += gcnew System::EventHandler(this, &MyForm::EnterNumber);
			// 
			// button14
			// 
			this->button14->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->button14->Font = (gcnew System::Drawing::Font(L"굴림", 16.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(129)));
			this->button14->Location = System::Drawing::Point(389, 473);
			this->button14->Name = L"button14";
			this->button14->Size = System::Drawing::Size(120, 120);
			this->button14->TabIndex = 16;
			this->button14->Text = L"*";
			this->button14->UseVisualStyleBackColor = false;
			this->button14->Click += gcnew System::EventHandler(this, &MyForm::EnterOperator);
			// 
			// btnDigit3
			// 
			this->btnDigit3->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->btnDigit3->Font = (gcnew System::Drawing::Font(L"굴림", 16.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(129)));
			this->btnDigit3->Location = System::Drawing::Point(264, 473);
			this->btnDigit3->Name = L"btnDigit3";
			this->btnDigit3->Size = System::Drawing::Size(120, 120);
			this->btnDigit3->TabIndex = 15;
			this->btnDigit3->Text = L"3";
			this->btnDigit3->UseVisualStyleBackColor = false;
			this->btnDigit3->Click += gcnew System::EventHandler(this, &MyForm::EnterNumber);
			// 
			// btnDigit2
			// 
			this->btnDigit2->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->btnDigit2->Font = (gcnew System::Drawing::Font(L"굴림", 16.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(129)));
			this->btnDigit2->Location = System::Drawing::Point(138, 473);
			this->btnDigit2->Name = L"btnDigit2";
			this->btnDigit2->Size = System::Drawing::Size(120, 120);
			this->btnDigit2->TabIndex = 14;
			this->btnDigit2->Text = L"2";
			this->btnDigit2->UseVisualStyleBackColor = false;
			this->btnDigit2->Click += gcnew System::EventHandler(this, &MyForm::EnterNumber);
			// 
			// btnDigit1
			// 
			this->btnDigit1->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->btnDigit1->Font = (gcnew System::Drawing::Font(L"굴림", 16.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(129)));
			this->btnDigit1->Location = System::Drawing::Point(12, 473);
			this->btnDigit1->Name = L"btnDigit1";
			this->btnDigit1->Size = System::Drawing::Size(120, 120);
			this->btnDigit1->TabIndex = 13;
			this->btnDigit1->Text = L"1";
			this->btnDigit1->UseVisualStyleBackColor = false;
			this->btnDigit1->Click += gcnew System::EventHandler(this, &MyForm::EnterNumber);
			// 
			// button18
			// 
			this->button18->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->button18->Font = (gcnew System::Drawing::Font(L"굴림", 16.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(129)));
			this->button18->Location = System::Drawing::Point(389, 599);
			this->button18->Name = L"button18";
			this->button18->Size = System::Drawing::Size(120, 120);
			this->button18->TabIndex = 20;
			this->button18->Text = L"/";
			this->button18->UseVisualStyleBackColor = false;
			this->button18->Click += gcnew System::EventHandler(this, &MyForm::EnterOperator);
			// 
			// btnEquals
			// 
			this->btnEquals->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->btnEquals->Font = (gcnew System::Drawing::Font(L"굴림", 16.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(129)));
			this->btnEquals->Location = System::Drawing::Point(264, 599);
			this->btnEquals->Name = L"btnEquals";
			this->btnEquals->Size = System::Drawing::Size(120, 120);
			this->btnEquals->TabIndex = 19;
			this->btnEquals->Text = L"=";
			this->btnEquals->UseVisualStyleBackColor = false;
			this->btnEquals->Click += gcnew System::EventHandler(this, &MyForm::btnEquals_Click);
			// 
			// btnDecimal
			// 
			this->btnDecimal->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->btnDecimal->Font = (gcnew System::Drawing::Font(L"굴림", 16.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(129)));
			this->btnDecimal->Location = System::Drawing::Point(138, 599);
			this->btnDecimal->Name = L"btnDecimal";
			this->btnDecimal->Size = System::Drawing::Size(120, 120);
			this->btnDecimal->TabIndex = 18;
			this->btnDecimal->Text = L".";
			this->btnDecimal->UseVisualStyleBackColor = false;
			this->btnDecimal->Click += gcnew System::EventHandler(this, &MyForm::btnDecimal_Click);
			// 
			// btnDigit0
			// 
			this->btnDigit0->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->btnDigit0->Font = (gcnew System::Drawing::Font(L"굴림", 16.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(129)));
			this->btnDigit0->Location = System::Drawing::Point(12, 599);
			this->btnDigit0->Name = L"btnDigit0";
			this->btnDigit0->Size = System::Drawing::Size(120, 120);
			this->btnDigit0->TabIndex = 17;
			this->btnDigit0->Text = L"0";
			this->btnDigit0->UseVisualStyleBackColor = false;
			this->btnDigit0->Click += gcnew System::EventHandler(this, &MyForm::EnterNumber);
			// 
			// txtDisplay
			// 
			this->txtDisplay->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->txtDisplay->Font = (gcnew System::Drawing::Font(L"굴림", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(129)));
			this->txtDisplay->Location = System::Drawing::Point(12, 27);
			this->txtDisplay->Multiline = true;
			this->txtDisplay->Name = L"txtDisplay";
			this->txtDisplay->Size = System::Drawing::Size(498, 62);
			this->txtDisplay->TabIndex = 21;
			this->txtDisplay->Text = L"0";
			this->txtDisplay->TextAlign = System::Windows::Forms::HorizontalAlignment::Right;
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 15);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(559, 781);
			this->Controls->Add(this->txtDisplay);
			this->Controls->Add(this->button18);
			this->Controls->Add(this->btnEquals);
			this->Controls->Add(this->btnDecimal);
			this->Controls->Add(this->btnDigit0);
			this->Controls->Add(this->button14);
			this->Controls->Add(this->btnDigit3);
			this->Controls->Add(this->btnDigit2);
			this->Controls->Add(this->btnDigit1);
			this->Controls->Add(this->button10);
			this->Controls->Add(this->btnDigit6);
			this->Controls->Add(this->btnDigit5);
			this->Controls->Add(this->btnDigit4);
			this->Controls->Add(this->button6);
			this->Controls->Add(this->btnDigit9);
			this->Controls->Add(this->btnDigit8);
			this->Controls->Add(this->btnDigit7);
			this->Controls->Add(this->btnPlusMinus);
			this->Controls->Add(this->btnClearEntry);
			this->Controls->Add(this->btnClear);
			this->Controls->Add(this->btnSpace);
			this->Name = L"MyForm";
			this->Text = L"MyForm";
			this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
			this->Click += gcnew System::EventHandler(this, &MyForm::EnterNumber);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
		double firstDigit, secondDigit, result; //변수선언
		String^ operators; //+,-,/,* 부호들

	private: System::Void MyForm_Load(System::Object^ sender, System::EventArgs^ e) {
	}
private: System::Void EnterNumber(System::Object^ sender, System::EventArgs^ e) {
	//숫자버튼 클릭시
	Button^ Numbers = safe_cast<Button^>(sender);

	if (txtDisplay->Text == "0")
	{
		txtDisplay->Text = Numbers->Text; //텍스트박스에 0 이면 숫자출력
	}
	else
	{
		txtDisplay->Text = txtDisplay->Text + Numbers->Text; //숫자뒤에 입력
	}
}
private: System::Void EnterOperator(System::Object^ sender, System::EventArgs^ e) {
	//부호버튼 클릭시
	Button^ NumbersOp = safe_cast<Button^>(sender);
	firstDigit = Double::Parse(txtDisplay->Text); //?

	txtDisplay->Text = "";
	operators = NumbersOp->Text;
}
private: System::Void btnDecimal_Click(System::Object^ sender, System::EventArgs^ e) {
	//.버튼 클릭시
	if (!txtDisplay->Text->Contains("."))//. 없을시
	{
		txtDisplay->Text = txtDisplay->Text + "."; //출력
	}
}
private: System::Void btnEquals_Click(System::Object^ sender, System::EventArgs^ e) {

	secondDigit = Double::Parse(txtDisplay->Text); //?

	if (operators == "+")
	{
		result = firstDigit + secondDigit;
		txtDisplay->Text = System::Convert::ToString(result);
	}
	else if (operators == "-")
	{
		result = firstDigit - secondDigit;
		txtDisplay->Text = System::Convert::ToString(result);
	}
	else if (operators == "*")
	{
		result = firstDigit * secondDigit;
		txtDisplay->Text = System::Convert::ToString(result);
	}
	else if (operators == "/")
	{
		result = firstDigit / secondDigit;
		txtDisplay->Text = System::Convert::ToString(result);
	}
}
private: System::Void btnClear_Click(System::Object^ sender, System::EventArgs^ e) {
	//C 버튼 누를시
	txtDisplay->Text = "0";
}
private: System::Void btnClearEntry_Click(System::Object^ sender, System::EventArgs^ e) {
	//CE 버튼 누를시
	txtDisplay->Text = "0";
}
private: System::Void btnPlusMinus_Click(System::Object^ sender, System::EventArgs^ e) {
	//+-버튼 누를시
	if (txtDisplay->Text->Contains("-"))
	{
		txtDisplay->Text = txtDisplay->Text->Remove(0, 1);
	}
	else
	{
		txtDisplay->Text = "-" + txtDisplay->Text;
	}
}
private: System::Void btnSpace_Click(System::Object^ sender, System::EventArgs^ e) {
	//<-버튼 누를시
	if (txtDisplay->Text->Length > 0) //오른쪽부터 하나씩삭제 길이가 0 보다 클시
	{
		txtDisplay->Text = txtDisplay->Text->Remove(txtDisplay->Text->Length - 1, 1);
	}
	if (txtDisplay->Text == "") //비엇으면 0추가
	{
		txtDisplay->Text == "0";
	}
}
};
}//
