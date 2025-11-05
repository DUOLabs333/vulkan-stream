#include <boost/json.hpp>
#include <cstdint>

void addToDeletionBatch(uint64_t handle, boost::json::object json);
bool pushHintDeletionBatch();
void sendDeletionBatch();
void updateDeletionBatchPushHint(uint64_t handle, uint32_t size);

