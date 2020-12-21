const
  MAX_LENGTH_BYTES* = 8

  BLOB_START_MARKER* = byte(128)
  LIST_START_MARKER* = byte(192)

  THRESHOLD_LIST_LEN* = 56

  LEN_PREFIXED_BLOB_MARKER* = byte(BLOB_START_MARKER + THRESHOLD_LIST_LEN - 1) # 183
  LEN_PREFIXED_LIST_MARKER* = byte(LIST_START_MARKER + THRESHOLD_LIST_LEN - 1) # 247
