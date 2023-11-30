#include "genreatormain.h"
#include "ui_genreatormain.h"
#include "string.h"
#include <cstdlib>
#include <ctime>



genreatormain::genreatormain(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::genreatormain)
{
    ui->setupUi(this);
}

genreatormain::~genreatormain()
{
    delete ui;
}


    std::string bpm [8] {"60", "100", "108", "120", "135", "140", "160", "200"};
    std::string timeSignature[5]  {"3/4", "4/4", "6/8", "5/4", "7/8"};
    std::string genre[7] {"pop", "rock", "ballad", "R&B/soul", "hiphop", "alternative", "reggae"};
    std::string instrument[5] {"Electric Guitar", "Acoustic Guitar", "Drum Beat", "Piano Chords", "Synth Bass" };
    std::string bandArtist[13]  {"Adele", "Dua Lipa", "The Weeknd", "JayZ", "Bruno Mars", "Kaytranada", "The 1975", "Usher", "Lorde", "Two Door Cinema Club", "Tame Impala", "Beyonce", "Rihanna"};

void genreatormain::on_pushButton_clicked()
{
    // Seed the random number generator
    srand(static_cast<size_t>(time(0)));
//Generate BPM
    // Get a random index for BPM
    int randomIndex = arc4random() % 8;
    // Get the corresponding BPM value
    int randomBpm = std::stoi(bpm[randomIndex]);  // Convert bpm string to integer

    // Set the text in your UI
    ui->bpmTxt->setText(QString::number(randomBpm));

//Genarate time signature
    for (int i = 0; i < 5; ++i)
    {
        int randomIndex = rand() % 5;
        std::string randomTimeSig {};
        randomTimeSig = timeSignature[randomIndex];
        ui->timeSigTxt->setText(QString::fromStdString(randomTimeSig));
    }


//Generate Genre

    for (int i = 0; i < 7; ++i)
    {
        int randomIndex = rand() % 7;
        std::string randomGenre {};
        randomGenre = genre[randomIndex];
        ui->genreTxt->setText(QString::fromStdString(randomGenre));

    }

    //Generate instrument

    for (int i = 0; i < 5; ++i)
    {
        int randomIndex = rand() % 5;  // Generate a random index between 0 and 4
        std::string randomInstrument {};
        randomInstrument = instrument[randomIndex];
        ui->instrumentTxt->setText(QString::fromStdString(randomInstrument));
    }
// Generate Artist
    for (int i = 0; i < 13; ++i)
    {
        int randomIndex = rand() % 13;
        std::string randomBand {};
        randomBand = bandArtist[randomIndex];
        ui->artistTxt->setText(QString::fromStdString(randomBand));
    }

}






