// Copyright (c) 2009-2017 The Bitcoin Core developers
// Copyright (c) 2018-2018 The bitphantom Core developers
// Distributed under the MIT software license, see the accompanying
// file COPYING or http://www.opensource.org/licenses/mit-license.php.

#ifndef bitphantom_QT_TEST_RPCNESTEDTESTS_H
#define bitphantom_QT_TEST_RPCNESTEDTESTS_H

#include <QObject>
#include <QTest>

#include <txdb.h>
#include <txmempool.h>

class RPCNestedTests : public QObject
{
    Q_OBJECT

    private Q_SLOTS:
    void rpcNestedTests();
};

#endif // bitphantom_QT_TEST_RPCNESTEDTESTS_H
