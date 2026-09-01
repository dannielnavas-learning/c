#include <stdio.h>

enum weekDays
{
    Sunday,
    Monday,
    Tuesday,
    Wednesday,
    Thursday,
    Friday,
    Saturday
};

enum deck
{
    club = 0,
    diamond = 1,
    heart = 2,
    spade = 3
} card;

int main()
{
    card = heart;
    printf("Card is %d\n", card);
    printf("Size of card is %zu\n", sizeof(card));
    // enum weekDays today;
    // today = Wednesday;
    // printf("Today is %d\n", today + 1);
    return 0;
}

// enum designElements
// {
//     ITALICS = 1,
//     BOLD = 2,
//     UNDERLINE = 3
// };
