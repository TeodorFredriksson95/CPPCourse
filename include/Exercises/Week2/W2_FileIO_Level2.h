
#ifndef CPPCOURSE_W2_FILEIO_LEVEL2_H
#define CPPCOURSE_W2_FILEIO_LEVEL2_H

#include <string>
#include "W2_FileIO_Level0.h"

namespace Week2::FileIO_Level2 {
    struct ScoreEntry {
        std::string name;
        int score {0};
    };


    FileIO_Level0::StatusCode CSVSaveFile(const std::string& name, int score);
}

#endif //CPPCOURSE_W2_FILEIO_LEVEL2_H