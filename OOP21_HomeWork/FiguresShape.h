#pragma once
#include <iostream>

using namespace std;

class Shape {
protected:
	virtual void show() = 0;
	virtual void save() = 0;
	virtual void load() = 0;
};


class Square : public Shape {
	int side;
	int corner_x;
	int corner_y;
public:
	Square() {};
	Square(int s, int c_x, int c_y) : side{ s }, corner_x{ c_x }, corner_y{ c_y } {};

	virtual void show() {
		// Unfortunately, I can't made console display bigger and higher, than it be
		// Find point of left high corner

		// --
		for (int i = 0; i < corner_y; i++) {
			cout << "\n";
		}
		for (int i = 0; i < corner_x; i++) {
			cout << " ";
		}
		// --

		// Print high side;
		for (int i = 0; i < side; i++) {
			cout << "-";
		}
		cout << endl;


		// Print lateral side
		for (int i = 0; i < side; i++) {
			for (int i = 0; i < corner_x; i++) {
				cout << " ";
			}
			cout << "|";
			for (int i = 0; i < side-2; i++) {
				cout << " ";
			}
			cout << "|\n";
		}

		// Print down side

		// --
		for (int i = 0; i < corner_x; i++) {
			cout << " ";
		}
		for (int i = 0; i < side; i++) {
			cout << "-";
		}
		// --

		cout << endl;
	}

	virtual void save() {
		FILE* in;
		char* path = new char[125];
		cout << "Enter the path (C:\\Test\\test.txt):\n";
		cin >> path;

		if (!fopen_s(&in, path, "w")) {
			putc(side, in);
			putc('\n', in);
			putc(corner_x, in);
			putc('\n', in);
			putc(corner_y, in);
			putc('\n', in);
		}
		fclose(in);
	}

	virtual void load() {
		FILE* out;
		char* path = new char[125];
		cout << "Enter the path (C:\\Test\\test.txt):\n";
		cin >> path;

		char tempSym;

		if (!fopen_s(&out, path, "w")) {
			fscanf_s(out, "%d",side);
			fscanf_s(out, "%d", corner_x);
			fscanf_s(out, "%d", corner_y);
			
		}
		fclose(out);
	}
};


class Rectangle : public Shape {
	int side_1, side_2;
	int corner_x, corner_y;
public:
	Rectangle() : side_1{ 0 }, side_2{ 0 }, corner_x{ 0 }, corner_y{ 0 } {};
	Rectangle(int s_1, int s_2, int c_x, int c_y) : 
		side_1{ s_1 }, side_2{ s_2 }, corner_x{ c_x }, corner_y{ c_y } {};
	
	virtual void show() {
		// Find point of left high corner
		for (int i = 0; i < corner_y; i++) {
			cout << "\n";
		}
		for (int i = 0; i < corner_x; i++) {
			cout << " ";
		}

		// Print high side;
		for (int i = 0; i < side_1; i++) {
			cout << "-";
		}
		cout << endl;

		// Print lateral side
		for (int i = 0; i < side_2; i++) {
			for (int i = 0; i < corner_x; i++) {
				cout << " ";
			}
			cout << "|";
			for (int i = 0; i < side_1 - 2; i++) {
				cout << " ";
			}
			cout << "|\n";
		}

		// Print down side

		// --
		for (int i = 0; i < corner_x; i++) {
			cout << " ";
		}
		for (int i = 0; i < side_1; i++) {
			cout << "-";
		}
		// --

		cout << endl;
	}
	
	virtual void save() {
		FILE* in;
		char* path = new char[125];
		cout << "Enter the path (C:\\Test\\test.txt):\n";
		cin >> path;

		if (!fopen_s(&in, path, "w")) {
			putc(side_1, in);
			putc('\n', in);
			putc(side_2, in);
			putc('\n', in);
			putc(corner_x, in);
			putc('\n', in);
			putc(corner_y, in);
			putc('\n', in);
		}
		fclose(in);
	}

	virtual void load() {
		FILE* out;
		char* path = new char[125];
		cout << "Enter the path (C:\\Test\\test.txt):\n";
		cin >> path;

		char tempSym;

		if (!fopen_s(&out, path, "w")) {
			fscanf_s(out, "%d", side_1);
			fscanf_s(out, "%d", side_2);
			fscanf_s(out, "%d", corner_x);
			fscanf_s(out, "%d", corner_y);

		}
		fclose(out);
	}
};


class Circle : public Shape {
	int radious;
	const int pi = 3.1456;
	int center_x;
	int center_y;
public:
	Circle() : radious{ 0 }, center_x{ 0 }, center_y{ 0 } {};
	Circle(int r, int c_x, int c_y) : radious{ r },  center_x{ c_x }, center_y{ c_y } {};

	virtual void show() {
		// I can't
	}

	virtual void save() {
		FILE* in;
		char* path = new char[125];
		cout << "Enter the path (C:\\Test\\test.txt):\n";
		cin >> path;

		if (!fopen_s(&in, path, "w")) {
			putc(radious, in);
			putc('\n', in);
			putc(center_x, in);
			putc('\n', in);
			putc(center_y, in);
			putc('\n', in);
		}
		fclose(in);
	}

	virtual void load() {
		FILE* out;
		char* path = new char[125];
		cout << "Enter the path (C:\\Test\\test.txt):\n";
		cin >> path;

		char tempSym;

		if (!fopen_s(&out, path, "w")) {
			fscanf_s(out, "%d", radious);
			fscanf_s(out, "%d", center_x);
			fscanf_s(out, "%d", center_y);

		}
		fclose(out);
	}
};

class Circle : public Shape {
	int radious;
	const int pi = 3.1456;
	int center_x;
	int center_y;
public:
	Circle() : radious{ 0 }, center_x{ 0 }, center_y{ 0 } {};
	Circle(int r, int c_x, int c_y) : radious{ r },  center_x{ c_x }, center_y{ c_y } {};

	virtual void show() {
		// I can't
	}

	virtual void save() {
		FILE* in;
		char* path = new char[125];
		cout << "Enter the path (C:\\Test\\test.txt):\n";
		cin >> path;

		if (!fopen_s(&in, path, "w")) {
			putc(radious, in);
			putc('\n', in);
			putc(center_x, in);
			putc('\n', in);
			putc(center_y, in);
			putc('\n', in);
		}
		fclose(in);
	}

	virtual void load() {
		FILE* out;
		char* path = new char[125];
		cout << "Enter the path (C:\\Test\\test.txt):\n";
		cin >> path;

		char tempSym;

		if (!fopen_s(&out, path, "w")) {
			fscanf_s(out, "%d", radious);
			fscanf_s(out, "%d", center_x);
			fscanf_s(out, "%d", center_y);

		}
		fclose(out);
	}
};


class Ellipse : public Shape{
	int radious_1, radious_2;
	int center_x, center_y;
public:
	virtual void show() {
		// I can't this too
	}

	virtual void save() {
		FILE* in;
		char* path = new char[125];
		cout << "Enter the path (C:\\Test\\test.txt):\n";
		cin >> path;

		if (!fopen_s(&in, path, "w")) {
			putc(radious_1, in);
			putc('\n', in);
			putc(radious_2, in);
			putc('\n', in);
			putc(center_x, in);
			putc('\n', in);
			putc(center_y, in);
			putc('\n', in);
		}
		fclose(in);
	}

	virtual void load() {
		FILE* out;
		char* path = new char[125];
		cout << "Enter the path (C:\\Test\\test.txt):\n";
		cin >> path;

		char tempSym;

		if (!fopen_s(&out, path, "w")) {
			fscanf_s(out, "%d", radious_1);
			fscanf_s(out, "%d", radious_2);
			fscanf_s(out, "%d", center_x);
			fscanf_s(out, "%d", center_y);

		}
		fclose(out);
	}
};