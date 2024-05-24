// Copyright (c) 2021 The ULMEX Core developers
// Distributed under the MIT software license, see the accompanying
// file COPYING or https://www.opensource.org/licenses/mit-license.php.

#ifndef ULMEX_BLOCKSUTIL_H
#define ULMEX_BLOCKSUTIL_H

#include "primitives/block.h"
#include <memory>

// Process block and boost_check for the specific rejection reason.
void ProcessBlockAndCheckRejectionReason(std::shared_ptr<CBlock>& pblock,
                                         const std::string& blockRejectionReason,
                                         int expectedChainHeight);

CBlock getBlock13b8a();

#endif //ULMEX_BLOCKSUTIL_H
