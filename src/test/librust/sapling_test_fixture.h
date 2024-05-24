// Copyright (c) 2020-2021 The ULMEX Core developers
// Distributed under the MIT software license, see the accompanying
// file COPYING or https://www.opensource.org/licenses/mit-license.php.

#ifndef ULMEX_SAPLING_TEST_FIXTURE_H
#define ULMEX_SAPLING_TEST_FIXTURE_H

#include "test/test_ulmex.h"

/**
 * Testing setup that configures a complete environment for Sapling testing.
 */
struct SaplingTestingSetup : public TestingSetup
{
    SaplingTestingSetup(const std::string& chainName = CBaseChainParams::MAIN);
    ~SaplingTestingSetup();
};

/**
 * Regtest setup with sapling always active
 */
struct SaplingRegTestingSetup : public SaplingTestingSetup
{
    SaplingRegTestingSetup();
};


#endif //ULMEX_SAPLING_TEST_FIXTURE_H
