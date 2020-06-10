#if !defined(RNA_TRANSCRIPTION_H)
#define RNA_TRANSCRIPTION_H

#include <string>
#include <unordered_map>

namespace rna_transcription {

static std::unordered_map<char, char> complements =
{
    { 'G', 'C' },
    { 'C', 'G' },
    { 'T', 'A' },
    { 'A', 'U' }
};

std::string to_rna(const std::string& dna);
char to_rna(char dna);

}  // namespace rna_transcription

#endif // RNA_TRANSCRIPTION_H
