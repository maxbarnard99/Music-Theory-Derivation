#include "MusicTheory.h"
#include "algorithms.cpp"

#include <iostream>


///// ET 133D /////

/**
 * @brief Construct a C Major scale 
 * 
 * 
 */
//Scale::Scale() { SetRoot('C'), SetMode("Ionian"), ; }

// /**
//  * @brief Construct a scale or mode of user preference
//  * 
//  */
// Scale::Scale( char root_note, std::string mode ) {
//     SetRoot(root_note);
//     SetMode(mode);

// }

/**
 * @brief builds a mode or scale
 * 
 * @param root_note 
 * @param mode 
 */
void Scale::BuildScale(char root_note, std::string mode)
{

    char scale_build;
    
    //Finds which scale degree to start on
    int mode_index = find_index(Modes, 7, mode);  //may need +1 for indecies 
    if ( find_index(FlatKeys, 4, root_note) )
    {
        int root_index = find_index(NotesFlat, 12, root_note);
    }
    else
    {
        int root_index = find_index(Notes, 12, root_note);
    }
    
}

/**
 * @brief determines the harmonization of a scale
 * 
 * @param scale 
 * @param mode 
 */
void Scale::DetermineHarmony(std::array<char, 7> scale, std::string mode)
{

}