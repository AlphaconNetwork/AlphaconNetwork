// Copyright (c) 2017-2019 The Raven Core developers
// Copyright (c) 2019 The Alphacon Core developers
// Distributed under the MIT software license, see the accompanying
// file COPYING or http://www.opensource.org/licenses/mit-license.php.

#include "tokentypes.h"

int IntFromTokenType(KnownTokenType type) {
    return (int)type;
}

KnownTokenType TokenTypeFromInt(int nType) {
    return (KnownTokenType)nType;
}