

#ifndef CPPCOURSE_W2_FILEIO_LEVEL0_H
#define CPPCOURSE_W2_FILEIO_LEVEL0_H


namespace Week2::FileIO_Level0 {
    enum StatusCode {
        SUCCESS, FAILURE
    };

    StatusCode WriteSingleScoreIO(int const score);
    StatusCode AppendScoreToFile(int const score);
}

#endif //CPPCOURSE_W2_FILEIO_LEVEL0_H