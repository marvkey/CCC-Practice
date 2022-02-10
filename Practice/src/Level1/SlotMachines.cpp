#include <iostream>
//https://dmoj.ca/problem/ccc00s1

bool IsBroke() {
	return true;
}

struct Machine {
	enum class Type {
		One,
		Two,
		Three
	};
	Machine(Type typeMachine) :
		m_Type(typeMachine)
	{
		if (m_Type == Type::One)
			m_AmountQuatersPerPlay = floor(35 / 30);
		else if(m_Type == Type::Two)
			m_AmountQuatersPerPlay = floor(100 / 60);
		else
			m_AmountQuatersPerPlay = floor(10 / 9);
	}
	uint32_t GetAmountQuatersPerPlay() {
		return m_AmountQuatersPerPlay;
	}
private:
	Type m_Type;
	uint32_t m_AmountQuatersPerPlay = 0;
};
void PlayMachine(Machine& machine, float& quaters) {

}
/*
int main() {
	float numQuaters = 0;
	uint32_t numPlayedMachine = 0;// number of times played since last play

	uint32_t CurrentMachine = 1;
	Machine machine1(Machine::Type::One);
	Machine machine2(Machine::Type::Two);
	Machine machine3(Machine::Type::Three);
	while (IsBroke() == false) {

	}
}
*/