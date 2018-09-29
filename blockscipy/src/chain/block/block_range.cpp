//
//  block_range.cpp
//  blocksci_interface
//
//  Created by Harry Kalodner on 4/21/18.
//

#include "block_range_py.hpp"
#include "ranges_py.hpp"
#include "caster_py.hpp"

#include <blocksci/chain/block.hpp>
#include <blocksci/cluster/cluster.hpp>
#include <blocksci/address/equiv_address.hpp>

namespace py = pybind11;
using namespace blocksci;

void addBlockRangeMethods(RangeClasses<blocksci::Block> &classes) {
    addAllRangeMethods(classes);
}