#include <stdio.h>
#include <string.h>

//Family Member's Information Program. :)

int main() {
    char name[20];

    printf(" Which person\'s information do you need? Type his/her nickname: ");
    scanf("%s", name);

    if (strcmp(name, "Matin") == 0) {
        printf(" Name: Abdul Matin Talukder\n Father: Wazel Ali \n Mother: Toiyomon Nesa\n Date of birth: 01 January 1955\n Mobile: 01746703365 \n Live's in: Ghatail, Tangail. \n \n \a");
    }

    else if (strcmp(name, "Kulsum") == 0) {
        printf(" Name: Kulsum Parvin\n Father: Rostam Ali Akanda \n Mother: Nurjahan\n Date of birth: 05 April 1950\n Mobile: 01616925000 \n Live's in: Ghatail, Tangail.\a \n \n");
    }

//Morjina
    else if (strcmp(name, "Morjina") == 0) {
        printf(" Name: Morjina Akter \n Father: Abdul Matin Talukder \n Mother: Kulsum Parvin\n Date of birth: unknown \n Mobile: 0198883106 \n Live's in: Ghatail, Tangail. \a \n \n ");
    }

    else if (strcmp(name, "Dipty") == 0) {
        printf(" Name: Kamrunnahar Dipty \n Father: Jamal Mondol \n Mother: Morjina Akter\n Date of birth: \n Mobile: 01 \n Live's in: Ghatail, Tangail. \a \n\n");
    }

    else if (strcmp(name, "Fahim") == 0) {
        printf(" Name: Fahim Mondol \n Father: Jamal Mondol \n Mother: Morjina Akter\n Date of birth: \n Mobile: 01 \n Live's in: Ghatail, Tangail. \a\n\n");
    }

    else if (strcmp(name, "Jannat") == 0) {
        printf(" Name: Jannatul Ferdusi\n Father: Jamal Mondol \n Mother: Morjina Akter\n Date of birth: \n Mobile: 01 \n Live's in: Ghatail, Tangail. \a\n\n");
    }

//Kamrul
    else if (strcmp(name, "Kamrul") == 0) {
        printf(" Name: Kamrul Talukder\n Father: Abdul Matin Talukder  \n Mother: Kulsum Parvin \n Date of birth: 05 April 1984 \n Mobile: 01610011476 \n Live's in: Khilkhet, Dhaka.\n\n \a");
    }

    else if (strcmp(name, "Selina") == 0) {
        printf(" Name: Selina Akter\n Father: Suban Mia \n Mother: Amina Begum\n Date of birth: 01 December 1986\n Mobile: 01749303024 \n Live's in: Khilkhet, Dhaka. \n\n\a");
    }

    else if (strcmp(name, "Fiha") == 0) {
        printf(" Name: Tasnia Kahab Fiha\n Father: Kamrul Talukder \n Mother: Selina Akter\n Date of birth: 22 June 2014 \n Mobile: *** \n Live's in: Khilkhet Dhaka. \n\n\a");
    }

    else if (strcmp(name, "Taj") == 0) {
        printf(" Name: Sinan\n Father: Kamrul Talukder \n Mother: Selina Akter\n Date of birth: 02 December 2019 \n Mobile: *** \n Live's in: Khilkhet Dhaka. \n\n\a");
    }

    else if (strcmp(name, "Kaif") == 0) {
        printf(" Name: Sifaz\n Father: Kamrul Talukder \n Mother: Selina Akter\n Date of birth: 02 December 2019 \n Mobile: *** \n Live's in: Khilkhet Dhaka. \n\n\a");
    }

//Monir
    else if (strcmp(name, "Monir") == 0) {
        printf(" Name: Md. Moniruzzam\n Father: Abdul Matin Talukder \n Mother: Kulsum Parvin\n Date of birth: 11 October 1986 \n Mobile: 01619073589 \n Live's in: Khilkhet Dhaka. \n\n\a");
    }

    else if (strcmp(name, "Akhi") == 0) {
        printf(" \n Name: Amina Akhi\n Father: Amjad Hosen \n Mother: Fahima Begum \n Date of birth: 20 October 1990\n Mobile: 01738335033 \n Live's in: Khilkhet, Dhaka.\n\n\a");
    }

    else if (strcmp(name, "Maliha") == 0) {
        printf(" Name: Maliha Talukder Maha\n Father: Md. Moniruzzam \n Mother: Amina Akhi\n Date of birth: 15 March 2020\n Mobile: *** \n Live's in:  Khilkhet, Dhaka. \n\n\a");
    }

    else if (strcmp(name, "Mohammed") == 0) {
        printf(" Name: Mohammed Abrar\n Father: Md. Moniruzzam \n Mother: Amina Akhi\n Date of birth: 04 January 2023\n Mobile: *** \n Live's in:  Khilkhet, Dhaka. \n\n\a");
    }

//Mousumi
    else if (strcmp(name, "Mousumi") == 0) {
        printf(" Name: Rokeya Talukder\n Father: Abdul Matin Talukder  \n Mother: Kulsum Parvin\n Date of birth: 04 February 1993\n Mobile: 01641350399 \n Live's in: Khilkhet, Dhaka. \n\n\a");
    }

//Sajib
    else if (strcmp(name, "Sajib") == 0) {
        printf(" Name: Sajibur Rahman\n Father: Abdul Matin Talukder \n Mother: Kulsum Parvin\n Date of birth: 08 January 1994\n Mobile: 01674045665 \n Live's in:  Monsigang, Dhaka. \n\n\a");
    }

    else if (strcmp(name, "Rina") == 0) {
        printf(" Name: Rina Akter \n Father:  Billal Hosen\n Mother: Fatema Akter\n Date of birth: 02 January 1994\n Mobile: 01632198592 \n Live's in: Monsigang, Dhaka.\n\n\a");
    }

    else if (strcmp(name, "Simi") == 0) {
        printf(" Name: Nosaifa Sunayra Simi\n Father: Sajibul Rahman \n Mother: Rina Talukder\n Date of birth: 24 July 2020\n Mobile: *** \n Live's in: Monsigang, Dhaka.\n\n\a");
    }

//Rima
    else if (strcmp(name, "Rima") == 0) {
        printf(" Name: Morium Akter\n Father: Abdul Matin Talukder  \n Mother: Kulsum Parvin\n Date of birth: \n Mobile: 01571471324 \n Live's in: Enayetpur, Sirajgang.\n\n\a");
    }

    else if (strcmp(name, "Arabi") == 0) {
        printf(" Name: Ahnaf Salman Arabi\n Father: Ariful Islam \n Mother: Morium Akter\n Date of birth: 24 April 2018\n Mobile: *** \n Live's in: Enayetpur, Sirajgang.\n\n\a");
    }

//Toukir
    else if (strcmp(name, "Toukir") == 0) {
        printf(" Name: Md Toukir Ahmmed Talukder\n Father: Abdul Matin Talukder  \n Mother: Kulsum Parvin\n Date of birth: 08 October 2003\n Mobile: 01641125125 \n Live's in: Khilkhet, Dhaka.\n\n\a");
    }

    else if (strcmp(name, "Tania") == 0) {
        printf(" Name: Tania Sarker\n Father: Anisur Rahman \n Mother: Rohima Begun\n Date of birth: 01 August 2003\n Mobile: 01759230193 \n Live's in: Ghatail, Tangail.\n\n\a");
    }

    else if (strcmp(name, "Taha") == 0) {
        printf(" Name: Tabassum Taha  \n Father: Md Toukir Ahmmed Talukder \n Mother: Tania Sarker\n Date of birth: 02 January 2023 \n Mobile: *** \n Live in: Ghatail, Tangail  \n\n\a");
    }


    else {
        printf("Name not recognized! \a \n\n");
    }

    return 0;
}
