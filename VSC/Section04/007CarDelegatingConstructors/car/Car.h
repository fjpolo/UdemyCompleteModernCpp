#pragma once
class Car {
private:
	float fuel{ 0 };
	float speed{ 0 };
	int passengers{ 0 };
	int arr[5] = { 1,2,3 };
	char *p{};
	static unsigned int totalCount;
public:
	Car();
	Car(float fuel);
	Car(float fuel, float speed);
	Car(float fuel, float speed, int passengers);
	void FillFuel(float amount);
	void Accelerate();
	void Brake();
	void AddPassengers(int count); 
	void Dashboard()const;				// Const since it doesn't modify anything
	static void ShowCount();
	~Car();
};

