#ifndef __SIMPLE_CLASS_H__
#define __SIMPLE_CLASS_H__

#include <string>
#include <stdint.h>

enum someThingEnumerated {
	kValue1 = 1,
	kValue2,
	kValue3,
	kValue4
};

class SimpleNativeClass
{
protected:
	int m_someField;
	int m_someOtherField;
	char* m_anotherMoreComplexField;

public:
    int aInt;
    static float bFloat;

    static const uint32_t OBJECT_TYPE = 0x777;
    virtual uint32_t getObjectType() {
        return SimpleNativeClass::OBJECT_TYPE;
    };

    SimpleNativeClass();
	SimpleNativeClass(int m) : m_someField(m) {};
	SimpleNativeClass(int m1, int m2) : m_someField(m1), m_someOtherField(m2) {};
	~SimpleNativeClass();

	// these methods are simple, can be defined inline
	int getSomeField() {
		return m_someField;
	}
	int getSomeOtherField() {
		return m_someOtherField;
	}
	const char *getAnotherMoreComplexField() {
		return m_anotherMoreComplexField;
	}
	void setSomeField(int f) {
		m_someField = f;
	}
	void setSomeField() {

	}
	void setSomeOtherField(int f) {
		m_someOtherField = f;
	}
	void setAnotherMoreComplexField(const char *str);

	long long thisReturnsALongLong();

	static void func();
	static void func(int a);
	static void func(int a, float b);

	long long receivesLongLong(long long someId);
	std::string returnsAString();
	const char *returnsACString();

	int doSomeProcessing(std::string arg1, std::string arg2);

    virtual void virFun();
    virtual void virFunA();
};

class ITouchable
{
public:
    virtual void onTouch();
    virtual void onClick(int i);
    virtual void onClick(int i,int j);
    virtual void onPoint(SimpleNativeClass* target);
    virtual void onPoint(SimpleNativeClass* target,int i);
};

class SubClass:public SimpleNativeClass,ITouchable
{
public:
    virtual void virFun() override;
    void virFunA();
    void SubFun();
};

namespace SomeNamespace {
class AnotherClass {
protected:
	int justOneField;

public:
    static const uint32_t OBJECT_TYPE = 0x778;
    virtual uint32_t getObjectType() {
        return AnotherClass::OBJECT_TYPE;
    };
	int aPublicField;

	AnotherClass();
	~AnotherClass();

	// also simple methods, can be defined inline
	int getJustOneField() {
		return justOneField;
	}
	// wrong setter - won't work (needs ONLY one parameter in order to work)
	void setJustOneField() {
		justOneField = 999;
	}

	void doSomethingSimple();
};
};

#endif
