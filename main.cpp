#include <QCoreApplication>

#include "Selection_Sort.h"
#include "Bubble_Sort.h"

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    std::cout << "SELECTION SORT" << std::endl;
    SelectionSort::DoSelectionSort();

    std::cout << "BUBBLE SORT" << std::endl;
    BubbleSort::DoBubbleSort();

    std::cout << "... OR USE STD::SORT" << std::endl;

    return a.exec();
}
