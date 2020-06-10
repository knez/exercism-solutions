#include "rna_transcription.h"

#include <string>
#include <sstream>

namespace rna_transcription {

std::string to_rna(const std::string& dna)
{
    std::stringstream rna;
    for (auto n : dna) 
        rna << complements[n]; 
    return rna.str();
}

char to_rna(char dna)
{
    return complements[dna];
}

}  // namespace rna_transcription
