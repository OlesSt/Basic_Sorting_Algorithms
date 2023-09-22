#include <QCoreApplication>

#include "Selection_Sort.h"
#include "Bubble_Sort.h"

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    SelectionSort::DoSelectionSort();
    BubbleSort::DoBubbleSort();

    return a.exec();
}
