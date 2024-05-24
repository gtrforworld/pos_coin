// Copyright (c) 2019 The ULMEX Core developers
// Distributed under the MIT software license, see the accompanying
// file COPYING or http://www.opensource.org/licenses/mit-license.php.

#ifndef ULMEX_CORE_NEW_GUI_PRUNNABLE_H
#define ULMEX_CORE_NEW_GUI_PRUNNABLE_H

class Runnable {
public:
    virtual void run(int type) = 0;
    virtual void onError(QString error, int type) = 0;
};

#endif //ULMEX_CORE_NEW_GUI_PRUNNABLE_H
