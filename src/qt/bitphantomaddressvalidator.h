// Copyright (c) 2009-2017 The Bitcoin Core developers
// Copyright (c) 2018-2018 The bitphantom Core developers
// Distributed under the MIT software license, see the accompanying
// file COPYING or http://www.opensource.org/licenses/mit-license.php.

#ifndef bitphantom_QT_bitphantomADDRESSVALIDATOR_H
#define bitphantom_QT_bitphantomADDRESSVALIDATOR_H

#include <QValidator>

/** Base58 entry widget validator, checks for valid characters and
 * removes some whitespace.
 */
class bitphantomAddressEntryValidator : public QValidator
{
    Q_OBJECT

public:
    explicit bitphantomAddressEntryValidator(QObject *parent);

    State validate(QString &input, int &pos) const;
};

/** bitphantom address widget validator, checks for a valid bitphantom address.
 */
class bitphantomAddressCheckValidator : public QValidator
{
    Q_OBJECT

public:
    explicit bitphantomAddressCheckValidator(QObject *parent);

    State validate(QString &input, int &pos) const;
};

#endif // bitphantom_QT_bitphantomADDRESSVALIDATOR_H
