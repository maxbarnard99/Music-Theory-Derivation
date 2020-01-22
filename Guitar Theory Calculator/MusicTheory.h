#ifndef MUSICTHEORY_H
#define MUSICTHEORY_H

#include <vector>
#include <string>
#include <array>
#include <algorithm>

/**
 * @brief Will be used to build scales and modes
 * 2 = Whole Step
 * 1 = Half Step 
 * 
 */
int MajorScaleIntervals[] = {2,2,1,2,2,2,1};
/**
 * @brief 12 of in western music theory.
 * 
 */
char Notes[] = {'C', 'C#', 'D', 'D#', 'E', 'F', 'F#', 'G', 'G#', 'A', 'A#', 'B'};
/**
 *@brief 12 of in western music theory - using flats
 * 
 */
char NotesFlat[] = {'C', 'Db', 'D', 'Eb', 'E', 'F', 'Gb', 'G', 'Ab', 'A', 'Bb', 'B'};
/**
 * @brief Modes of a Major scale
 * 
 */
std::string Modes[] = { "Ionian", "Dorian", "Phrygian", "Lydian", "Mixolydian", "Aeolian", "Locrian"};
/**
 * @brief used to determine harmonization of scale tones 
 * - (is a chord Major, minor, or diminished, for a given tone in a scale)
 * - order is for Ionian 
 * 
 */
char MajorHarmonization[] = {'M', 'm', 'm', 'M', 'M', 'm', 'd' }; //could cause problems in case-insensitive cases
/**
 * @brief used to determine whether to build scale using sharps or flats 
 * 
 */
char FlatKeys[] = {'F', 'Bb', 'Eb', 'Ab'};



class Scale
{

private: 

char root_note_;
std::string mode_;
char scale_[] ;
char harmony_[];

public: 

//constructors 
Scale();
Scale( char root_note , std::string mode, std::array<char, 7> scale, std::array<char, 7> harmonizations);
~Scale() {}

//setters 
void SetRoot(char root_note) { root_note_ = root_note; };
void SetMode(std::string mode) { mode_ = mode; };
void SetScale(std::array<char, 7> scale) {scale_ = scale; };
void SetHarmony(std::array<std::string, 7> harmony ) { harmony_ = harmony; };

//other methods 
void BuildScale(char root_note, std::string mode);
void DetermineHarmony(std::array<char, 7> scale, std::string mode);

};

#endif