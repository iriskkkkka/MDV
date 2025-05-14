#include <cstdint>
#include <sstream>
#include <vector>

class BittyEmulator
{
public:
	BittyEmulator();
	void Evaluate(uint16_t instruction);
	uint16_t GetRegisterValue(uint16_t reg_num);
	bool LoadRom(const std::string& fname);  
	uint16_t Fetch();                        

private:
	uint16_t registers[8];
	int pc;
	std::vector<uint16_t> rom;
};