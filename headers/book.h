
// Definition of class Book

#include "publication.h"

class Book : virtual public Publication
{
    private:
        int page_count;
    
    public:
        void get_data();
        void put_data();
};