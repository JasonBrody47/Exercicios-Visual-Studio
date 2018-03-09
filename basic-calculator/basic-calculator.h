#ifndef BASIC_CALCULATOR
#define BASIC_CALCULATOR

#include <cstdint>

using arithmeticFcn = int32_t(*)(int32_t, int32_t);

struct arithmeticStruct
{
    char math_operator;
    arithmeticFcn fcn;
};

int32_t getUserInteger();
inline bool isValidInteger();
char getUserOperator();
inline bool isValidOperator(char user_operator);
inline int32_t add(int32_t number_1, int32_t number_2);
inline int32_t subtract(int32_t number_1, int32_t number_2);
inline int32_t multiply(int32_t number_1, int32_t number_2);
inline int32_t divide(int32_t number_1, int32_t number_2);
arithmeticFcn getArithmeticFunction(char user_operator);

static arithmeticStruct arithmeticArray[]
{
    { '+', add },
    { '-', subtract },
    { '*', multiply },
    { '/', divide }
};

#endif // !BASIC_CALCULATOR
