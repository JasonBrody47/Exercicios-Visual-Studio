#include <cstdint>
#include <iostream>

namespace Itens
{
    enum Itens
    {
        HEALTH_POTIONS,
        TORCHES,
        ARROWS,
        TOTAL_ITENS
    };
}

int16_t countTotalIntems(const int16_t items_amount[]);

int main()
{
    int16_t items_amount[Itens::TOTAL_ITENS]{ 2, 5, 10 };

    std::cout << "Total de itens do player: " << countTotalIntems(items_amount);

    std::cin.get();
    return 0;
}

int16_t countTotalIntems(const int16_t items_amount[])
{
    int32_t totalItems{ 0 };
    for (int16_t count = 0; count < Itens::TOTAL_ITENS; ++count)
        totalItems += items_amount[count];

    return totalItems;
}

