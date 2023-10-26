#pragma once
class String
{
public:
	String();
	String(char* s);
	String(String& s);
	~String();

	String operator+(const String& s) const;
	bool operator==(const String& s) const;

	int length() const;
	void clear();

private:
	char* s_data;
	int s_size;
};
