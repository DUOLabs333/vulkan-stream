use ahash::AHasher;
use std::hash::Hasher;

#[no_mangle]
pub extern "C" fn RHash(bytes: * const u8, len: u64) -> u64 {
    let mut hasher = AHasher::default();
    let data = unsafe { std::slice::from_raw_parts(bytes, len as usize) };
    hasher.write(data);
    return hasher.finish();
}
