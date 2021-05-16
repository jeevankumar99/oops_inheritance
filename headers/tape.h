
// Definition of class Tape
#include "publication.h"

class Tape : public Publication
{
    private:
        float play_time_minutes;

    public:
        void get_data();
        void put_data();
};