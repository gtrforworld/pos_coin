// Copyright (c) 2021 The ULMEX Core developers
// Distributed under the MIT software license, see the accompanying
// file COPYING or https://www.opensource.org/licenses/mit-license.php.

#ifndef ULMEX_POS_TEST_FIXTURE_H
#define ULMEX_POS_TEST_FIXTURE_H

#include "test/test_ulmex.h"

class CWallet;

/*
 * A text fixture with a preloaded 250-blocks regtest chain running running on PoS
 * and a wallet containing the key used for the coinbase outputs.
 */
struct TestPoSChainSetup: public TestChainSetup
{
    std::unique_ptr<CWallet> pwalletMain;

    TestPoSChainSetup();
    ~TestPoSChainSetup();
};

#endif // ULMEX_POS_TEST_FIXTURE_H
