/*
  Copyright (c) 2011 - Tőkés Attila

  This file is part of SmtpClient for Qt.

  SmtpClient for Qt is free software: you can redistribute it and/or modify
  it under the terms of the GNU General Public License as published by
  the Free Software Foundation, either version 2 of the License, or
  (at your option) any later version.

  SmtpClient for Qt is distributed in the hope that it will be useful,
  but WITHOUT ANY WARRANTY.

  See the LICENCE file for more details.
*/

#ifndef MIMEFILE_H
#define MIMEFILE_H

#include "mimepart.h"
#include <QFile>

class MimeFile : public MimePart
{
    Q_OBJECT
public:

    /* [1] Constructors and Destructors */

    MimeFile(QFile *f);
    ~MimeFile();

    /* [1] --- */


    /* [2] Getters and Setters */

    void setName(const QString & name);
    void setType(const QString & type);

    const QString & getName() const;
    const QString & getType() const;

    /* [2] --- */

protected:

    /* [3] Protected members */

    QFile* file;
    QString name;
    QString type;

    /* [3] --- */


    /* [4] Protected methods */

    void prepare();

    /* [4] --- */

};

#endif // MIMEFILE_H
