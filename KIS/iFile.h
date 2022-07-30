#ifndef IFILE_H
#define IFILE_H
#include<QString>

class iFile
       {
public:
    virtual bool write(QString path, QString data ) = 0 ;
    virtual QString read( QString path ) = 0;

};

#endif // IFILE_H
