#include "barretenberg/vm2/simulation/lib/db_interfaces.hpp"

#include <cassert>
#include <gmock/gmock.h>

namespace bb::avm2::simulation {

class MockContractDB : public ContractDBInterface {
    // https://google.github.io/googletest/gmock_cook_book.html#making-the-compilation-faster
    MockContractDB();
    ~MockContractDB() override;

    MOCK_METHOD(ContractInstance, get_contract_instance, (const AztecAddress& address), (const, override));
    MOCK_METHOD(ContractClass, get_contract_class, (const ContractClassId& class_id), (const, override));
};

class MockMerkleDB : public MerkleDBInterface {
    // https://google.github.io/googletest/gmock_cook_book.html#making-the-compilation-faster
    MockMerkleDB();
    ~MockMerkleDB() override;

    MOCK_METHOD(const TreeRoots&, get_tree_roots, (), (const, override));
};

} // namespace bb::avm2::simulation
