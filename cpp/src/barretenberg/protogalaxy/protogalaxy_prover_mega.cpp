// Note: this is split up from protogalaxy_prover_impl.hpp for compile performance reasons
#include "barretenberg/flavor/flavor.hpp"
#include "barretenberg/ultra_honk/decider_keys.hpp"
#include "barretenberg/ultra_honk/oink_prover.hpp"
#include "protogalaxy_prover_impl.hpp"
namespace bb {

template class ProtogalaxyProver_<DeciderProvingKeys_<MegaFlavor, 2>>;
} // namespace bb