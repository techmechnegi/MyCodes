#include<iostream.h>
#include<conio.h>
#include<string.h>

	class birthday
	{
		private:
		int day;
		int month;
		int year;

		public:
		birthday(int d,int m,int y);

		void print();
	};

	birthday::birthday(int d, int m, int y)
	:day(d),month(m),year(y)
	{
	}

	void birthday::print()
	{
		cout<<day <<"/"<< month <<"/"<< year;
	}

	class people
	{
		public:
		void dateofbirth();
		void printname(string s,birthday bo);
	}
	void people::dateofbirth()
	{

	}

	void people::printname(string s,birthday bo)
	{
		cout<<s<<" was born on ";
		bo.print();
	}


	void main()
	{
		clrscr();
		birthday birthobject(23,3,1994);
		people("Sachin Singh Bhandari",birthobject);
		getch();
	}

