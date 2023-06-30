#include <iostream>

class Movie {
    private:
        unsigned int mId;
        std::string mTitle;
        std::string mGenre;
        std::string mProduction;
        unsigned int mNumOfCopies;
        std::string mImgFilename;

        static unsigned int mIdCounter;

    public:
        Movie();
        ~Movie();

        void setTitle(std::string title);
        void setGenre(std::string genre);
        void setProduction(std::string production);
        void setNumOfCopies(unsigned int numOfCopies);
        void setImgFilename(std::string imgFilename);

        void getTitle();
        void getGenre();
        void getProduction();
        void getNumOfCopies();
        void getImgFilename();

        void increaseNumOfCopies();
        void decreaseNumOfCopies();

        bool operator==(const Movie& movie) const;
};