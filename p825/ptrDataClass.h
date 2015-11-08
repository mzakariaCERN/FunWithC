#ifndef H_courseType
#define H_courseType

class pointerDataClass
{
public:
	void print() const;
	
	void insertAt(int index, int num);

	pointerDataClass(int size = 10);

	~pointerDataClass();

	pointerDataClass (const pointerDataClass& otherObject);

private:	
	int maxSize;	
	int length;
	int *p;
};
#endif
