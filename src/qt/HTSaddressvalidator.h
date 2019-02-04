// Copyright (c) 2011-2014 The Bitcoin Core developers
// Distributed under the MIT software license, see the accompanying
// file COPYING or http://www.opensource.org/licenses/mit-license.php.

#ifndef HTS_QT_HTSADDRESSVALIDATOR_H
#define HTS_QT_HTSADDRESSVALIDATOR_H

#include <QValidator>

/** Base58 entry widget validator, checks for valid characters and
 * removes some whitespace.
 */
class HTSAddressEntryValidator : public QValidator
{
    Q_OBJECT

public:
    explicit HTSAddressEntryValidator(QObject *parent);

    State validate(QString &input, int &pos) const;
};

/** HTS address widget validator, checks for a valid HTS address.
 */
class HTSAddressCheckValidator : public QValidator
{
    Q_OBJECT

public:
    explicit HTSAddressCheckValidator(QObject *parent);

    State validate(QString &input, int &pos) const;
};

#endif // HTS_QT_HTSADDRESSVALIDATOR_H
